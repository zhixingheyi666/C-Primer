
#include <iostream>
//#include <stdio.h>
//#include <iomanip>
//#include "sales_item.h"
//#include "sales_data.h"
#include <cstdio>
//#include <string>
#include <vector>
#include <iterator>
#include <cstring>
#include<stdexcept>
#include<initializer_list>



////自编头文件

#include "Chapter_1_6.h"
#include "Luogu.h"



//using namespace std;
using std::cin;
using std::cerr;
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::runtime_error;
using std::exception;
using std::begin;
using std::end;
using std::initializer_list;


////Chapter 1

void f1_()
{
	//cout << "/*";
	//cout << "*/";
	//cout << /* "*/" */;
	//cout << /* "*/" /* "/*" */;
	//int sum = 0;
	//for (int i = -100; i <= 100; ++i)
	//	sum += i;
	//cout << "Sum:" << sum << "\n";
	//for(Sales_item item; cin >> item;cout << item <<endl);
	//string ss = "one" "and" "tow"; //两个字符串之间仅有空格换行制表符，则实际上是一个字符串
	//cout << ss;

	////@@重要笔记

	//输入流中用成员 eofbit  来记录是否遇到 EOF ，再遇到EOF后 eofbit将被设置为1， 可以用成员函数 ::eof()来测试。
	//输入流是以行为缓冲的 意思是只有在一次输入以 enter 结束时 输入流才真正开始工作（读取）
	//EOF （win -- ctrl + z，unix -- ctrl + d）
	//而只有当 EOF 出现在一行输入的首部时  输入流才会正确的设置 eofbit
	//当EOF 出现在 一行输入的中间或者末尾 输入流会自动忽视掉 EOF 以及 跟在它后面的参数
	//(@@self vs2019实测，出现在中间的ctrl + z不会被识别为EOF,但是也不会被忽略，而是读入作为一向右的箭头,他后面本行内容确实会被自动忽视掉)
	//当输入  1 2 3 EOF 4 5 6 < enter > 后， 只有1 2 3 右侧箭头 被正确输入 而  4 5 6将被输入流忽视 直接等待下面的输入
	//原文链接：https ://blog.csdn.net/foxpeter/article/details/6072130	

	////noskipws探究

	//char char1;
	//string buff1;
	////while (cin >> std::noskipws >> char55) {
	////	cout << "+" << char55 << "+";
	////}
	//while (cin >> std::noskipws >> buff1) {//经测试，noskipws这里并不适用，这个标记只适用于单个字符读入，会读入空白。这里的空白会被读入，导致同时结束循环
	//	cout << "+" << buff1 << "+";
	//}

}

////Chapter 2

void f2_()
{
	//如果我们使用列表初始化，并且初始值存在丢失信息的风险，编译器将报错
	//int ii = { 3 },i5i(99);//不报错
	//int iii = (3.7);//编译器会提示类型转换存在部分数据丢失危险
	//int i6i{9.8}; //错误:转换未执行,因为存在丢失信息的危险 ,Error	C2397	conversion from 'double' to 'int' requires a narrowing conversion

	//int oo = 017;
	//cout << "\n" << oo;

	//int nn = 6, * pp = 0,*pp10;
	//cout << "Pointer:" << *pp << "\n";//调试时到此卡住:Exception thrown: read access violation,pp is nullptr
	//cout << "Pointer:" << *(pp+2) << "\n";//调试时到此卡住:Exception thrown: read access violation,pp is nullptr
	//cout << "Pointer:" << *pp10 << "\n";//调试时到此卡住: 0xC0000005: Access violation reading location 0x00000008. occurredException thrown: read access violation
	//Error	C4700	uninitialized local variable 'pp10' used	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\C++Primer.cpp	62

	//int iii = 42, & r1 = iii;
	//const int &r2 = iii;
	//self:常量引用，指的是“指向常量的引用”，但也只是名义如此。真实的区别是，不能通过这个（const修饰的）引用而改变 <引用所指对象> 的值
	//r2 = 30;//非法，不能给常量引用赋值
	//cout << "iii(r1和r2是对其的引用，r2是常量引用): " << iii << "\n"; 
	//cout << "r2 before r1 = r1 + 3: " << r2 << "\n";
	//cout << "r1+3: " << (r1 = r1 + 3) << "\n";
	//cout << "r2 after r1 = r1 + 3: " << r2 << "\n";

	//const int i = 42;
	//auto j = i;
	//const auto j2 = i;
	//const auto& k = i;
	//auto& kk = i;
	//auto* p = &i;

	//double price;
	//Sales_data data1, data2;
	//cin >> data1.bookNo >> data1.units_sold >> price;
	//data1.revenue = data1.units_sold * price;
	//cin >> data2.bookNo >> data2.units_sold >> price;
	//data2.revenue = data2.units_sold * price;
	//if (data1.bookNo == data2.bookNo)
	//{
	//	cout << "total revenu: " << data1.revenue + data2.revenue;
	//}	
	//else {
	//	cout << "Data must refer to the same ISBN" << endl;
	//}

}

void f2_decltype()
{
	////self@@@:20191212此处概念理解有些模糊
	//const int ci = 7, & cj = ci;
	//decltype(ci) x = 0; //x的类型是const int,decltype保留了顶层const
	//decltype(cj) y = x;//y的类型是const int&,因为cj是一个引用，所以decltype(cj)的结果就是引用类型，decltype会返回引用类型，而不是引用指向的对象的类型
	//decltype(cj) z;//错误，z是一个引用，所以必须被初始化
	////@@需要指出，引用从来都是作为所指对象的同义词出现，只有在decltype处是个例外
	////@@如果decltype使用的是表达式而不是一个变量，则decltype返回表达式结果对应的类型
	//int di = 88,ddi=67, * dp = &di, & dr = di;

	////下面先研究理解一下<表达式>
	////1.
	//(*dp);
	////此处看出，用小括号括起来的变量，就成为一个表达式，
	////这个表达式的<返回值>，或者表达式计算的结果对象，能作为一条赋值语句的左值,如下
	//(*dp) = 66;
	////self@@:也就是说这个表达式的结果相当于 di (指针dp指向的对象)一个<别名>,(*dp)即是对di的一个<引用>,可以像引用一样作为赋值语句的左值
	////所以如下，对上面使用decltype将得到<引用类型>
	//decltype(*dp) ddpp = ddi;
	//cout << "the value of ddpp shuold be the same to ddi(67)\n ddpp = " << ddpp;
	//
	////2.
	//(di);
	////此处看出，用小括号括起来的变量，就成为一个表达式，
	////这个表达式的<返回值>，或者表达式计算的结果对象，能作为一条赋值语句的左值,如下
	//(di) = 999;
	////self@@:也就是说这个表达式的结果相当于 di<别名>,是对di的一个<引用>,可以像引用一样作为赋值语句的左值
	////所以如下，对上面使用decltype将得到<引用类型>
	//decltype((di)) d;//错误，d是int&，必须被初始化
	////如果给变量加上了一层或者多层括号,例如(di)，编译器就会把它当成一个表达式(而不是一个单纯的变量)，从而这样的decltype就会得到<引用类型>

	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype(a = b) d = a;//@@注意，a=b并未实际执行，decltype只是用其推断出类型，但是不会真正执行表达式
	////c is an int, d is a reference of int. the value: a=3, b=4, c=3, d=3
}

////Chapter 3

