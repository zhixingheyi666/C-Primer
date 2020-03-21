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
////7.49 combine�Ĳ�ͬ�������Ե�����ʵ��Ӱ��ģ���������д��Sales_data &Sales_data::combine(Sales_data &)��
////��ʱ�Ͳ�����combine����string���ͣ�string������Ȼ������ʽת����Sales_data,�������ת�������ʱSales_data������const���͵ģ�������ʽת������ʧ�ܣ��������¡�
////Error	C2664	'Sales_data &Sales_data::combine(Sales_data &)': cannot convert argument 1 from 'std::string' to 'Sales_data &'	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.cpp	179
////Ȼ������������������� Sales_data& Sales_data::combine(const Sales_data& sd) ������ת���ɹ�������Ҳ�ɹ�

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
	//self:???�������Ϊ�գ��ͻῨס�������person_i�Ĺ��캯��д�Ĳ������й�
	person_i total(cin);
	if (total.get_name() != "") {
		person_i trans;
		while (read_86(cin, trans)) {
			if (total.get_name() == trans.get_name()) {
				//cout << "Address: " << total.get_adr() << "\n";
				//cout << "Address: " << total.address << "\n";
				//total.address += " |" + trans.address;//��Ա˽�л��˺󣬻�ȡ������
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

inline //self@@:��������һ�����ԣ���chapter_1_6.cpp�ж�����һ��ͬ���ĺ������������inline����ᱨ�����ظ����塣���Ǽ���inline�󣬾Ͳ������ˡ�
void f_test() {}

////7.11
void book11_76() {
	Sales_data test_null;
	print_76(cout, test_null) << std::endl;
	//Sales_data test("Only",100);//�����й��캯�����β��б�ƥ�䣬������
	Sales_data test("Only");
	print_76(cout, test) << std::endl;
	Sales_data total(cin);
	//total(cin);//���캯��ֻ���ڶ���ʱ��һ��
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
		//C743 test743; //self:��C743�����ݳ�Աnd,��������NoDefault743��û��Ĭ�Ϲ��캯�������´���Error(active)	E1790	the default constructor of "C743" cannot be referenced -- it is a deleted function	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.cpp	164
		C743_1 test743; //self:��C743�����ݳ�Աnd,��������NoDefault743��û��Ĭ�Ϲ��캯�������´���Error(active)	E1790	the default constructor of "C743" cannot be referenced -- it is a deleted function	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.cpp	164
		cout << c << " | " << test743.get().get() << endl;
	}
}

////7.5.4����ת������
void test7_5_4() {
	Sales_data book1("Prime++", 10, 100);
	for (string iter01; cin >> iter01;) {
		if (book1.isbn() == iter01) {
			cout << "invocation of Sales_data::combine\n";
			////book1.combine(Sales_data("��ʽ�������",3,3));//self:ԭ������ʹ��������ͨ���乹�캯�� ���� һ����ʱ�ĸ����͵Ķ���
			book1.combine(iter01);//��ʽ����ת��string��Sales_data��
			print_76(cout, book1);
		}
		else {
			book1 = iter01;//��ʽ����ת�����Ƚ�stringת��Ϊһ����ʱ��Sales_data��Ȼ��ֵ��book1;
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
	////string const sttt('t');//����
	//string const stttt(88, 'c');
	////char ct89 = "kan kan bao shen mo cuo wu"; //self:���������ʾ��ԭ���ַ�������ֵ�������� const char * ��	Error(active)	E0144	a value of type "const char *" cannot be used to initialize an entity of type "char"	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_7.cpp	205
	//const char ct11[100]{'t'}, * ptt67 = ct11;//self:�ַ���������;���const char *
	//string const st888('c');
	//string const st88(88, 'c'), const st="bian yi qi mo ming qi miao"; ////self:����constд��ͬһ�������У�������������Ī������
	//string* const p1name=&name;
	//string const *p2name=&name;
	//const string *p2name=&name;
}