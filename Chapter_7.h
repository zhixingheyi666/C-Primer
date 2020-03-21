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
	////�����Ԫ
	friend auto read_76(decltype(cin)& cin_i, Sales_data& data_a)->decltype(cin)&;
	friend auto print_76(std::ostream& cout_i, const Sales_data& data_a)->std::ostream&;
	friend void book1_73();

public:
	//��ӹ��캯��
	//Sales_data() = default;
	//Sales_data(const std::string& s) :bookNo(s) {};
	//Sales_data(const std::string& s,const unsigned& n, double& p) :bookNo(s), units_sold(n), revenue(n*p) {};
	//Sales_data(const std::string& s,const unsigned n, double p) :bookNo(s), units_sold(n), revenue(n* p) {};
	//Sales_data(std::istream&);

	////7.41ί�й��캯�� ϰ��
	Sales_data(const std::string& s, const unsigned n, double p) :bookNo(s), units_sold(n), revenue(n* p) { cout << __FUNCTION__ << "(s,n,p)\n"; };
	Sales_data() :Sales_data("", 0, 0) { cout << __FUNCTION__ << "()\n"; }
	Sales_data(const std::string& s) :Sales_data(s, 0, 0) { cout << __FUNCTION__ << "(s)\n"; }
	explicit Sales_data(std::istream& is) :Sales_data() { cout << __FUNCTION__ << "(istream)\n"; read_76(is, *this); }

	//����Ĳ���
	string isbn() const { return bookNo; }
	//Sales_data& combine(const Sales_data& sd);
	Sales_data& combine(const Sales_data& sd);
	double avg_price() const;

private:
	//���������
	string bookNo;//����string����Ĭ�ϳ�ʼ����������������ʱû���ṩ��ֵ������֤���ʼ��Ϊ���ַ�����
	//unsigned units_sold ;//���������ݳ�Ա���ṩ��ֵ�����ҹ������ʱҲû���ṩ�����߹��캯��û�õ���ֵ��ִ��Ĭ�ϳ�ʼ��������֤�õ�δ����ĳ�ֵ
	unsigned units_sold = 0;
	double revenue = 0.0;

};

////@@self�����ⶨ��������캯�����õ���read_76��������Ķ��廹�ں��棬����ͱ����Ҳ���read_76�������������˳�����Ҫ
//Sales_data::Sales_data(std::istream& cin_i) {
//	read_76(cin_i, *this);
//}



inline //self@@??:���ﲻ��inline����ʾ��������ظ�����
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

////@@self:�����������⣬Ҳ���������.hͷ�ļ��ж��庯�����������inline���ͻᱨ<�ظ�����>��ԭ��
////@@ÿ��includeһ��ͷ�ļ�������������Ͷ���ͻᱻִ��һ�飬����֪��������������������������ǲ������ζ���
////@@���Ե��ж���ļ�includeͬһ�����к��������.h�ļ�ʱ����������ͱ������˶�Σ����Ծͱ�<�ظ�����>
////@@��ʹ����inline����Щ�����ͱ������� class����struct���ڲ�����������.hͷ�ļ��е�class��struct�Ĵ����뺯����ͬ��Ӧ����ֻ����һ��
////@@self:����inline�Ļ��ֱ�<�ظ�����>������
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
		if (i >= screens.size()) return screens[0];////@@��һ screens һ��Ԫ��Ҳû�У�����ôд�أ�
		return screens[i];
	}

private:
	std::vector<Screen> screens;

};//class��struct�Ķ���ĩβ�����";"��



class Screen {
public:

	////�������ͱ���
	typedef std::string::size_type pos;

	////��Ԫ��������Ԫ��
	friend void Window_mgr::clear(Screen_index);////@@self:�տ�ʼ�õĹؼ���class��Ī������һ�ԡ�ԭ�������Ǹ�����������Ҫ�ú��������Ĺؼ���void
	//friend class Window_mgr;//class Window_mgr���Է���Screen��˽�в���


	////���캯��
	//Screen() = default;
	//Screen(pos h, pos w) :high(h), width(w), content(h* w, ' ') {}
	//Screen(pos h = 24, pos w = 80, char c = ' ') :high(h), width(w), content(h* w, c) {}

	////ί�й��캯��
	Screen(pos h = 24, pos w = 80, char c = ' ') :high(h), width(w), content(h* w, c) {}
	Screen() :Screen(24, 80, ' ') {};
	Screen(pos h, pos w) :Screen(h, w, ' ') {}


	////��Ա����
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
	//NoDefault743 & get() const { return nd; } //����get�ķ���ֵ������const������return��nd����const����
	NoDefault743& get() { return nd; }
};

class C743_1 {

	NoDefault743 nd;
public:
	//NoDefault743 & get() const { return nd; } //����get�ķ���ֵ������const������return��nd����const����
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