void f3_() {
	//@@self@@global declare:以下是本函数的全局声明，请勿注释
	constexpr size_t array_size = 56, x_size = 3, y_size = 4, z_size = 5;//@@self:已经在本函数开头作为本函数的全局声明


	//string s00e = 45;//错误
	//string s00e = \x97;//错误
	//string s00e = '\x97';//错误
	//string s00e = '\n';//错误
	//string s00e = "\n";//正确
	//string s00e = "\x97";//正确
	//string s008, s009, s010;
	//while (getline(cin, s008)) {
	//	cout << s008<<endl;
	//}
	//while (cin >> s008) {
		//cout << s008 << endl;
		//cout << s008 ;
	//}

	//while (cin >> s008 >> s009) {
	//	s008 += '\n', s009 += '\n';
	//	cout << s008 << s009;
	//	if (s008.size() > s009.size()) cout << "The longer string is:" << s008;//self:用?:运算符做简单的分支判断  cout << "The larger string is " << ((str1 > str2) ? str1 : str2);
	//	else if(s008.size()<s009.size()) cout << "The longer string is:" << s009;
	//}

	//while (cin >> s008)//self: 经测试，此处需要两次Ctrl+Z结束，期中一个Ctrl+Z会被录入到字符串中，表现为输出一个向右箭头符号。
	//						//@@或者先按换行，再按Ctrl+D,再按回车，则换行和Ctrl+D都不会被读入。
	//{
	//	s009 += s008;
	//	s010 += s008 + ' ';
	//}
	//cout << s009;
	//cout << s010;


	/*for (string s011; getline(cin, s011);1+1)//实测，string变量能够存储汉字，也能cout，但是C标准库的某些函数会报错
		{

		//	decltype(s011.size()) punct_cnt = 0;
		//	//for (auto c : s011)
		//	//{
		//	//	if (ispunct(c))//self:ispunct函数这里仅支持ASCII字符集，汉字会报错，程序终止
		//	//	{
		//	//		punct_cnt++;
		//	//	}
		//	//}

		//	for (auto& upc : s011)
		//	{
		//		//upc = 'X';
		//		cout << upc;//这里会原样输出汉字，string看来会自动区分字符占用几个字节
		//	}

		//	//for (char upc : s011)
		//	//{
		//	//	upc = 'X';
		//	//}


		//	//for (decltype(s011.size()) index = 0;
		//	//	index != s011.size() && !isspace(s011[index]); index++)
		//	//	s011[index] = toupper(s011[index]);

		//	cout << punct_cnt << " punctuation characters in" << endl
		//		<< s011<<endl;

		//for (auto c : s011) {
		//	if (!ispunct(c))
		//cout << c;
		//}

		//cout << s008[0]<<endl<<s009[0]<<"	a";//当s008,s009为空时，输出一个字母a样子的字符，但是不是a
	}*/

	//vector<int> vi;
	//for (int i = 0; cin >> i; vi.push_back(i));
	//for (decltype(vi.size()) i = 0; i < vi.size() - 1; cout << vi[i] + vi[i + 1] << ' ', (++i)++);
	//cout << endl;
	//for (string::size_type i = 0, len = vi.size(); i <= vi.size() / 2; cout << vi[i] + vi[len - 1 - i] << ' ', i++);
	//cout << endl;
	//for (auto e : vi)cout << e << endl;

	//vector<int> v234;
	//for (int buffer; cin >> buffer; v234.push_back(buffer));
	//for (auto it = v234.cbegin();
	//	it != v234.cend() && (it + 1) != v234.cend(); cout << *it++ + *it++<<' ');
	//cout << endl;
	//两个迭代器可以相减，结果是两个迭代器的距离，结果的类型是所谓的"difference type"
	////for (auto it = v234.cbegin(), ite = v234.cend(); ite - it > 0; cout << *it++ + *--ite <<' ');
	//for (auto it = v234.cbegin(), ite = v234.cend(); ite > it ; cout << *it++ + *--ite <<' ');//指向同一个容器的迭代器可以比较大小
	//cout << endl;

	//vector<string> vs0;
	//for (string si; cin >> si; vs0.push_back(si));
	//for (string si; (cin >> si);)
	//{
	//	for (auto& c : si) c = toupper(c);//self:@转换成大写，一定是toupper！！！！！！！！！！
	//	vs0.push_back(si);
	//}
	//for (auto e : vs0)cout << e << endl;

	/*	vector<unsigned> scores(11, 0);*/
	//	for (int sc0; cin >> sc0; sc0 > 100 ? 0 : ++scores[sc0 / 10]);
		//auto beg0 = scores.begin();
		//for (int sc0; cin >> sc0; sc0 > 100 ? 0 : ++*(beg0+sc0 / 10));
		//for (auto e : scores) {
		//	cout << e << ' ';
		//}
		//cout << endl;
	//	for (auto e : scores)cout << e << endl;

	//vector<int> v1;         // size:0,  no values.
	//vector<int> v2(10);     // size:10, value:0
	//vector<int> v3(10, 42); // size:10, value:42
	//vector<int> v4{ 10 };     // size:1,  value:10
	//vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
	//vector<string> v6{ 10 };  // size:10, value:""
	//vector<string> v7{ 10, "hi" };  // size:10, value:"hi"

	//vector<vector<int>> v0{ v1,v2,v3,v4,v5 };
	//for (auto e : v0) {
	//	if (e.empty()) cout << "size:0, no valuse." << endl;
	//	else {
	//		cout << "size:" << e.size() << ", value:" << endl;
	//		for (auto ee : e) cout << ee<<' ';
	//		cout << endl;
	//	}


	//vector<vector<int> > v00{ v1,v2,v3,v4,v5 };
	//for (auto it = v00.cbegin(); it != v00.cend(); it++) {
	//	if (it->empty()) {
	//		cout << "size:0, no values." << endl;
	//	}
	//	else {
	//		cout << "size: " << it->size() << " value: " << endl;
	//		for (auto itt = it->cbegin(); itt != it->cend(); cout << *itt << ' ', itt++);//注意如果itt++,cout<<*itt<<' ',当itt指向尾部的时候，就会出现解引用错误！
	//		cout << endl;
	//	}
	//}

	//vector<vector<string> > v01{ v6,v7 };
	//for (auto it = v01.begin(); it != v01.cend(); it++) {
	//	if (it->empty()) {
	//		cout << "size: 0, no values." << endl;
	//	}
	//	else {
	//		cout << "size: " << it->size() << " value: " << endl;
	//		for (auto itt = it->cbegin(); itt != it->cend(); cout << *itt << ' ', itt++);
	//		cout << endl;
	//	}
	//}

	//cout << "--------------------------------------" << endl;
	//string s015{ "ce shi yong zi fu chuan" };
	//cout << "查看迭代器的cbegin()是否等于begin():" << endl;
	////auto it = s015.begin(), itc = s015.cbegin();//类型不一致错误
	//auto it = s015.begin();
	//auto itc = s015.cbegin();
	//it++ == itc++ ? cout << "cbegin与begin返回的迭代器,虽类型不一致，但仍判定这两个迭代器相等，因为迭代器指向的内容完全相同"
	//	<< endl : cout << "cbegin与begin不相等" << endl;




	//}
	//vector<vector<string>> vs00{v6,v7 };
	//for (auto e : vs00) {
	//	if (e.empty()) cout << "size:0, no valuse." << endl;
	//	else {
	//		cout << "size:" << e.size() << ", value:" << endl;
	//		for (auto ee : e) cout << ee<<' ';
	//		cout << endl;
	//	}
	//}

	//constexpr size_t array_size = 56;//@@self:已经在本函数开头作为本函数的全局声明
	//int ai10[array_size]{ 0,1,2,3,4,5,6,7,8,10 }, ai13[14]{ 99,99,99,99,99,99,99,999,999,99,99,99,99,999 };
	//int* pai13 = ai13;
	////vector<int> vai10(pai10+2, pai10 + 10);
	//vector<int> vai10(ai10 + 4, ai10 + 10);
	//for (auto vi : vai10)cout << vi << ' ';
	//cout << endl;
	//for (auto vi : vai10)*(pai13+++2)=vi;//@@self:不小心使得迭代次数超过pai13所指数组ai13的长度，编译器不会报错，但调试程序到此throw Exception:Run - Time Check Failure #2 - Stack around the variable 'ai13' was corrupted.occurred
	//for (auto ai : ai13)cout << ai << '	';
	//cout << endl;
	//int ai11[array_size] = {1};
	////for (int i = 0; i < sizeof(ai10)/sizeof(int); ai10[i] = i++);
	//for (int i = 0; i <array_size; ai10[i] = i++);
	//for (int i = 0; i < array_size; ai11[i] = ai10[i++]);
	//for (auto i : ai11) cout << i << ' ';
	//cout << endl;
	//vector<int> vi10;
	//for (int i = 0; i < 20; vi10.push_back(i++));
	//for (auto evv = vi10.begin(); evv != vi10.end(); cout << *(evv++) << ' ');
	//cout << endl<<"now copy vi10 to vector vi11" << endl;
	////vector<int> vi11 = vi10;
	//vector<int> vi11(vi10);
	//for (auto evv = vi10.begin(); evv != vi10.end(); cout << *(evv++) << ' ');

	//int ai3[array_size], * pai3 = ai3;
	//int* pi3 = &ai3[0], i222 = -16, * pi222 = &i222;
	//unsigned int i2223=12388, *pi223=&i2223;
	//if (pai3 == pi3) (cout << "pai3==pi3" << endl);//print"pai3==pi3"，说明指向数组的指针与直接定义的指向数组元素的指针相同
	//else cout << "指向数组的指针与直接定义的指向数组元素的指针不同";
	////for (auto pai4=ai3; pai4 != &ai3[array_size]; *pai4++ = i222++);//通过指针遍历数组
	//for (auto pai4=ai3; pai4 != ai3+array_size; *pai4++ = i222++);//通过指针遍历数组,结束条件也由指针运算得出
	////cout << endl;
	//for (; pi3 != &ai3[array_size]; *pi3++ = i222++);//@@虽然pi3是个整形指针，利用这个指针<越界访问>,也可以遍历数组
	//for (auto i : ai3)cout << i << ' ';//范围for遍历数组
	//self@@:进一步探究数组名本身与指向数组的指针以及数组的引用之间的区别和联系
	//for (auto i : ai3)cout << i << ' ';//范围for可以遍历数组
	//int  (&rai3)[array_size] = ai3, (*ppai3)[array_size];
	//ppai3 = ai3;//此处错误，根据ppai3的定义	，他应该指向一个 大小为array_size的整数数组,也就是ppai3++,ppai3每增加1，指针移动array_size个整形变量的地址宽度。
	//			//	Error(active)	E0513	a value of type "int *" cannot be assigned to an entity of type "int (*)[56]"

	//for (auto i : pai3)cout << i << ' ';//Error:指针pai3虽然用数组名ai3赋值，但数组名显然还包括了数组的其他性质,这个指针则不包括 
	//									//Error(active)	E2291	this range - based 'for' statement requires a suitable "begin" function and none was found	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\C++Primer.cpp	534
	//for (auto ri : rai3)cout << ri << ' ';//@@指向数组的引用能够做到遍历数组，指向数组的指针则不行
	//cout << rai3[2] << endl;//指向数组的引用可以下标运算，指向数组的引用几乎各处都可以替代数组名；
	//cout << endl;
	////for (auto* epai3 = &ai3[array_size]; epai3 != ai3; cout << *--epai3 << ' ');//auto*这种用法竟然也行
	//for (auto epai3 =std::end(ai3); epai3 != ai3; cout << *--epai3 << ' ');//逆序遍历数组
	//cout << endl;
	//for (auto i = 0; i < array_size/6; cout << *pi223++<<' '<<i<<" | ",i++);//@@self:定义了指向无符号整数的指针，然后执行指针自增运算，测试越界访问未知数据
	//cout << endl;

	//const char ca0[] = { 'H','e','l','l','o','\0' };
	//const char ca0[] = { 'h','e','l','l','o'},ca1[]={ 'H','e','l','l','o','\x0'};
	//const char ca0[] = { 'H','e','l','l','o','\0'},ca1[]={ 'H','e','l','l','o','\x0'};
	//const char ca0[] = { 'h','e','l','l','\0'},ca1[]={ 'H','e','l','l','o','\x0'};
	//const char ca0[] = { 'h','e','l','l'},ca1[]={ 'H','e','l','l','o','\x0'};
	//const char* cp0 = ca0;
	//	
	////在ca0末尾没有空字符的情况下，程序结果未定义
	//while (*cp0) {
	//	cout << *cp0 << ' ';
	//	++cp0;
	//}
	////自行编写比较两个C风格字符串，实际用strcmp函数即可
	//int len = 0, eq0 = 0;
	//strlen(ca0) < strlen(ca1) ? len = strlen(ca0) : len = strlen(ca1);
	//for (int i = 0; i<len+1; i++)
	//{
	//	if (*(ca0 + i) < *(ca1 + i)) { eq0 = -1; break; }
	//	if (*(ca0 + i) > *(ca1 + i)) { eq0 = 1; break; }
	//	cout << i << ' ';
	//}
	//	cout << "eq0 = " << eq0 << endl;
	//auto re00 = strcmp(ca0, ca1);
	//re00 > 0 ? cout << "ca0 > ca1" : re00 == 0 ? cout << "ca0 equals ca1" : cout << "ca0 < ca1";

	//char c00[array_size/2] = "You kan dedicate a portion", c01[array_size/3]{" of that feild!"};
	//cout << c00 << "++" << c01 << endl;
	//char c02[array_size];
	//char c02[strlen(c00)+strlen(c01)+10];//E2404	function call must have a constant value in a constant expression	C++Primer
	//strcpy_s(c02, c00), cout << "strcpy_s(c02,c00)||" << c02<<endl;
	//strcat_s(c02, c01), cout << "strcat_s(c02,c01)||" << c02<<endl;

	//int ia[x_size][y_size] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
	////输出数组的每个元素(高难混用版)
	//for (auto p: ia) {//未使用引用，p自动转为指向ia的每个元素 的首元素的指针
	//	for (auto q = p; q != p + y_size; q++) {//q与p类型相同，他们都指向了一个数组的首元素，而这个数组又是ia的元素
	//		cout << *q << ' ';
	//	}
	//	cout << endl;
	//}
	//
	//for (auto p = ia; p != ia + x_size; p++) {
	//	for (auto q = *p; q != *p + y_size; q++) {
	//		cout << *q << ' ';
	//	}
	//}
	////
	//int axyz[x_size][y_size][z_size]{ 0 };
	//for (auto x = 0; x < x_size; x++) {
	//	for (auto y = 0; y < y_size; y++) {
	//		for (auto z = 0; z < z_size; z++) {
	//			axyz[x][y][z] = x * y_size * z_size + y * z_size + z;
	//		}
	//	}
	//}
	//for (auto& x : axyz)for (auto& y : x)for (auto& z : y)cout << z << ' '; cout << "++++" << endl;
	//输出数组的每个元素
	//for (auto& x : axyz) {	
	//	for (auto& y : x) {
	//		for (auto& z : y) {
	//			cout << z << ' ' << "| "; 
	//		}
	//	cout << endl;
	//	}
	//	cout << endl;
	//}

	//int i623 = 100, j623[2]{ 1024,65535 }, jj623[2][3][4][5][6] = {0};
	//int matrix623[2][3][4]{ 111,112,113,114,121,121,123,124,131,132,133,134,211,212,213,214,221,222,223,224,231,232,233,234 };
	//////函数f6_23_3_print,内部用范围for 引用控制循环变量 遍历的数组
	//f6_23_3_print(matrix623);
	//////self@@:多为数组  <范围for非引用遍历> 时,(正常应该用 引用遍历),实际发生的过程
	//for (auto eeee : jj623) {
	//	cout << "eeee 的类型看以窥探一些多维数组的规律\n本循环会执行两次\n";
	//	cout << (R"(eeee IDE提示是 int(*eeee)[4][5][6]
	//				过程是这样的，首先范围for取出jj623的一个元素，里如果e[3][4][5][6]
	//				然后，e这个数组名字，自动被转换成指向其元素的指针，
	//				e的元素例如 ee[4][5][6]	指向ee这种元素的指针类型，自然就是int *[4][5][6]"
	//				@@@这个性质很重要，其实，数组的指针最后还是保留了部分维度的信息，
	//					而前面的维度信息，由于数组名指针化，损失了一部分)");
	//}

	////输出数组的每个元素(高难混用版)
	//for (auto x : axyz) {	
	//	for (auto y = x;y!=x+y_size; y++) {
	//		for (auto z : *y) {	
	//			cout << z << ' ' << "| "; 
	//		}
	//	cout << endl;
	//	}
	//	cout << endl;
	//}


	//输出数组的每个元素(高难混用版),下面写法不能完全遍历，跳过了三维数组的中间一维，输出为
	//0++1++2++3++4++
	//20++21++22++23++24++
	//40++41++42++43++44++
	//for (auto x : axyz) {	
	//		for (auto y : *x) {	//此处程序能运行，但是跳过了axyz中的第二维
	//			cout << y <<"++";
	//		}
	//	cout << endl;
	//}

	//for (auto& x : axyz) {	//Error,内层忘记换遍历对象，输出z,实际是输出axyz的数组元素 某[4][5] 的地址。
	//	for (auto& y : axyz) {
	//		for (auto& z : axyz) {
	//			cout << z << ' ' << **z << "| "; 
	//		}
	//	}
	//	cout << endl;
	//}

	//@@self多维数组研究，复杂版
	//int axyzi[x_size][y_size][z_size][z_size]{ 0 };
	//for (auto x = 0; x < x_size; x++) {
	//	for (auto y = 0; y < y_size; y++) {
	//		for (auto z = 0; z < z_size; z++) {
	//			for (auto zi = 0; zi < z_size; zi++) {
	//				axyzi[x][y][z][zi] = x * y_size * z_size * z_size + y * z_size * z_size + z * z_size + zi;
	//			}
	//		}
	//	}
	//}

	//Exercise 3.43
	//非auto引用遍历版
	//for (int (&x)[4][5][5] : axyzi) {
	//	for (int (&y)[5][5] : x) {
	//		for (int (&z)[5] : y) {
	//			for (int& zi : z) {
	//				cout << zi << "+";
	//			}
	//			cout << " |";
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}

	//下标遍历版
	//for (size_t x = 0; x != x_size; x++) {
	//	for (size_t y = 0; y != y_size; y++) {
	//		for (size_t z = 0; z != z_size; z++) {
	//			for (size_t zi = 0; zi != z_size; zi++) {
	//				cout << axyzi[x][y][z][zi] << "+";
	//			}
	//			cout << " |";
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}

	//非auto指针遍历版
	//for (int(*x)[y_size][z_size][z_size] = axyzi; x != axyzi + x_size; x++) {
	//	for (int(*y)[z_size][z_size] = *x; y != *x + y_size; y++) {
	//		for (int(*z)[z_size] = *y; z != *y + z_size; z++) {
	//			for (int* zi = *z; zi != *z + z_size; zi++) {
	//				cout << *zi << "+";
	//			}
	//			cout << " |";
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}

	//using intyziz = int[y_size][z_size][z_size];
	//using intziz = int[z_size][z_size];
	//using intiz = int[z_size];
	//类型别名引用遍历版 
	//for (intyziz &x: axyzi) {
	//	for (intziz &y: x) {
	//		for (intiz &z: y) {
	//			for (int& zi : z) {
	//				cout << zi << "+";
	//			}
	//			cout << " |";
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}

	//类型别名指针遍历版 
	//for (intyziz *x= axyzi; x != axyzi + x_size; x++) {
	//	for (intziz *y= *x; y != *x + y_size; y++) {
	//		for (intiz *z= *y; z != *y + z_size; z++) {
	//			for (int* zi = *z; zi != *z + z_size; zi++) {
	//				cout << *zi << "+";
	//			}
	//			cout << " |";
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}

	// auto范围for遍历版
	//for (auto &x : axyzi) {
	//	for (auto &y : x) {
	//		for (auto& z : y) {
	//			for (auto& zi : z) {
	//				cout << zi << "-";
	//			}
	//			cout << " |";
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}

	//复杂混用遍历版，研究用，无实际意义
	//for (auto x : axyzi) {
	//	for (auto y = x; y != x + y_size; y++) {
	//		for (auto z = *y; z != *y + z_size; z++) {
	//			for (auto zi : *z) {//最后一处可以用范围for去迭代*z,因为z的类型是 int(*z)[z_size] 由此能判断*z的迭代次数是5
	//				cout << zi << " |";
	//			}
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}


	//cout << endl;
	//auto pa00 = 0x001ef6a4, pa01 = 0x001ef6f4;
	//cout << "axyz[3][4][5]数组每个多维子数组占用80个字节 --> (0x001ef6f4 - 0x001ef6a4) = " << (pa01 - pa00)  << endl;

	//f3_()函数最后一个括号
}

