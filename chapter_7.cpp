#include <iostream>
#include<string>

#include "Chapter_7.h"
#include "Person_i.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;



//Sales_data::Sales_data(std::istream& cin_i) {
//	read_76(cin_i, *this);
//}

inline double Sales_data::avg_price() const {
	if (units_sold) { return revenue / units_sold; }
	return 0.0;
}

////self@@:Sales_data& Sales_data::combine(Sales_data& sd) {
////7.49 combine的不同声明，对调用有实际影响的，例如声明写成Sales_data &Sales_data::combine(Sales_data &)，
////此时就不能向combine传入string类型，string类型虽然可以隐式转换成Sales_data,但是这个转换后的临时Sales_data对象是const类型的，所以隐式转换最终失败，报错如下。
////Error	C2664	'Sales_data &Sales_data::combine(Sales_data &)': cannot convert argument 1 from 'std::string' to 'Sales_data &'	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.cpp	179
////然而，如果声明是这样的 Sales_data& Sales_data::combine(const Sales_data& sd) ，上述转换成功，调用也成功

Sales_data& Sales_data::combine(Sales_data const & sd) {
	units_sold += sd.units_sold;
	revenue += sd.revenue;
	return *this;
}

Screen::pos Screen::get_size() {
	return high * width;
}

Screen& Screen::move(pos r, pos c) {
	cursor = width * r + c;
	return *this;
}

char Screen::get(pos r, pos c) const {
	return content[r * width + c];
}

void Screen::some_member() const { ++access_count; }

void Window_mgr::clear(Screen_index i) {
	if (i >= screens.size()) return;
	Screen& s = screens[i];
	std::string s74(s.high * s.width, ' ');
	s.content = s74;
}

Window_mgr::Screen_index Window_mgr::add_Screen(const Screen& s) {
	screens.push_back(s);
	return screens.size() - 1;
}





////7.3
void book1_73() {
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.isbn() << " " << total.units_sold << " " << total.revenue << endl;
	}
	else { cout << "++++++++++++++++++ERROR+++++++++++++++++++++\n" << "No Data!\n"; }
}

////7.7
void book1_76() {
	Sales_data total;
	if (read_76(cin, total)) {
		Sales_data trans;
		while (read_76(cin, trans)) {
			if (total.isbn() == trans.isbn()) {
				//total.combine(trans);
				total = add_76(total, trans);
			}
			else { print_76(cout, total) << endl, total = trans; }
		}
		print_76(cout, total) << std::endl;
	}
	else { cout << "++++++++++++++++++" << __FUNCTION__ << ": ERROR+++++++++++++++++++++\n" << "No Data!\n"; }
}

void person1_86() {
	//self:???如果输入为空，就会卡住，这个跟person_i的构造函数写的不完善有关
	person_i total(cin);
	if (total.get_name() != "") {
		person_i trans;
		while (read_86(cin, trans)) {
			if (total.get_name() == trans.get_name()) {
				//cout << "Address: " << total.get_adr() << "\n";
				//cout << "Address: " << total.address << "\n";
				//total.address += " |" + trans.address;//成员私有化了后，获取不到了
			}
			else { print_76(cout, total) << endl, total = trans; }
		}
		print_76(cout, total) << endl, total = trans;
	}
	else { cout << "++++++++++++++++++" << __FUNCTION__ << ": ERROR+++++++++++++++++++++\n" << "No Data!\n"; }
}
Sales_data add_tt(Sales_data const& item_a, Sales_data const& item_b) {
	Sales_data sum = item_a;
	sum.combine(item_b);
	return sum;
}

inline //self@@:这里做了一个测试，在chapter_1_6.cpp中定义了一个同名的函数，如果不加inline，则会报函数重复定义。但是加上inline后，就不报错了。
void f_test() {}

