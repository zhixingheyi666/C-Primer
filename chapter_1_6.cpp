
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



////�Ա�ͷ�ļ�

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
	//string ss = "one" "and" "tow"; //�����ַ���֮����пո����Ʊ������ʵ������һ���ַ���
	//cout << ss;

	////@@��Ҫ�ʼ�

	//���������ó�Ա eofbit  ����¼�Ƿ����� EOF ��������EOF�� eofbit��������Ϊ1�� �����ó�Ա���� ::eof()�����ԡ�
	//������������Ϊ����� ��˼��ֻ����һ�������� enter ����ʱ ��������������ʼ��������ȡ��
	//EOF ��win -- ctrl + z��unix -- ctrl + d��
	//��ֻ�е� EOF ������һ��������ײ�ʱ  �������Ż���ȷ������ eofbit
	//��EOF ������ һ��������м����ĩβ ���������Զ����ӵ� EOF �Լ� ����������Ĳ���
	//(@@self vs2019ʵ�⣬�������м��ctrl + z���ᱻʶ��ΪEOF,����Ҳ���ᱻ���ԣ����Ƕ�����Ϊһ���ҵļ�ͷ,�����汾������ȷʵ�ᱻ�Զ����ӵ�)
	//������  1 2 3 EOF 4 5 6 < enter > �� ֻ��1 2 3 �Ҳ��ͷ ����ȷ���� ��  4 5 6�������������� ֱ�ӵȴ����������
	//ԭ�����ӣ�https ://blog.csdn.net/foxpeter/article/details/6072130	

	////noskipws̽��

	//char char1;
	//string buff1;
	////while (cin >> std::noskipws >> char55) {
	////	cout << "+" << char55 << "+";
	////}
	//while (cin >> std::noskipws >> buff1) {//�����ԣ�noskipws���ﲢ�����ã�������ֻ�����ڵ����ַ����룬�����հס�����Ŀհ׻ᱻ���룬����ͬʱ����ѭ��
	//	cout << "+" << buff1 << "+";
	//}

}

////Chapter 2

void f2_()
{
	//�������ʹ���б��ʼ�������ҳ�ʼֵ���ڶ�ʧ��Ϣ�ķ��գ�������������
	//int ii = { 3 },i5i(99);//������
	//int iii = (3.7);//����������ʾ����ת�����ڲ������ݶ�ʧΣ��
	//int i6i{9.8}; //����:ת��δִ��,��Ϊ���ڶ�ʧ��Ϣ��Σ�� ,Error	C2397	conversion from 'double' to 'int' requires a narrowing conversion

	//int oo = 017;
	//cout << "\n" << oo;

	//int nn = 6, * pp = 0,*pp10;
	//cout << "Pointer:" << *pp << "\n";//����ʱ���˿�ס:Exception thrown: read access violation,pp is nullptr
	//cout << "Pointer:" << *(pp+2) << "\n";//����ʱ���˿�ס:Exception thrown: read access violation,pp is nullptr
	//cout << "Pointer:" << *pp10 << "\n";//����ʱ���˿�ס: 0xC0000005: Access violation reading location 0x00000008. occurredException thrown: read access violation
	//Error	C4700	uninitialized local variable 'pp10' used	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\C++Primer.cpp	62

	//int iii = 42, & r1 = iii;
	//const int &r2 = iii;
	//self:�������ã�ָ���ǡ�ָ���������á�����Ҳֻ��������ˡ���ʵ�������ǣ�����ͨ�������const���εģ����ö��ı� <������ָ����> ��ֵ
	//r2 = 30;//�Ƿ������ܸ��������ø�ֵ
	//cout << "iii(r1��r2�Ƕ�������ã�r2�ǳ�������): " << iii << "\n"; 
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
	////self@@@:20191212�˴����������Щģ��
	//const int ci = 7, & cj = ci;
	//decltype(ci) x = 0; //x��������const int,decltype�����˶���const
	//decltype(cj) y = x;//y��������const int&,��Ϊcj��һ�����ã�����decltype(cj)�Ľ�������������ͣ�decltype�᷵���������ͣ�����������ָ��Ķ��������
	//decltype(cj) z;//����z��һ�����ã����Ա��뱻��ʼ��
	////@@��Ҫָ�������ô���������Ϊ��ָ�����ͬ��ʳ��֣�ֻ����decltype���Ǹ�����
	////@@���decltypeʹ�õ��Ǳ��ʽ������һ����������decltype���ر��ʽ�����Ӧ������
	//int di = 88,ddi=67, * dp = &di, & dr = di;

	////�������о����һ��<���ʽ>
	////1.
	//(*dp);
	////�˴���������С�����������ı������ͳ�Ϊһ�����ʽ��
	////������ʽ��<����ֵ>�����߱��ʽ����Ľ����������Ϊһ����ֵ������ֵ,����
	//(*dp) = 66;
	////self@@:Ҳ����˵������ʽ�Ľ���൱�� di (ָ��dpָ��Ķ���)һ��<����>,(*dp)���Ƕ�di��һ��<����>,����������һ����Ϊ��ֵ������ֵ
	////�������£�������ʹ��decltype���õ�<��������>
	//decltype(*dp) ddpp = ddi;
	//cout << "the value of ddpp shuold be the same to ddi(67)\n ddpp = " << ddpp;
	//
	////2.
	//(di);
	////�˴���������С�����������ı������ͳ�Ϊһ�����ʽ��
	////������ʽ��<����ֵ>�����߱��ʽ����Ľ����������Ϊһ����ֵ������ֵ,����
	//(di) = 999;
	////self@@:Ҳ����˵������ʽ�Ľ���൱�� di<����>,�Ƕ�di��һ��<����>,����������һ����Ϊ��ֵ������ֵ
	////�������£�������ʹ��decltype���õ�<��������>
	//decltype((di)) d;//����d��int&�����뱻��ʼ��
	////���������������һ����߶������,����(di)���������ͻ��������һ�����ʽ(������һ�������ı���)���Ӷ�������decltype�ͻ�õ�<��������>

	//int a = 3, b = 4;
	//decltype(a) c = a;
	//decltype(a = b) d = a;//@@ע�⣬a=b��δʵ��ִ�У�decltypeֻ�������ƶϳ����ͣ����ǲ�������ִ�б��ʽ
	////c is an int, d is a reference of int. the value: a=3, b=4, c=3, d=3
}