////Chapter 4

void f4_() {
	//@@self@@global declare:以下是本函数的全局声明，请勿注释
	constexpr size_t array_size = 56, x_size = 3, y_size = 4, z_size = 5;//@@self:已经在本函数开头作为本函数的全局声明


	//int aoe0[z_size * 2] = { 0 }, i = 0;
	//for (auto p = std::begin(aoe0); p != std::end(aoe0); p++) {
	//	*p += i++;
	//}
	//for (auto ai : aoe0) { cout << ai << " " << (ai & 0x1) << " |"; }

	////溢出
	//short svalue = 32767; cout << ++svalue << endl;
	////cout << svalue/0 << endl;//	Unhandled exception at 0x00056A87 in C++Primer.exe: 0xC0000094 : Integer division by zero.occurred
	//unsigned short shvalue = 0; cout << --shvalue<<"| unsigned short and it's half |"<<shvalue/2 << endl;
	//unsigned uivalue = 0; cout << --uivalue <<"| unsigned short and it's half |"<<uivalue/2<< endl;
	//unsigned long ulvalue = 0; cout << --ulvalue<<"| unsigned short and it's half |"<<ulvalue/2 << endl;
	//unsigned long long ullvalue = 0; cout << --ullvalue <<"| unsigned short and it's half |"<<ullvalue/2<< endl;

	////自编，输入字符串少于z_size*3按每5个字串空出一个空字串，或者上一字串末尾是句号，空出一个空字串。
	//int cnt40 = 0;
	//vector<string> vs40(z_size * 3, "");
	//string s40{ "" };
	//while (cin >> s40) {
	//	cout << s40 << "	size: " << s40.size() << endl;
	//	(cnt40 + 1) % 5 ? 0:cnt40++;//当元素个数是5的倍数时，跳过一个位置
	//	if (cnt40 < z_size * 3) {
	//		s40[s40.size() - 1] == '.' ? vs40[(++cnt40)++]=s40 : vs40[cnt40++]=s40;//遇到句号，间隔插入输入的字符串
	//	}
	//	else { vs40.push_back(s40); }

	//	//vs40[++cnt40++]; //Error(active)	E0137	expression must be a modifiable lvalue	C++Primer	
	//}

	//vector<string> vs42{"","ni","hao","wei","lai","","jian chi","xiangxinziji.","dui ba","shi de","",""};//4.3 P127 自编测试数据 
	//for (auto const &vsi : vs40) { //vsi声明成引用，可以避免对vs40元素的复制，特别当vs40元素非常大的时候，比较节省资源。
	//	cout << vsi;
	//	//a&&b||c;可以相当于if(a) {b} else {c};
	//	(vsi.size() == 0 || vsi[vsi.size() - 1] == '.') && cout << endl || cout << " ";	//优先级的好例子，后面的语句没加括号，&&运算符优先 -->  vsi.size() == 0 || vsi[vsi.size() - 1] == '.' && cout << endl || cout << " ";
	//	//vsi.size() == 0 && cout << endl;// || cout << " ";
	//	}

	//vector<string> vs45{"","ni","hao","wei","lai","","jian chi","xiangxinziji.","dui ba","shi de","",""};
	//"条件运算符的后面的表达式可以是vector" ? vs45 : vs45;
	//vs45.empty() ? "empty" : vs45.size();//验证条件运算符的两个条件必须是同一类型，或者可转换成公共类型，Error(active)	E0042	operand types are incompatible("const char *" and "size_t")
	//3 > 5 ? "no" : 5;//	E0042	operand types are incompatible("const char *" and "size_t")
	//3 > 5 ? cout<<"no"<<endl : cout<<5<<endl;//这个没报错
	//1 > 3 ? 7>6 ?vs45[0]="expr1 ... \n":vs45[0]="expr2 ... \n" : vs45[0]="expr3 ... \n";//这个怎么解释呢？
	//5 > 3 ? 7>6 ?vs45[0]="expr1 ... \n":vs45[0]="expr2 ... \n" : vs45[0]="expr3 ... \n";//这个怎么解释呢？
	//1 > 3 ? 5>6 ?vs45[0]="expr1 ... \n":vs45[0]="expr2 ... \n" : vs45[0]="expr3 ... \n";//这个怎么解释呢？
	//1 > 3 ? (5>6 ?vs45[0]="expr1 ... \n":vs45[0]="expr2 ... \n") : vs45[0]="expr3 ... \n";//以上连续连个条件运算符等价于本行，按本号加括号的运算顺序解释
	//cout << vs45[0];

	//////越界访问，查看内存内容
	//const char* p40 = "dedicate",*p41="gloss 粉饰，掩饰 subtle 微妙的";
	//for (int i = 0; i < 589; i % 30 || cout << endl, cout << p41[i], i++);

	//int grade = 75;
	//string finalgrade = grade > 90 ? "high pass" : grade > 75 ? "pass" : grade < 60 ? "fail":"low pass";
	//cout << finalgrade << endl;
	//grade = 36;
	//if (grade > 90)
	//	finalgrade = "high pass";
	//else if (grade > 75)
	//	finalgrade = "pass";
	//else if (grade >= 60)
	//	finalgrade = "low pass";
	//else
	//	finalgrade = "fail";
	//cout << finalgrade << endl;

	//cout<<"sizeof(int)"<<sizeof(int)<<endl;
	//cout<<"sizeof(char)"<<sizeof(char)<<endl;
	//int q6 = 'q' << 6;
	//cout<<"q<<6 "<< q6<<endl;

	//cout << "size of void nullptr_t: " << sizeof(nullptr_t)<<endl;

	//cout << "size of bool: " << sizeof(bool)<<endl;
	//cout << '\n';

	//cout << "size of char: " << sizeof(char)<<endl;
	//cout << "size of wchar: " << sizeof(wchar_t)<<endl;
	//cout << "size of char16_t: " << sizeof(char16_t)<<endl;
	//cout << "size of char32_t: " << sizeof(char32_t)<<endl;
	//cout << '\n';

	//cout << "size of short: " << sizeof(short)<<endl;
	//cout << "size of int: " << sizeof(int)<<endl;
	//cout << "size of long: " << sizeof(long)<<endl;
	//cout << "size of long long: " << sizeof(long long)<<endl;
	//cout << "size of unsigned short: " << sizeof(unsigned short)<<endl;
	//cout << "size of unsigned: " << sizeof(unsigned)<<endl;
	//cout << "size of unsigned long: " << sizeof(unsigned long)<<endl;
	//cout << "size of unsigned long long: " << sizeof(unsigned long long)<<endl;
	//cout << '\n';


	//cout << "size of float: " << sizeof(float)<<endl;
	//cout << "size of double: " << sizeof(double)<<endl;
	//cout << "size of long double: " << sizeof( long double)<<endl;
	//cout << '\n';

	//// Fixed width integers
	//cout << "int8_t:\t\t" << sizeof(int8_t) << " bytes" << endl;
	//cout << "uint8_t:\t" << sizeof(uint8_t) << " bytes" << endl;
	//cout << "int16_t:\t" << sizeof(int16_t) << " bytes" << endl;
	//cout << "uint16_t:\t" << sizeof(uint16_t) << " bytes" << endl;
	//cout << "int32_t:\t" << sizeof(int32_t) << " bytes" << endl;
	//cout << "uint32_t:\t" << sizeof(uint32_t) << " bytes" << endl;
	//cout << "int64_t:\t" << sizeof(int64_t) << " bytes" << endl;
	//cout << "uint64_t:\t" << sizeof(uint64_t) << " bytes" << endl;
	//cout << '\n';

	//int xx[10]; int* p4 = xx;
	//cout << sizeof(xx) / sizeof(*xx)<<endl;
	//cout << sizeof(p4) << endl;
	//cout << sizeof(p4) / sizeof(*p4)<<endl;


	////简单复习string类型初始化方式
	//char ca = 'r',*pca=&ca;
	//string s4_1;
	//string s4_2(s4_1);
	//string s4_3 = s4_1;
	//string s4_4("value");
	//string s4_5 = "value";
	//string s4_6(10, 'c');
	////string s4_6(10, "c");//@@报错,不允许
	////string s4_7('f');//报错
	////string s4_8(ca);//报错
	//string s4_8(&ca);//@@这也可以
	//string s4_9(pca);//@@这也可以
	////解释本书146页代码
	//char ca40 = 'a',*pca40=&ca40;//P146页
	//string str(pca40);//通过上面复习，看出这里声明了一个名为 str 的string变量 ，并且采用和s4_9相同的初始化方式

	////4.11

	char c411 = 'A';
	const char c2_411 = 'E';
	const string s411 = "sloppiness";
	const char* cp411 = &c411, * pc2_411 = &c2_411;
	char* p3_411 = const_cast<char*>(cp411);
	char* p4_411 = const_cast<char*>(pc2_411);
	cout << "The original const char:	" << *pc2_411 << endl;
	*p4_411 = 'R';
	cout << "After const_cast and change the value:	" << *pc2_411 << endl;
	string s1_411 = static_cast<string>(cp411);
	cout << "The content of s1_411:\n" << s1_411 << endl;//self@@:由原来指向字符的指针可以被转换并赋值给字符串，看出字符串名字其实就是指向字符串的指针
						//上面一句的输出，除了原来指向的字符 A 之外，后面还输出了若干未定义的字符，直到遇到某个空字符才停止。
						//初始化s1_411时，是将cp411所指的位置到后面某个空字符之间的字符拷贝给了s1_411。
	s1_411 = "account";
	cout << "The content of s1_411:\n" << s1_411 << endl;
	cout << "The original content of pointer cp411 pointed:\n" << *cp411 << endl;
	//f4_()函数最后一个括号
}

