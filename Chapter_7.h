#pragma once

#ifndef CHAPTER_7_H
#define CHAPTER_7_H


#include <iostream>
#include<string>
#include<vector>


using std::cin;
using std::cout;
using std::endl;
using std::string;


class Sales_data {
	////添加友元
	friend auto read_76(decltype(cin)& cin_i, Sales_data& data_a)->decltype(cin)&;
	friend auto print_76(std::ostream& cout_i, const Sales_data& data_a)->std::ostream&;
	friend void book1_73();

public:
	//添加构造函数
	//Sales_data() = default;
	//Sales_data(const std::string& s) :bookNo(s) {};
	//Sales_data(const std::string& s,const unsigned& n, double& p) :bookNo(s), units_sold(n), revenue(n*p) {};
	//Sales_data(const std::string& s,const unsigned n, double p) :bookNo(s), units_sold(n), revenue(n* p) {};
	//Sales_data(std::istream&);

	////7.41委托构造函数 习题
	Sales_data(const std::string& s, const unsigned n, double p) :bookNo(s), units_sold(n), revenue(n* p) { cout << __FUNCTION__ << "(s,n,p)\n"; };
	Sales_data() :Sales_data("", 0, 0) { cout << __FUNCTION__ << "()\n"; }
	Sales_data(const std::string& s) :Sales_data(s, 0, 0) { cout << __FUNCTION__ << "(s)\n"; }
	explicit Sales_data(std::istream& is) :Sales_data() { cout << __FUNCTION__ << "(istream)\n"; read_76(is, *this); }

	//对象的操作
	string isbn() const { return bookNo; }
	//Sales_data& combine(const Sales_data& sd);
	Sales_data& combine(const Sales_data& sd);
	double avg_price() const;

private:
	//对象的数据
	string bookNo;//根据string对象默认初始化规则，如果构造对象时没有提供初值，经验证会初始化为空字符串。
	//unsigned units_sold ;//如果这个数据成员不提供初值，并且构造对象时也没能提供，或者构造函数没得到初值，执行默认初始化，经验证得到未定义的初值
	unsigned units_sold = 0;
	double revenue = 0.0;

};

////@@self：在这定义这个构造函数，用到了read_76这个函数的定义还在后面，结果就报错找不到read_76这个函数，看来顺序很重要
//Sales_data::Sales_data(std::istream& cin_i) {
//	read_76(cin_i, *this);
//}



inline //self@@??:这里不加inline会提示这个函数重复定义
auto read_76(decltype(cin)& cin_i, Sales_data& data_a)->decltype(cin)& {
	double price = 0.0;
	cin >> data_a.bookNo >> data_a.units_sold >> price;
	data_a.revenue = data_a.units_sold * price;
	return cin_i;
}

inline
auto print_76(std::ostream& cout_i, const Sales_data& data_a)->std::ostream& {
	cout << data_a.isbn() << " " << data_a.units_sold << " " << data_a.revenue << " " << data_a.avg_price();
	return cout_i;
}

inline
Sales_data add_76(Sales_data const& item_a, Sales_data const& item_b) {
	Sales_data sum = item_a;
	sum.combine(item_b);
	return sum;
}

Sales_data add_tt(Sales_data const& item_a, Sales_data const& item_b);

////@@self:对于下面问题，也就是如果在.h头文件中定义函数，如果不用inline，就会报<重复定义>的原因：
////@@每当include一次头文件，里面的声明和定义就会被执行一遍，我们知道编译器允许函数多次声明，但是不允许多次定义
////@@所以当有多个文件include同一个含有函数定义的.h文件时，这个函数就被定义了多次，所以就报<重复定义>
////@@当使用了inline，这些函数就被内联到 class或者struct的内部。编译器对.h头文件中的class和struct的处理与函数不同，应该是只定义一次
////@@self:不用inline的话又报<重复定义>，如下
////Error	LNK2005	"public: __thiscall Sales_data::Sales_data(class std::basic_istream<char,struct std::char_traits<char> > &)" (? ? 0Sales_data@@QAE@AAV?$basic_istream@DU?$char_traits@D@std@@@std@@@Z) already defined in C++Primer.obj	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.obj	1
////Error	LNK1169	one or more multiply defined symbols found	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\Debug\C++Primer.exe	1
//inline
//Sales_data::Sales_data(std::istream& cin_i) {
//	read_76(cin_i, *this);
//}

void book1_73();
void f7_();


////7.23

class Screen;

class Window_mgr {
public:
	using Screen_index = std::vector<Screen>::size_type;
	void clear(Screen_index);

	Window_mgr() = default;
	Window_mgr(Screen& s) { screens.push_back(s); }

	//void push_back(Screen& s) { screens.push_back(s); }
	Screen_index add_Screen(const Screen&);
	const Screen& get_screen(Screen_index i) const {
		if (i >= screens.size()) return screens[0];////@@万一 screens 一个元素也没有，该怎么写呢？
		return screens[i];
	}

private:
	std::vector<Screen> screens;

};//class和struct的定义末尾必须加";"号



class Screen {
public:

	////定义类型别名
	typedef std::string::size_type pos;

	////友元函数及友元类
	friend void Window_mgr::clear(Screen_index);////@@self:刚开始用的关键字class，莫名报错一对。原来这里是个函数，所以要用函数声明的关键字void
	//friend class Window_mgr;//class Window_mgr可以访问Screen的私有部分


	////构造函数
	//Screen() = default;
	//Screen(pos h, pos w) :high(h), width(w), content(h* w, ' ') {}
	//Screen(pos h = 24, pos w = 80, char c = ' ') :high(h), width(w), content(h* w, c) {}

	////委托构造函数
	Screen(pos h = 24, pos w = 80, char c = ' ') :high(h), width(w), content(h* w, c) {}
	Screen() :Screen(24, 80, ' ') {};
	Screen(pos h, pos w) :Screen(h, w, ' ') {}


	////成员函数
	char get() const { return content[cursor]; }

	inline char get(pos r, pos c) const;

	Screen& move(pos r, pos c);

	Screen& set(char c) { content[cursor] = c; return *this; }

	Screen& set(pos x, pos y, char c) { content[x * width + y] = c; return *this; }

	Screen& display(std::ostream& cout_i) {
		do_display(cout_i);
		return *this;
	}

	const Screen& display(std::ostream& cout_i) const {
		do_display(cout_i);
		return *this;
	}

	void some_member() const;

	pos get_size();

private:
	void do_display(std::ostream& cout_i) const {
		for (pos len = high * width, k = 0; k < len; k += width)
			cout << content.substr(k, width) << '\n';
	}


private:
	pos cursor = 0;
	pos high = 0, width = 0;
	std::string content;
	mutable pos access_count = 0;

};



////7.31
class Y731;
class X731;
class X731 { Y731* pyy_731; };
class Y731 { X731 xx_731; };

////7.43
class NoDefault743 {
	int n;
public:
	NoDefault743(int i) :n(i) {}
	int get() const { return n; }
};

class C743 {
	NoDefault743 nd;
public:
	//NoDefault743 & get() const { return nd; } //报错：get的返回值类型是const，但是return的nd不是const类型
	NoDefault743& get() { return nd; }
};

class C743_1 {

	NoDefault743 nd;
public:
	//NoDefault743 & get() const { return nd; } //报错：get的返回值类型是const，但是return的nd不是const类型
	NoDefault743& get() { return nd; }

	C743_1() :nd(0) {};
};

////7.52
struct Aggregate_t {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

struct Agg_constexpr {
	const char *ff="File";
	const string &ee="Edit";

};

//void f_test();
#endif // !CHAPTER_7_H