////7.11
void book11_76() {
	Sales_data test_null;
	print_76(cout, test_null) << std::endl;
	//Sales_data test("Only",100);//与所有构造函数的形参列表不匹配，将报错
	Sales_data test("Only");
	print_76(cout, test) << std::endl;
	Sales_data total(cin);
	//total(cin);//构造函数只能在定义时用一次
	if (cin.flags()) {
		Sales_data trans("C++ primer", 1000, 88.88);
		print_76(cout, trans) << std::endl;
		print_76(cout, total) << std::endl;
		//while (read_76(cin, trans)) {
		//	if (total.isbn() == trans.isbn()) {
		//		//total.combine(trans);
		//		total = add_76(total, trans);
		//	}
		//	else { print_76(cout, total)<<endl, total = trans; }
		//}
		//print_76(cout, total)<<std::endl;
	}
	else { cout << "++++++++++++++++++" << __FUNCTION__ << ": ERROR+++++++++++++++++++++\n" << "No Data!\n"; }
}

void screen1_727() {
	Screen myScreen(5, 100, '_');
	//myScreen.move(4, 0).set('#').display(cout);
	Window_mgr s_mgr(myScreen);
	for (int i = 0; i < 5; i++) {
		myScreen.move(i, 19 * i).set('5').move(i, 19 * i + 2).set('2').move(i, 19 * i + 4).set('1');
		s_mgr.add_Screen(myScreen);
	}
	cout << '\n';
	for (int i = 0; i < 5; i++) {
		s_mgr.get_screen(i).display(cout);
		cout << "------------------------------*****--------------------------------------\n";
	}
}

void nodefault743() {
	for (char c; cin >> c;) {
		//C743 test743; //self:类C743的数据成员nd,其类型是NoDefault743，没有默认构造函数，导致错误Error(active)	E1790	the default constructor of "C743" cannot be referenced -- it is a deleted function	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.cpp	164
		C743_1 test743; //self:类C743的数据成员nd,其类型是NoDefault743，没有默认构造函数，导致错误Error(active)	E1790	the default constructor of "C743" cannot be referenced -- it is a deleted function	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.cpp	164
		cout << c << " | " << test743.get().get() << endl;
	}
}

////7.5.4类型转换测试
void test7_5_4() {
	Sales_data book1("Prime++", 10, 100);
	for (string iter01; cin >> iter01;) {
		if (book1.isbn() == iter01) {
			cout << "invocation of Sales_data::combine\n";
			////book1.combine(Sales_data("显式构造测试",3,3));//self:原来可以使用类类型通过其构造函数 创造 一个临时的该类型的对象
			book1.combine(iter01);//隐式类型转换string到Sales_data类
			print_76(cout, book1);
		}
		else {
			book1 = iter01;//隐式类型转换，先将string转换为一个临时的Sales_data，然后赋值给book1;
		}
	}
	print_76(cout, book1) << "\n-----------No more input data!---------------";

}

void f7_() {

	//test7_5_4();




	//nodefault743();
	//screen1_727();
	//person1_86();
	//person1_76();
	//book11_76();
	//book1_76();
	//book1_73();

	////7.52
	Aggregate_t agg752 = { "class aggregate",97,101 };
	cout << agg752.bookNo << ":		" << agg752.units_sold * agg752.revenue << endl;
	Agg_constexpr agc753;
	cout << agc753.ee << "|" << agc753.ff << endl;


	////self:: revise the declaration of top and low const
	//string name = "jim", * pname = &name;
	////string const sttt('t');//报错
	//string const stttt(88, 'c');
	////char ct89 = "kan kan bao shen mo cuo wu"; //self:看报错的提示，原来字符串字面值的类型是 const char * ，	Error(active)	E0144	a value of type "const char *" cannot be used to initialize an entity of type "char"	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.cpp	205
	//const char ct11[100]{'t'}, * ptt67 = ct11;//self:字符数组的类型就是const char *
	//string const st888('c');
	//string const st88(88, 'c'), const st="bian yi qi mo ming qi miao"; ////self:两个const写在同一个定义中，编译器报各种莫名错误
	//string* const p1name=&name;
	//string const *p2name=&name;
	//const string *p2name=&name;
}