////Chapter 5

void f5_() {
	//char cif5, prechar = '\0';
	//int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0, space_cnt = 0, tab_cnt = 0, newline_cnt = 0;
	//int ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;

	////5.9

	//while (cin >> cif5) {
	//	if (cif5 == 'a' || cif5 == 'A')
	//		a_cnt++;
	//	else if (cif5 == 'e' || cif5 == 'E')
	//		e_cnt++;
	//	else if (cif5 == 'i' || cif5 == 'I')
	//		i_cnt++;
	//	else if (cif5 == 'o' || cif5 == 'O')
	//		o_cnt++;
	//	else if (cif5 == 'u' || cif5 == 'U')
	//		u_cnt++;
	//}

	////5.10-12

	//while (cin >>std::noskipws>> cif5) {//noskipws do not skip white-space，不跳过空白，会把' ','\t','\n','\v','\f','\r'这些字符也读入
	//	switch (cif5)
	//	{
	//	case 'a':
	//	case 'A':
	//		a_cnt++; break;
	//	case 'e':
	//	case 'E':
	//		e_cnt++; break;
	//	case 'i':
	//		if(prechar=='f')
	//		fi_cnt++;
	//	case 'I':
	//		i_cnt++; break;
	//	case 'o':
	//	case 'O':
	//		o_cnt++; break;
	//	case 'u':
	//	case 'U':
	//		u_cnt++; break;
	//	case ' ':
	//		space_cnt++; break;
	//	case '	':
	//		tab_cnt++; break;
	//	case '\n':
	//		newline_cnt++; break;
	//	case 'f':
	//		if (prechar == 'f')
	//			ff_cnt++;
	//		break;
	//	case 'l':
	//		if (prechar == 'f')
	//			fl_cnt++;
	//		break;
	//	}
	//	prechar = cif5; //self:非常好的处理几个连续值的技巧，就是“缓存”他们，不过这里有bug,ffff会被统计为3个ff
	//}

	//cout << "Number of vowel a: " << a_cnt << endl;
	//cout << "Number of vowel e: " << e_cnt << endl;
	//cout << "Number of vowel i: " << i_cnt << endl;
	//cout << "Number of vowel o: " << o_cnt << endl;
	//cout << "Number of vowel u: " << u_cnt << endl;

	////5.12

	//char cif12;
	//int ff_cnt = 0, fl_cnt = 0, fi_cnt = 0;
	//while (cin >> std::noskipws >> cif12)
	//{
	//	if (cif12 == 'f') {
	//		if (cin >> cif12)
	//		{
	//			switch (cif12)
	//			{
	//			case'f': ff_cnt++; break;
	//			case'l': fl_cnt++; break;
	//			case'i': fi_cnt++; break;
	//			default:
	//				break;
	//			}
	//		}
	//	}
	//}
	//
	//cout << "Number of vowel ff: " << ff_cnt << endl;
	//cout << "Number of vowel fl: " << fl_cnt << endl;
	//cout << "Number of vowel fi: " << fi_cnt << endl;

	////5.14

	//string word514, pre_word514, max_word514;
	//int max = 1, now = 1;
	//cin >> pre_word514;
	//while (cin >> word514) {
	//	if (word514 == pre_word514) {
	//		++now;
	//	}
	//	else {
	//		pre_word514 = word514;
	//		now = 1;
	//	}
	//
	//	if (now > max) {
	//		max = now;
	//		max_word514 = word514;
	//	}
	//}
	//max > 1 ? cout << "Word: " << max_word514 << "	Repeated: " << max << endl : cout << "There is no word repeated!\n";

	//5.17

	//vector<int> v517_1{ 0,1,1,2 }, v517_2{ 0,1,1,2,3,5,8 };
	//bool pre=true;
	//int sz = v517_1.size() < v517_2.size() ? v517_1.size() : v517_2.size();
	//for (int i = 0;	i < sz; ++i) {
	//	if (v517_1[i] != v517_2[i]) {
	//		pre = false;
	//	}
	//}
	//if (pre) cout << "V1 和 V2  <有> 前缀关系\n";
	//else cout << "V1 和 V2  <无> 前缀关系\n";
	//cout << endl;
	////review
	//for (auto e : v517_1) {
	//	cout << e <<'\t';
	//}
	//cout << endl;
	//for (auto beg = v517_1.begin(); beg != v517_1.end(); beg++) {
	//	*beg = *beg * 2;
	//}
	//for (auto e : v517_1) {
	//	cout << e <<'\t';
	//}
	//cout << endl;

	//5.19

	//do {
	//	string s519_1, s519_2;
	//	cout << "Please enter two strings to compare:\n";
	//	if (cin >> s519_1 >> s519_2) {
	//		cout << "The short one:\n";
	//		s519_1.size() > s519_2.size() ? cout << s519_2 : cout << s519_1;
	//		cout << endl;
	//	}
	//} while (cin);

	//习题5.20 for循环自编练习版，有逻辑BUG，保留以作警示

	//string now5166, pre5166;
	////for (cin >> pre5166; cin >> now5166 && pre5166 != now5166; pre5166 = now5166) ;{//@@当输入为空时，cin>>now516不会改变now516的值，如此循环正常结束时必有pre516==now516
	////正确写法
	//for (cin >> pre5166; cin >> now5166; pre5166 = now5166) {//@@当输入为空时，cin>>now516不会改变now516的值，如此循环正常结束时必有pre516==now516
	//	if (pre5166 == now5166)
	//		break;
	//}
	//cin ? cout << pre5166 << '\t' << now5166 << endl :
	//	pre5166 == "" ? cout << "Please input something to judge.\n" : cout << "No contiguous repeated words!\n";

	//cin >> pre5166;
	//while (cin >> now5166) {
	//	if (pre5166 == now5166) break;
	//	pre5166 = now5166;
	//}
	//cin ? cout << pre5166 << '\t' << now5166 << endl :
	//	pre5166 == "" ? cout << "Please input something to judge.\n" : cout << "No contiguous repeated words!\n";

	//cin >> pre5166;
	//while (cin >> now5166) {
	//	if (pre5166 == now5166)
	//	{
	//		if (pre5166[0] >= 'A' && pre5166[0] <= 'Z')
	//			break;
	//	}
	//	pre5166 = now5166;
	//}
	//cin ? cout << pre5166 << '\t' << now5166 << endl :
	//	pre5166 == "" ? cout << "Please input something to judge.\n" : cout << "No contiguous repeated words!\n";


	////@@重要笔记

	//输入流中用成员 eofbit  来记录是否遇到 EOF ，再遇到EOF后 eofbit将被设置为1， 可以用成员函数 ::eof()来测试。
	//输入流是以行为缓冲的 意思是只有在一次输入以 enter 结束时 输入流才真正开始工作（读取）
	//EOF （win -- ctrl + z，unix -- ctrl + d）
	//而只有当 EOF 出现在一行输入的首部时  输入流才会正确的设置 eofbit
	//当EOF 出现在 一行输入的中间或者末尾 输入流会自动忽视掉 EOF 以及 跟在它后面的参数
	//(@@self vs2019实测，出现在中间的ctrl + z不会被识别为EOF,但是也不会被忽略，而是读入作为一向右的箭头,他后面本行内容确实会被自动忽视掉)
	//当输入  1 2 3 EOF 4 5 6 < enter > 后， 只有1 2 3 右侧箭头 被正确输入 而  4 5 6将被输入流忽视 直接等待下面的输入
	//原文链接：https ://blog.csdn.net/foxpeter/article/details/6072130	


	//string buff55;
	//cout << "next\n";
	//while (cin >> buff55) { //例题应当是处理参数的一个示例，但是只适用于从文件读入。如果标准输入读取的话，空白不会被读入，也就无所谓"读到第一个空白为止"
	//	cout << '+' << buff55 << '+\n';
	//	switch (buff55[0])
	//	{
	//	case '-':
	//		//处理到第一个空白为止
	//		for (auto it = buff55.begin() + 1; it != buff55.end(); ++it)
	//		{
	//			cout << *it << '+';
	//			if (*it == ' ')
	//			{
	//				cout << "There is a blank\n";
	//				break; //#1,离开for循环
	//			}
	//		}
	//		//break #1 将控制器交到这里
	//		//继续处理下一个'-'
	//		break; //#2,离开switch语句，但是如果while循环没有终止，就会继续处理下一个 '-'
	//	default:
	//		break;
	//	}
	//	//break #2 将控制权移交到这里，结束switch
	//}

	////5.22

	//int sz;
	//while ((sz = get_size(t))<=0);
	//for (int sz = get_size(t); sz <= 0; sz = get_size(t))
	//;

	////5.23

	//int i523_1, i523_2;
	//while (cin >> i523_1 >> i523_2)
	//{

	//	//i523_2 == 0 ? throw runtime_error("Divide Zero");
	//	try {
	//		//if (i523_2 == 0)
	//		//	throw runtime_error("Divide Zero\n");
	//		i523_2 == 0 ? throw runtime_error("Divide Zero") : "";
	//		cout << i523_1 / i523_2 << endl;
	//	}
	//	catch (runtime_error err) {
	//		cout << err.what() << "\n Try again? Enter y or n\n";
	//		char c523;
	//		cin >> c523;
	//		if (cin && c523 == 'n')
	//			break;
	//	}
	//}
}

