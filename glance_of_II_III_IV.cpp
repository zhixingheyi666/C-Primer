


#include <iostream>
#include<vector>
#include<list>
#include<string>
#include<stack>
#include<cctype>
#include<algorithm>
#include<numeric>
#include<iterator>
#include "Sales_item.h"
#include<memory>
#include<new>




using std::cout;
using std::cin;
using std::endl;
using std::istream;


std::shared_ptr<int> clone_12(int p) {
	int* np = new int(p);
	//return new int(p);//Error(active)	E0415	no suitable constructor exists to convert from "int *" to "std::shared_ptr<int>"	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\glance_of_II_III_IV.cpp	28
	return std::shared_ptr<int>(new int(p));

}

////8.02

istream& glance_802(istream& is)
{
	std::string buf;
	while (is >> buf)
		std::cout << buf << std::endl;
	is.clear();
	return is;
}


////10.32  self:���ͱ�̸о�����

void glance_1032() {
	std::istream_iterator<Sales_item> in_iter(cin), end_iter;
	std::vector<Sales_item> v_item;
	while (in_iter != end_iter) {
		v_item.push_back(*in_iter++);
	}

	//std::sort(v_item.cbegin(), v_item.cend(), compareIsbn);////self@@:���ش�������Ļ���������const���͵ĵ���������Ϊ������Ҫ�ı�����ĳЩλ��Ԫ�ص�ֵ��(һ����Ҫ����Ԫ�ص�ֵ)
	///Message		see reference to function template instantiation '_BidIt *std::_Insertion_sort_unchecked<_RanIt,bool(__cdecl *)(const Sales_item &,const Sales_item &)>(_BidIt,const _BidIt,_Pr)' being compiled
	//	//with
	//	//[
	//	//	_BidIt = const Sales_item*,
	//	//	_RanIt = const Sales_item*,
	//	//	_Pr = bool(__cdecl*)(const Sales_item&, const Sales_item&)
	//	//]	C++Primer	C : \Program Files(x86)\Microsoft Visual Studio\2019\Enterprise\VC\Tools\MSVC\14.23.28105\include\algorithm	3457

	std::sort(v_item.begin(), v_item.end(), compareIsbn);
	for (auto beg = v_item.cbegin(), end = beg; beg != v_item.cend(); beg = end) {
		end = std::find_if(beg, v_item.cend(), [beg](const Sales_item& item) { return item.isbn() != beg->isbn(); });
		cout << std::accumulate(beg, end, Sales_item(beg->isbn())) << endl;
	}
}



////10.37
////self@@��github �ϵĴ𰸣����ڱ���Ľ����Ǵ���ģ�������������������֤ https://github.com/Mooophy/Cpp-Primer/blob/master/ch10/ex10_34_35_36_37.cpp
////		����Ҫע��v.cbegin()+3���������ָ���Ԫ����v[3]��Ҳ��������3
void glance_1037() {
	std::vector<int> v{ 0,1,2,3,4,5,6,7,8,9 };
	std::list<int> rlst(8 - 3), rlst_t(10);
	cout << "*(v.cbegin()+3):  " << *(v.cbegin() + 3) << endl;
	std::copy(v.cbegin() + 3, v.cbegin() + 8, rlst.rbegin());
	for (auto e : rlst) { cout << e << ' '; } cout << endl;
	auto rlst_t_iter = rlst_t.rbegin();
	////self@@:�˴���֤�˷���������Ӻ���ǰ����Ԫ�ص��ص�
	for (auto e : v) {
		*rlst_t_iter++ = e;
	}
	std::for_each(rlst_t.cbegin(), rlst_t.cend(), [](const int& i) {cout << i << " "; }), cout << endl;
}


void glance_12_() {
	////self@@:�˴���֤const�汾��vector�ܲ��ܵ���push_back����Ԫ���ǲ���const���ܲ��ܸı�
	std::vector<std::string>  const cvs_t({ "Can const vector call"," push_back? ","No!","Can const vector change its elements? ","No!" ," Because its members are const also!!" });
	//cvs_t.push_back(std::string("\nThe above tow answers are absolutly wrong!"));////����
	//cvs_t[5] = "Yes";	////����: operand types are : const std::string = const char[4]
	//*(cvs_t.begin() + 2) = "Yes";////����: Error	C2678	binary '=': no operator found which takes a left - hand operand of type 'const std::basic_string<char,std::char_traits<char>,std::allocator<char>>' (or there is no acceptable conversion)
	//std::for_each(cvs_t.begin(), cvs_t.end(), [](std::string& t) {cout << t << ' '; });////	Error	C2664	'void glance_1037::<lambda_1278da5b015e0d6eeff5a89d4ef19029>::operator ()(std::string &) const': cannot convert argument 1 from 'const std::basic_string<char,std::char_traits<char>,std::allocator<char>>' to 'std::string &'

	cout << *(cvs_t.begin() + 2) << cvs_t[4] << endl;

	std::for_each(cvs_t.begin(), cvs_t.end(), [](std::string const& t) {cout << t << ' '; });
	cout << endl;

}


void glance_234_() {
	//istream& is = func_802(std::cin);
	//std::cout << is.rdstate() << std::endl;
	//std::cout << "failbit:  "<<is.failbit << '\n';
	//std::cout << "googbit:  "<<is.goodbit << '\n';
	//std::cout << "&badbit:  "<<~is.badbit << '\n';
	//is.clear(is.rdstate() & ~is.failbit);
	//std::cout << "rdstate:  "<<is.failbit << '\n';
	//std::cout << is.rdstate() << std::endl;


	////9.24--��ʱ���ԣ��������
	//std::vector<int> iv;
	//cout << iv.at(0) << endl;
	//cout << iv[0] << endl;
	//cout << iv.front() << endl;
	//cout << iv.back() << endl;
	//cout << *iv.begin() << endl;
	//cout << *(++iv.end()) << endl;
}