////Chapter 3

void f3_() {
	//@@self@@global declare:�����Ǳ�������ȫ������������ע��
	constexpr size_t array_size = 56, x_size = 3, y_size = 4, z_size = 5;//@@self:�Ѿ��ڱ�������ͷ��Ϊ��������ȫ������


	//string s00e = 45;//����
	//string s00e = \x97;//����
	//string s00e = '\x97';//����
	//string s00e = '\n';//����
	//string s00e = "\n";//��ȷ
	//string s00e = "\x97";//��ȷ
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
	//	if (s008.size() > s009.size()) cout << "The longer string is:" << s008;//self:��?:��������򵥵ķ�֧�ж�  cout << "The larger string is " << ((str1 > str2) ? str1 : str2);
	//	else if(s008.size()<s009.size()) cout << "The longer string is:" << s009;
	//}

	//while (cin >> s008)//self: �����ԣ��˴���Ҫ����Ctrl+Z����������һ��Ctrl+Z�ᱻ¼�뵽�ַ����У�����Ϊ���һ�����Ҽ�ͷ���š�
	//						//@@�����Ȱ����У��ٰ�Ctrl+D,�ٰ��س������к�Ctrl+D�����ᱻ���롣
	//{
	//	s009 += s008;
	//	s010 += s008 + ' ';
	//}
	//cout << s009;
	//cout << s010;


	/*for (string s011; getline(cin, s011);1+1)//ʵ�⣬string�����ܹ��洢���֣�Ҳ��cout������C��׼���ĳЩ�����ᱨ��
		{

		//	decltype(s011.size()) punct_cnt = 0;
		//	//for (auto c : s011)
		//	//{
		//	//	if (ispunct(c))//self:ispunct���������֧��ASCII�ַ��������ֻᱨ��������ֹ
		//	//	{
		//	//		punct_cnt++;
		//	//	}
		//	//}

		//	for (auto& upc : s011)
		//	{
		//		//upc = 'X';
		//		cout << upc;//�����ԭ��������֣�string�������Զ������ַ�ռ�ü����ֽ�
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

		//cout << s008[0]<<endl<<s009[0]<<"	a";//��s008,s009Ϊ��ʱ�����һ����ĸa���ӵ��ַ������ǲ���a
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
	//�����������������������������������ľ��룬�������������ν��"difference type"
	////for (auto it = v234.cbegin(), ite = v234.cend(); ite - it > 0; cout << *it++ + *--ite <<' ');
	//for (auto it = v234.cbegin(), ite = v234.cend(); ite > it ; cout << *it++ + *--ite <<' ');//ָ��ͬһ�������ĵ��������ԱȽϴ�С
	//cout << endl;

	//vector<string> vs0;
	//for (string si; cin >> si; vs0.push_back(si));
	//for (string si; (cin >> si);)
	//{
	//	for (auto& c : si) c = toupper(c);//self:@ת���ɴ�д��һ����toupper��������������������
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
	//		for (auto itt = it->cbegin(); itt != it->cend(); cout << *itt << ' ', itt++);//ע�����itt++,cout<<*itt<<' ',��ittָ��β����ʱ�򣬾ͻ���ֽ����ô���
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
	//cout << "�鿴��������cbegin()�Ƿ����begin():" << endl;
	////auto it = s015.begin(), itc = s015.cbegin();//���Ͳ�һ�´���
	//auto it = s015.begin();
	//auto itc = s015.cbegin();
	//it++ == itc++ ? cout << "cbegin��begin���صĵ�����,�����Ͳ�һ�£������ж���������������ȣ���Ϊ������ָ���������ȫ��ͬ"
	//	<< endl : cout << "cbegin��begin�����" << endl;




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

	//constexpr size_t array_size = 56;//@@self:�Ѿ��ڱ�������ͷ��Ϊ��������ȫ������
	//int ai10[array_size]{ 0,1,2,3,4,5,6,7,8,10 }, ai13[14]{ 99,99,99,99,99,99,99,999,999,99,99,99,99,999 };
	//int* pai13 = ai13;
	////vector<int> vai10(pai10+2, pai10 + 10);
	//vector<int> vai10(ai10 + 4, ai10 + 10);
	//for (auto vi : vai10)cout << vi << ' ';
	//cout << endl;
	//for (auto vi : vai10)*(pai13+++2)=vi;//@@self:��С��ʹ�õ�����������pai13��ָ����ai13�ĳ��ȣ����������ᱨ�������Գ��򵽴�throw Exception:Run - Time Check Failure #2 - Stack around the variable 'ai13' was corrupted.occurred
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
	//if (pai3 == pi3) (cout << "pai3==pi3" << endl);//print"pai3==pi3"��˵��ָ�������ָ����ֱ�Ӷ����ָ������Ԫ�ص�ָ����ͬ
	//else cout << "ָ�������ָ����ֱ�Ӷ����ָ������Ԫ�ص�ָ�벻ͬ";
	////for (auto pai4=ai3; pai4 != &ai3[array_size]; *pai4++ = i222++);//ͨ��ָ���������
	//for (auto pai4=ai3; pai4 != ai3+array_size; *pai4++ = i222++);//ͨ��ָ���������,��������Ҳ��ָ������ó�
	////cout << endl;
	//for (; pi3 != &ai3[array_size]; *pi3++ = i222++);//@@��Ȼpi3�Ǹ�����ָ�룬�������ָ��<Խ�����>,Ҳ���Ա�������
	//for (auto i : ai3)cout << i << ' ';//��Χfor��������
	//self@@:��һ��̽��������������ָ�������ָ���Լ����������֮����������ϵ
	//for (auto i : ai3)cout << i << ' ';//��Χfor���Ա�������
	//int  (&rai3)[array_size] = ai3, (*ppai3)[array_size];
	//ppai3 = ai3;//�˴����󣬸���ppai3�Ķ���	����Ӧ��ָ��һ�� ��СΪarray_size����������,Ҳ����ppai3++,ppai3ÿ����1��ָ���ƶ�array_size�����α����ĵ�ַ��ȡ�
	//			//	Error(active)	E0513	a value of type "int *" cannot be assigned to an entity of type "int (*)[56]"

	//for (auto i : pai3)cout << i << ' ';//Error:ָ��pai3��Ȼ��������ai3��ֵ������������Ȼ���������������������,���ָ���򲻰��� 
	//									//Error(active)	E2291	this range - based 'for' statement requires a suitable "begin" function and none was found	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\C++Primer.cpp	534
	//for (auto ri : rai3)cout << ri << ' ';//@@ָ������������ܹ������������飬ָ�������ָ������
	//cout << rai3[2] << endl;//ָ����������ÿ����±����㣬ָ����������ü������������������������
	//cout << endl;
	////for (auto* epai3 = &ai3[array_size]; epai3 != ai3; cout << *--epai3 << ' ');//auto*�����÷���ȻҲ��
	//for (auto epai3 =std::end(ai3); epai3 != ai3; cout << *--epai3 << ' ');//�����������
	//cout << endl;
	//for (auto i = 0; i < array_size/6; cout << *pi223++<<' '<<i<<" | ",i++);//@@self:������ָ���޷���������ָ�룬Ȼ��ִ��ָ���������㣬����Խ�����δ֪����
	//cout << endl;

	//const char ca0[] = { 'H','e','l','l','o','\0' };
	//const char ca0[] = { 'h','e','l','l','o'},ca1[]={ 'H','e','l','l','o','\x0'};
	//const char ca0[] = { 'H','e','l','l','o','\0'},ca1[]={ 'H','e','l','l','o','\x0'};
	//const char ca0[] = { 'h','e','l','l','\0'},ca1[]={ 'H','e','l','l','o','\x0'};
	//const char ca0[] = { 'h','e','l','l'},ca1[]={ 'H','e','l','l','o','\x0'};
	//const char* cp0 = ca0;
	//	
	////��ca0ĩβû�п��ַ�������£�������δ����
	//while (*cp0) {
	//	cout << *cp0 << ' ';
	//	++cp0;
	//}
	////���б�д�Ƚ�����C����ַ�����ʵ����strcmp��������
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
	////��������ÿ��Ԫ��(���ѻ��ð�)
	//for (auto p: ia) {//δʹ�����ã�p�Զ�תΪָ��ia��ÿ��Ԫ�� ����Ԫ�ص�ָ��
	//	for (auto q = p; q != p + y_size; q++) {//q��p������ͬ�����Ƕ�ָ����һ���������Ԫ�أ��������������ia��Ԫ��
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
	//��������ÿ��Ԫ��
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
	//////����f6_23_3_print,�ڲ��÷�Χfor ���ÿ���ѭ������ ����������
	//f6_23_3_print(matrix623);
	//////self@@:��Ϊ����  <��Χfor�����ñ���> ʱ,(����Ӧ���� ���ñ���),ʵ�ʷ����Ĺ���
	//for (auto eeee : jj623) {
	//	cout << "eeee �����Ϳ��Կ�̽һЩ��ά����Ĺ���\n��ѭ����ִ������\n";
	//	cout << (R"(eeee IDE��ʾ�� int(*eeee)[4][5][6]
	//				�����������ģ����ȷ�Χforȡ��jj623��һ��Ԫ�أ������e[3][4][5][6]
	//				Ȼ��e����������֣��Զ���ת����ָ����Ԫ�ص�ָ�룬
	//				e��Ԫ������ ee[4][5][6]	ָ��ee����Ԫ�ص�ָ�����ͣ���Ȼ����int *[4][5][6]"
	//				@@@������ʺ���Ҫ����ʵ�������ָ������Ǳ����˲���ά�ȵ���Ϣ��
	//					��ǰ���ά����Ϣ������������ָ�뻯����ʧ��һ����)");
	//}

	////��������ÿ��Ԫ��(���ѻ��ð�)
	//for (auto x : axyz) {	
	//	for (auto y = x;y!=x+y_size; y++) {
	//		for (auto z : *y) {	
	//			cout << z << ' ' << "| "; 
	//		}
	//	cout << endl;
	//	}
	//	cout << endl;
	//}


	//��������ÿ��Ԫ��(���ѻ��ð�),����д��������ȫ��������������ά������м�һά�����Ϊ
	//0++1++2++3++4++
	//20++21++22++23++24++
	//40++41++42++43++44++
	//for (auto x : axyz) {	
	//		for (auto y : *x) {	//�˴����������У�����������axyz�еĵڶ�ά
	//			cout << y <<"++";
	//		}
	//	cout << endl;
	//}

	//for (auto& x : axyz) {	//Error,�ڲ����ǻ������������z,ʵ�������axyz������Ԫ�� ĳ[4][5] �ĵ�ַ��
	//	for (auto& y : axyz) {
	//		for (auto& z : axyz) {
	//			cout << z << ' ' << **z << "| "; 
	//		}
	//	}
	//	cout << endl;
	//}

	//@@self��ά�����о������Ӱ�
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
	//��auto���ñ�����
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

	//�±������
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

	//��autoָ�������
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
	//���ͱ������ñ����� 
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

	//���ͱ���ָ������� 
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

	// auto��Χfor������
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

	//���ӻ��ñ����棬�о��ã���ʵ������
	//for (auto x : axyzi) {
	//	for (auto y = x; y != x + y_size; y++) {
	//		for (auto z = *y; z != *y + z_size; z++) {
	//			for (auto zi : *z) {//���һ�������÷�Χforȥ����*z,��Ϊz�������� int(*z)[z_size] �ɴ����ж�*z�ĵ���������5
	//				cout << zi << " |";
	//			}
	//		}
	//		cout << endl;
	//	}
	//	cout << endl;
	//}


	//cout << endl;
	//auto pa00 = 0x001ef6a4, pa01 = 0x001ef6f4;
	//cout << "axyz[3][4][5]����ÿ����ά������ռ��80���ֽ� --> (0x001ef6f4 - 0x001ef6a4) = " << (pa01 - pa00)  << endl;

	//f3_()�������һ������
}

////Chapter 4

void f4_() {
	//@@self@@global declare:�����Ǳ�������ȫ������������ע��
	constexpr size_t array_size = 56, x_size = 3, y_size = 4, z_size = 5;//@@self:�Ѿ��ڱ�������ͷ��Ϊ��������ȫ������


	//int aoe0[z_size * 2] = { 0 }, i = 0;
	//for (auto p = std::begin(aoe0); p != std::end(aoe0); p++) {
	//	*p += i++;
	//}
	//for (auto ai : aoe0) { cout << ai << " " << (ai & 0x1) << " |"; }

	////���
	//short svalue = 32767; cout << ++svalue << endl;
	////cout << svalue/0 << endl;//	Unhandled exception at 0x00056A87 in C++Primer.exe: 0xC0000094 : Integer division by zero.occurred
	//unsigned short shvalue = 0; cout << --shvalue<<"| unsigned short and it's half |"<<shvalue/2 << endl;
	//unsigned uivalue = 0; cout << --uivalue <<"| unsigned short and it's half |"<<uivalue/2<< endl;
	//unsigned long ulvalue = 0; cout << --ulvalue<<"| unsigned short and it's half |"<<ulvalue/2 << endl;
	//unsigned long long ullvalue = 0; cout << --ullvalue <<"| unsigned short and it's half |"<<ullvalue/2<< endl;

	////�Ա࣬�����ַ�������z_size*3��ÿ5���ִ��ճ�һ�����ִ���������һ�ִ�ĩβ�Ǿ�ţ��ճ�һ�����ִ���
	//int cnt40 = 0;
	//vector<string> vs40(z_size * 3, "");
	//string s40{ "" };
	//while (cin >> s40) {
	//	cout << s40 << "	size: " << s40.size() << endl;
	//	(cnt40 + 1) % 5 ? 0:cnt40++;//��Ԫ�ظ�����5�ı���ʱ������һ��λ��
	//	if (cnt40 < z_size * 3) {
	//		s40[s40.size() - 1] == '.' ? vs40[(++cnt40)++]=s40 : vs40[cnt40++]=s40;//������ţ��������������ַ���
	//	}
	//	else { vs40.push_back(s40); }

	//	//vs40[++cnt40++]; //Error(active)	E0137	expression must be a modifiable lvalue	C++Primer	
	//}

	//vector<string> vs42{"","ni","hao","wei","lai","","jian chi","xiangxinziji.","dui ba","shi de","",""};//4.3 P127 �Ա�������� 
	//for (auto const &vsi : vs40) { //vsi���������ã����Ա����vs40Ԫ�صĸ��ƣ��ر�vs40Ԫ�طǳ����ʱ�򣬱ȽϽ�ʡ��Դ��
	//	cout << vsi;
	//	//a&&b||c;�����൱��if(a) {b} else {c};
	//	(vsi.size() == 0 || vsi[vsi.size() - 1] == '.') && cout << endl || cout << " ";	//���ȼ��ĺ����ӣ���������û�����ţ�&&��������� -->  vsi.size() == 0 || vsi[vsi.size() - 1] == '.' && cout << endl || cout << " ";
	//	//vsi.size() == 0 && cout << endl;// || cout << " ";
	//	}

	//vector<string> vs45{"","ni","hao","wei","lai","","jian chi","xiangxinziji.","dui ba","shi de","",""};
	//"����������ĺ���ı��ʽ������vector" ? vs45 : vs45;
	//vs45.empty() ? "empty" : vs45.size();//��֤�������������������������ͬһ���ͣ����߿�ת���ɹ������ͣ�Error(active)	E0042	operand types are incompatible("const char *" and "size_t")
	//3 > 5 ? "no" : 5;//	E0042	operand types are incompatible("const char *" and "size_t")
	//3 > 5 ? cout<<"no"<<endl : cout<<5<<endl;//���û����
	//1 > 3 ? 7>6 ?vs45[0]="expr1 ... \n":vs45[0]="expr2 ... \n" : vs45[0]="expr3 ... \n";//�����ô�����أ�
	//5 > 3 ? 7>6 ?vs45[0]="expr1 ... \n":vs45[0]="expr2 ... \n" : vs45[0]="expr3 ... \n";//�����ô�����أ�
	//1 > 3 ? 5>6 ?vs45[0]="expr1 ... \n":vs45[0]="expr2 ... \n" : vs45[0]="expr3 ... \n";//�����ô�����أ�
	//1 > 3 ? (5>6 ?vs45[0]="expr1 ... \n":vs45[0]="expr2 ... \n") : vs45[0]="expr3 ... \n";//����������������������ȼ��ڱ��У������ż����ŵ�����˳�����
	//cout << vs45[0];

	//////Խ����ʣ��鿴�ڴ�����
	//const char* p40 = "dedicate",*p41="gloss ���Σ����� subtle ΢���";
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


	////�򵥸�ϰstring���ͳ�ʼ����ʽ
	//char ca = 'r',*pca=&ca;
	//string s4_1;
	//string s4_2(s4_1);
	//string s4_3 = s4_1;
	//string s4_4("value");
	//string s4_5 = "value";
	//string s4_6(10, 'c');
	////string s4_6(10, "c");//@@����,������
	////string s4_7('f');//����
	////string s4_8(ca);//����
	//string s4_8(&ca);//@@��Ҳ����
	//string s4_9(pca);//@@��Ҳ����
	////���ͱ���146ҳ����
	//char ca40 = 'a',*pca40=&ca40;//P146ҳ
	//string str(pca40);//ͨ�����渴ϰ����������������һ����Ϊ str ��string���� �����Ҳ��ú�s4_9��ͬ�ĳ�ʼ����ʽ

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
	cout << "The content of s1_411:\n" << s1_411 << endl;//self@@:��ԭ��ָ���ַ���ָ����Ա�ת������ֵ���ַ����������ַ���������ʵ����ָ���ַ�����ָ��
						//����һ������������ԭ��ָ����ַ� A ֮�⣬���滹���������δ������ַ���ֱ������ĳ�����ַ���ֹͣ��
						//��ʼ��s1_411ʱ���ǽ�cp411��ָ��λ�õ�����ĳ�����ַ�֮����ַ���������s1_411��
	s1_411 = "account";
	cout << "The content of s1_411:\n" << s1_411 << endl;
	cout << "The original content of pointer cp411 pointed:\n" << *cp411 << endl;
	//f4_()�������һ������
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

	//while (cin >>std::noskipws>> cif5) {//noskipws do not skip white-space���������հף����' ','\t','\n','\v','\f','\r'��Щ�ַ�Ҳ����
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
	//	prechar = cif5; //self:�ǳ��õĴ���������ֵ�ļ��ɣ����ǡ����桱���ǣ�����������bug,ffff�ᱻͳ��Ϊ3��ff
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
	//if (pre) cout << "V1 �� V2  <��> ǰ׺��ϵ\n";
	//else cout << "V1 �� V2  <��> ǰ׺��ϵ\n";
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

	//ϰ��5.20 forѭ���Ա���ϰ�棬���߼�BUG������������ʾ

	//string now5166, pre5166;
	////for (cin >> pre5166; cin >> now5166 && pre5166 != now5166; pre5166 = now5166) ;{//@@������Ϊ��ʱ��cin>>now516����ı�now516��ֵ�����ѭ����������ʱ����pre516==now516
	////��ȷд��
	//for (cin >> pre5166; cin >> now5166; pre5166 = now5166) {//@@������Ϊ��ʱ��cin>>now516����ı�now516��ֵ�����ѭ����������ʱ����pre516==now516
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


	////@@��Ҫ�ʼ�

	//���������ó�Ա eofbit  ����¼�Ƿ����� EOF ��������EOF�� eofbit��������Ϊ1�� �����ó�Ա���� ::eof()�����ԡ�
	//������������Ϊ����� ��˼��ֻ����һ�������� enter ����ʱ ��������������ʼ��������ȡ��
	//EOF ��win -- ctrl + z��unix -- ctrl + d��
	//��ֻ�е� EOF ������һ��������ײ�ʱ  �������Ż���ȷ������ eofbit
	//��EOF ������ һ��������м����ĩβ ���������Զ����ӵ� EOF �Լ� ����������Ĳ���
	//(@@self vs2019ʵ�⣬�������м��ctrl + z���ᱻʶ��ΪEOF,����Ҳ���ᱻ���ԣ����Ƕ�����Ϊһ���ҵļ�ͷ,�����汾������ȷʵ�ᱻ�Զ����ӵ�)
	//������  1 2 3 EOF 4 5 6 < enter > �� ֻ��1 2 3 �Ҳ��ͷ ����ȷ���� ��  4 5 6�������������� ֱ�ӵȴ����������
	//ԭ�����ӣ�https ://blog.csdn.net/foxpeter/article/details/6072130	


	//string buff55;
	//cout << "next\n";
	//while (cin >> buff55) { //����Ӧ���Ǵ��������һ��ʾ��������ֻ�����ڴ��ļ����롣�����׼�����ȡ�Ļ����հײ��ᱻ���룬Ҳ������ν"������һ���հ�Ϊֹ"
	//	cout << '+' << buff55 << '+\n';
	//	switch (buff55[0])
	//	{
	//	case '-':
	//		//������һ���հ�Ϊֹ
	//		for (auto it = buff55.begin() + 1; it != buff55.end(); ++it)
	//		{
	//			cout << *it << '+';
	//			if (*it == ' ')
	//			{
	//				cout << "There is a blank\n";
	//				break; //#1,�뿪forѭ��
	//			}
	//		}
	//		//break #1 ����������������
	//		//����������һ��'-'
	//		break; //#2,�뿪switch��䣬�������whileѭ��û����ֹ���ͻ����������һ�� '-'
	//	default:
	//		break;
	//	}
	//	//break #2 ������Ȩ�ƽ����������switch
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
	//for (auto & c : s) { //@Error:�������Ϊ���ã���ζ�ſ��Ի���Ҫͨ�������ı�s�����ݣ���s�Ǹ����ַ����ĳ������ã����Ա���
		//c = 'a';
	for (auto& c : s) {
		if (isupper(c)) { return true; }
	}
	return false;
}

auto has_upper_auto(const string& s) {
	//for (auto & c : s) { //@Error:�������Ϊ���ã���ζ�ſ��Ի���Ҫͨ�������ı�s�����ݣ���s�Ǹ����ַ����ĳ������ã����Ա���
		//c = 'a';
	for (auto& c : s) {
		if (isupper(c)) { return true; }
	}
	////return "�������;�Ȼ������auto���壬�������ǿ��Է��ز�ͬ���͵�ֵ��"; //self@@:Error(active)	E2546	deduced return type "const char *" conflicts with previously deduced type "bool"	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_1_6.cpp	1061
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

void f6_22_2(int*& a, int*& b) { //self@@@: int * �����ã�����ָ������ã�ָ��������������壡��
								//���ң������βΣ����� <����> �������Ķ����ֵ����
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

void f6_23_2_print(const int* i, int(&j)[2]) {//���Դ�����������ã������������⴫�������С��ʹ�÷�Χforѭ������
													//@@ȱ��:��������Ժ�ֻ�ܴ��ݴ�СΪ2�����飬�����˲����������
													//����ά�ȵ����鶼�ᱨ�����Ͳ�ƥ��
	cout << *i << endl;
	for (auto& e : j) { cout << e << " "; }
	cout << endl;
}
void f6_23_3_print(int(&matrix)[2][3][4]) {
	for (const auto& eee : matrix) {//@@��ϰ��ʹ�÷�Χfor������Ϊ�˱����������Զ�ת����ָ�룬��Ҫ��ѭ�����Ʊ�����������������
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

void initial_lst_6_27_2(initializer_list<int>  const& vararg) {//self��ѧϰ�ˣ��������������������������ô�
												//���� const initializer & vararg Ч��һ����
												//constд�����ͽ������ͷ��������Ҳ�Ч��Ӧ��һ��,���ǲ��Ƽ��Ǳ�׼д��
												//�������	int const & test=sum���õ�test��������const & int
	int sum = 0;
	for (auto e : vararg) { sum += e; }
	cout << "The sum of all initializer_list elements is:\n" << sum << endl;
}

bool str_subrange(const string& str1, const string& str2) {
	if (str1.size() == str2.size()) { return str1 == str2; }
	auto size = str1.size() < str2.size() ? str1.size() : str2.size();
	for (decltype(size) i = 0; i != size; i++) {
		if (str1[i] != str2[i])
			//return; //Error 1,no return value ,��������������һ����
			return false;
	}
	//Error 2,��������δ�����κ�ֵ���ͽ����˺���������   Warning	C4715	'str_subrange': not all control paths return a value
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

	//string prompt10 = "�жϴ�д��ĸ:\n";
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
	//int r622 = i622; //@@��ϰ����
	//for (int a, b; cout << prompt10, cin >> a >> b;) {
	//	int* p = &a, * q = &b;
	//	cout << "Before Exchange:\n" << *p << '\t' << *q << endl;
	//	//f6_22(&p, &q);
	//	f6_22_2(p, q);//self@@:����β������ã�ֱ���� ���ý�Ҫָ��Ķ��� ��ֵ����
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
	//	cout << "eeee �����Ϳ��Կ�̽һЩ��ά����Ĺ���\n��ѭ����ִ������\n";
	//	cout << (R"(eeee IDE��ʾ�� int(*eeee)[4][5][6]
	//				�����������ģ����ȷ�Χforȡ��jj623��һ��Ԫ�أ������e[3][4][5][6]
	//				Ȼ��e����������֣��Զ���ת����ָ����Ԫ�ص�ָ�룬
	//				e��Ԫ������ ee[4][5][6]	ָ��ee����Ԫ�ص�ָ�����ͣ���Ȼ����int *[4][5][6]"
	//				@@@������ʺ���Ҫ����ʵ������ָ������Ǳ����˲���ά�ȵ���Ϣ��
	//					��ǰ���ά����Ϣ������������ָ�뻯����ʧ��һ����)");
	//}

	////6.27

	//int arr627[10]{ 300,1,4,7,8,2,9,3,6,5 };
	//vector<int> varr627{ 300,1,4,7,8,2,9,3,6,5 };
	//////ǿ������ת��intializer_list����ô����
	////initializer_list<int> ini_627 = (initializer_list<int>)arr627;
	////initializer_list<int> ini_627;ini_627= (initializer_list<int>)varr627;
	//initializer_list<int> ini_627_1{ arr627[0], arr627[1], arr627[2], arr627[3], arr627[4], arr627[5], arr627[6], arr627[7], arr627[8], arr627[9] };
	//auto ini_627_2 = { arr627[6], arr627[7], arr627[8], arr627[9] };
	//initial_lst_6_27(ini_627_1);
	//initial_lst_6_27_2(ini_627_2);//�ο��𰸰棬ѧϰauto ,�βε�����

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
	////vf3_655[2] = multi_655; //self:vector���±�Խ�磬IDE�������ѣ�ֱ������ʱ���ͻᱨ�� Expression: vector subscript out of range
	////vf3_655[3] = &division_655;
	//vf3_655.push_back(multi_655);
	//vf3_655.push_back(division_655);
	//cout << add_655<<endl;//����������Ϊһ��ֵʹ�ã��ú����Զ�ת����ָ��
	//cout << "����������Ϊһ��ֵʹ�ã��ú����Զ�ת����ָ��\n\n";
	//for (auto e : vf3_655) { cout << e << endl; }//������������Ƕ���ĵ�ַ
	//for (auto e : vf3_655) { cout << e<<" : a = 10, b = 4\t f(a,b) = "<<e(10,4) << endl; }
	////(*(vf3_655[1]+1))(10, 4);//����ָ��+1��������
	////*(af4_655[1] + 1);//����ָ�룫1����
	//cout << endl;
	//for (auto e : af4_655) { cout << e<<" : a = 10, b = 4\t f(a,b) = "<<(*e)(10,4) << endl; }
	//cout << endl;
	//for (auto e : af4_655) { cout << e<<" : a = 10, b = 4\t f(a,b) = "<<e(10,4) << endl; }


}