////Chapter 6

int factorial(int n) {
	int res = 1;
	if (n < 1)
		throw runtime_error("Value should not little than 1\n");
	if (n == 1)
		return 1;
	for (; n > 1; --n)
		res *= n;
	return res;
}

double abs_6(double input) {
	return input < 0 ? 0 - input : input;
}

int count_exe() {
	static int cnt = 0;
	return ++cnt;
}

void exchange(int* a, int* b) {
	//int tmp;
	//tmp = *a, * a = *b, * b = tmp;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void exchange_rf(int& a, int& b) {
	a = a + b, b = a - b, a = a - b;
}

void reset_t(int& m, int& n) {
	m = 999;
	n = 9999;
}

bool has_upper(const string& s) {
	//for (auto & c : s) { //@Error:如果定义为引用，意味着可以或需要通过迭代改变s的内容，但s是个对字符串的常量引用，所以报错
		//c = 'a';
	for (auto& c : s) {
		if (isupper(c)) { return true; }
	}
	return false;
}

auto has_upper_auto(const string& s) {
	//for (auto & c : s) { //@Error:如果定义为引用，意味着可以或需要通过迭代改变s的内容，但s是个对字符串的常量引用，所以报错
		//c = 'a';
	for (auto& c : s) {
		if (isupper(c)) { return true; }
	}
	////return "函数类型竟然可以用auto定义，那我岂不是可以返回不同类型的值？"; //self@@:Error(active)	E2546	deduced return type "const char *" conflicts with previously deduced type "bool"	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_1_6.cpp	1061
	return false;
}

void to_lower(string& s) {
	for (auto& c : s) { c = tolower(c); }
}

int f6_21(const int a, const int* b) {
	return a > * b ? a : *b;
}

void f6_22(int** a, int** b) {
	int* c = *a;
	*a = *b;
	*b = c;
}

////void f6_22_2(const int *&a,const int *&b) //self@@???: Error(active)	E0434	a reference of type "const int *&" (not const - qualified) cannot be initialized with a value of type "int *"

void f6_22_2(int*& a, int*& b) { //self@@@: int * 的引用，整形指针的引用，指针的引用这样定义！！
								//并且，引用形参，可以 <更改> 传过来的对象的值！！
	auto c = a;
	a = b;
	b = c;
}

void f6_23_1_print(int i, int j[], size_t j_size) {
	cout << i << endl;
	for (int s = 0; s != j_size; s++) { cout << j[s] << ' '; }
	cout << endl;
}

void f6_23_1_print(const int& i, int* beg_j, int* end_j) {
	cout << i << endl;
	for (; beg_j != end_j; beg_j++) { cout << *beg_j << ' '; }
	cout << endl;

}

void f6_23_2_print(const int* i, int(&j)[2]) {//可以传递数组的引用，这样不必另外传递数组大小，使用范围for循环即可
													//@@缺点:例如这里，以后只能传递大小为2的数组，限制了参数的灵活性
													//其他维度的数组都会报错，类型不匹配
	cout << *i << endl;
	for (auto& e : j) { cout << e << " "; }
	cout << endl;
}
void f6_23_3_print(int(&matrix)[2][3][4]) {
	for (const auto& eee : matrix) {//@@复习：使用范围for遍历，为了避免数组名自动转换成指针，需要把循环控制变量声明成引用类型
		for (const auto& ee : eee) {
			for (const auto e : ee) {
				cout << e << ' ';
			}
			cout << " | ";
		}
		cout << endl;
	}

}

void initial_lst_6_27(initializer_list<int> vararg) {
	int sum = 0;
	for (auto e : vararg) { sum += e; }
	cout << "The sum of all initializer_list elements is:\n" << sum << endl;
}

void initial_lst_6_27_2(initializer_list<int>  const& vararg) {//self，学习了，将参数声明成引用类型有许多好处
												//这句和 const initializer & vararg 效果一样，
												//const写在类型紧靠类型符左侧或者右侧效果应该一样,但是不推荐非标准写法
												//例如测试	int const & test=sum，得到test的类型是const & int
	int sum = 0;
	for (auto e : vararg) { sum += e; }
	cout << "The sum of all initializer_list elements is:\n" << sum << endl;
}

bool str_subrange(const string& str1, const string& str2) {
	if (str1.size() == str2.size()) { return str1 == str2; }
	auto size = str1.size() < str2.size() ? str1.size() : str2.size();
	for (decltype(size) i = 0; i != size; i++) {
		if (str1[i] != str2[i])
			//return; //Error 1,no return value ,编译器将报告这一错误
			return false;
	}
	//Error 2,控制流尚未返回任何值，就结束了函数的运行   Warning	C4715	'str_subrange': not all control paths return a value
}

////6.33


void vector_cout(const vector<int>& vc, const vector<int>::const_iterator  i) {
	if (i != vc.end()) {
#ifndef NDEBUG
		switch (*i)
		{
		case 4:
			cout << "Debug: " << __FILE__
				<< " : in function " << __FUNCTION__ << endl;
			break;
		case 8:
			cout << "\tat line: " << __LINE__ << endl;
			break;
		case 9:
			cout << "\tComplied on " << __DATE__ << endl;
			break;
		case 6:
			cout << "\tat " << __TIME__ << endl;
			break;
		default:
			cout << "++++++++++++++++++++++++++++++++++++++++\n";
			break;
		}
#endif // !NDEBUG
		cout << *i << '\n';
		vector_cout(vc, i + 1);
	}

	//#ifndef NDEBUG
	//	switch (*i)
	//	{
	//	case 4:
	//		cout << "Debug: " << __FILE__
	//			<< " : in function " << __FUNCTION__ << endl;
	//		break;
	//	case 8:
	//		cout << "\tat line: " << __LINE__ << endl;
	//		break;
	//	case 9:
	//		cout << "\tComplied on " << __DATE__ << endl;
	//		break;
	//	case 6:
	//		cout << "\tat " << __TIME__ << endl;
	//		break;
	//	default:
	//		cout << "++++++++++++++++++++++++++++++++++++++++";
	//		break;
	//	}
	//#endif // !NDEBUG

}

////6.36

string(&f_6_36(const string* str36))[10];
using str36_10 = string[10];
str36_10& f_6_36_1(const str36_10& str36);
auto f6_36_2(const str36_10& str36)->string(&)[10];
string str_6_36[10];
decltype(str_6_36)* f6_36_3(const str36_10& str36);



////6.51
void math51() {
#ifndef DEBUG
	cout << "Debug: __FUNCTION__: " << __FUNCTION__ << endl;
	cout << "detial:	math51()\n";
#endif // !DEBUG
};
void math51(int i) {
#ifndef DEBUG
	cout << "Debug: __FUNCTION__: " << __FUNCTION__ << endl;
	cout << "detial:	math51(int i)\n";
#endif // !DEBUG
	cout << "Value of Pramaters:\n" << "i:	" << i;
	cout << endl;
}

void math51(int i, int j) {
#ifndef DEBUG
	cout << "Debug: __FUNCTION__: " << __FUNCTION__ << endl;
	cout << "detial:	math51(int i,int j)\n";
#endif // !DEBUG
	cout << "Value of Pramaters:\n" << "i:\t" << i << "\nj:\t" << j;
	cout << endl;
}

void math51(double i, double j = 3.14) {
#ifndef DEBUG
	cout << "Debug: __FUNCTION__: " << __FUNCTION__ << endl;
	cout << "detial:	math51(double i,double j)\n";
#endif // !DEBUG54
	cout << "Value of Pramaters:\n" << "i:\t" << i << "\nj:\t" << j;
	cout << endl;
}

////6.54-55

int f1_654(int a, int b) { return a ^ b; }
int f2_654(int aa, int bb) { return aa & bb; }

int add_655(int a, int b) { return a + b; }
int substract_655(int m, int n) { return m - n; }
int multi_655(int i, int j) { return i * j; }
int division_655(int h, int g) { return h / g; }

//inline
void f_test() { cout << "yes"; }

void f6_() {

	////6.3-5

	//int n61, res61;
	//double res62;
	//string prompt = "Enter an integer:\n";
	//string prompt_7 = "Enter an number:\n";
	//for (; cout << prompt_7, cin >> res62;) {
	//	try {
	//		//res61 = factorial(n61);
	//		//cout << "The factorial of " << n61 << " is :\n" << res61<<endl;
	//		cout << res62 << endl;
	//		res62 = abs_6(res62);
	//		cout << "The absolute : " << res62<<endl;
	//	}
	//	catch (runtime_error rerr) {
	//		cout << rerr.what() << "Try Again? Enter y or n:\n";
	//		char ctr;
	//		cin >> ctr;
	//		if (ctr == 'n') { break; }
	//		continue;
	//	}
	//}

	////6.7

	//for (int i = 0; i != 10; i++) { cout << count_exe() << endl; }

	////6.10

	//string prompt10 = "Enter tow integers:\n";
	//for (int a, b; cout << prompt10, cin >> a >> b;) {
	//	cout << "Before Exchange:\n" << a << '\t' << b << endl;
	//	//exchange(&a, &b);
	//	//reset_t(a,b);
	//	exchange_rf(a, b);h
	//	cout << "After Exchange:\n" << a << '\t' << b << endl;
	//}

	////6.17

	//string prompt10 = "判断大写字母:\n";
	//for (string s; cout << prompt10, cin >> s;) {
	//	cout << "Before : \n"<<s << endl;
	//	has_upper(s) ? cout << "---------has upper-------------\n" : cout << "--------------Not an upper-------------\n";
	//	to_lower(s);
	//	cout << "After : \n"<<s << endl;
	//	has_upper(s) ? cout << "---------has upper-------------\n" : cout << "--------------Not an upper-------------\n";
	//}

	////6.21

	//string prompt10 = "Enter tow integers:\n";
	//for (int a, b; cout << prompt10, cin >> a >> b;) {
	//	cout << "The bigger one:\n" << f6_21(a,&b)  << endl;
	//}

	////6.21

	//string prompt10 = "Enter tow integers:\n";
	//int i622=99;
	//int r622 = i622; //@@复习引用
	//for (int a, b; cout << prompt10, cin >> a >> b;) {
	//	int* p = &a, * q = &b;
	//	cout << "Before Exchange:\n" << *p << '\t' << *q << endl;
	//	//f6_22(&p, &q);
	//	f6_22_2(p, q);//self@@:如果形参是引用，直接用 引用将要指向的对象 赋值即可
	//	cout << "After Exchange:\n" << *p << '\t' << *q << endl;
	//}

	////6.23

	//int i623 = 100, j623[2]{ 1024,65535 }, jj623[2][3][4][5][6] = {0};
	//int matrix623[2][3][4]{ 111,112,113,114,121,121,123,124,131,132,133,134,211,212,213,214,221,222,223,224,231,232,233,234 };
	//f6_23_1_print(i623, j623,2);
	//f6_23_1_print(i623, begin(j623),end(j623));
	//f6_23_2_print(&i623, j623);
	//f6_23_3_print(matrix623);
	//for (auto eeee : jj623) {
	//	cout << "eeee 的类型看以窥探一些多维数组的规律\n本循环会执行两次\n";
	//	cout << (R"(eeee IDE提示是 int(*eeee)[4][5][6]
	//				过程是这样的，首先范围for取出jj623的一个元素，里如果e[3][4][5][6]
	//				然后，e这个数组名字，自动被转换成指向其元素的指针，
	//				e的元素例如 ee[4][5][6]	指向ee这种元素的指针类型，自然就是int *[4][5][6]"
	//				@@@这个性质很重要，其实，数组指针最后还是保留了部分维度的信息，
	//					而前面的维度信息，由于数组名指针化，损失了一部分)");
	//}

	////6.27

	//int arr627[10]{ 300,1,4,7,8,2,9,3,6,5 };
	//vector<int> varr627{ 300,1,4,7,8,2,9,3,6,5 };
	//////强制类型转换intializer_list不怎么好用
	////initializer_list<int> ini_627 = (initializer_list<int>)arr627;
	////initializer_list<int> ini_627;ini_627= (initializer_list<int>)varr627;
	//initializer_list<int> ini_627_1{ arr627[0], arr627[1], arr627[2], arr627[3], arr627[4], arr627[5], arr627[6], arr627[7], arr627[8], arr627[9] };
	//auto ini_627_2 = { arr627[6], arr627[7], arr627[8], arr627[9] };
	//initial_lst_6_27(ini_627_1);
	//initial_lst_6_27_2(ini_627_2);//参考答案版，学习auto ,形参的声明

	////6.30-33

	//bool b6_30 = str_subrange("comprise", "comprise of");
	//vector<int> varr633{ 300,1,4,7,8,2,9,3,6,5 };
	//vector_cout(varr633, varr633.begin());

	////6.51
	//math51(2.6,42);
	//math51();
	//cout << endl;
	//math51(42);
	//cout << endl;
	//math51(42,0);
	//cout << endl;
	//math51(5.6);
	//cout << endl;
	//math51(2.56,2.71828);
	//math51(42,2.56);

	////6.54-55

	//vector<int (*)(int, int)> vf1_655;
	//vector<decltype(f1_654)*> vf2_655;
	//using pf2 = decltype(f2_654)*;
	//vector<pf2> vf3_655{ f1_654,f2_654 };
	//pf2 af4_655[4]{division_655,multi_655,substract_655,add_655};
	//vf3_655[0] = add_655;
	//vf3_655[1] = substract_655;
	////vf3_655[2] = multi_655; //self:vector的下标越界，IDE不会提醒，直到运行时，就会报错 Expression: vector subscript out of range
	////vf3_655[3] = &division_655;
	//vf3_655.push_back(multi_655);
	//vf3_655.push_back(division_655);
	//cout << add_655<<endl;//当函数名作为一个值使用，该函数自动转换成指针
	//cout << "当函数名作为一个值使用，该函数自动转换成指针\n\n";
	//for (auto e : vf3_655) { cout << e << endl; }//经测试输出的是对象的地址
	//for (auto e : vf3_655) { cout << e<<" : a = 10, b = 4\t f(a,b) = "<<e(10,4) << endl; }
	////(*(vf3_655[1]+1))(10, 4);//函数指针+1操作报错
	////*(af4_655[1] + 1);//函数指针＋1报错
	//cout << endl;
	//for (auto e : af4_655) { cout << e<<" : a = 10, b = 4\t f(a,b) = "<<(*e)(10,4) << endl; }
	//cout << endl;
	//for (auto e : af4_655) { cout << e<<" : a = 10, b = 4\t f(a,b) = "<<e(10,4) << endl; }


}


