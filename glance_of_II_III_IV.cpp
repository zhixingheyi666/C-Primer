


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


////10.32  self:泛型编程感觉不错

void glance_1032() {
	std::istream_iterator<Sales_item> in_iter(cin), end_iter;
	std::vector<Sales_item> v_item;
	while (in_iter != end_iter) {
		v_item.push_back(*in_iter++);
	}

	//std::sort(v_item.cbegin(), v_item.cend(), compareIsbn);////self@@:严重错误，排序的话，不能用const类型的迭代器，因为排序是要改变容器某些位置元素的值的(一般需要交换元素的值)
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
////self@@：github 上的答案，关于本题的解释是错误的，我用下面代码进行了验证 https://github.com/Mooophy/Cpp-Primer/blob/master/ch10/ex10_34_35_36_37.cpp
////		尤其要注意v.cbegin()+3这个迭代器指向的元素是v[3]，也就是数字3
void glance_1037() {
	std::vector<int> v{ 0,1,2,3,4,5,6,7,8,9 };
	std::list<int> rlst(8 - 3), rlst_t(10);
	cout << "*(v.cbegin()+3):  " << *(v.cbegin() + 3) << endl;
	std::copy(v.cbegin() + 3, v.cbegin() + 8, rlst.rbegin());
	for (auto e : rlst) { cout << e << ' '; } cout << endl;
	auto rlst_t_iter = rlst_t.rbegin();
	////self@@:此处验证了反向迭代器从后向前处理元素的特点
	for (auto e : v) {
		*rlst_t_iter++ = e;
	}
	std::for_each(rlst_t.cbegin(), rlst_t.cend(), [](const int& i) {cout << i << " "; }), cout << endl;
}


void glance_12_() {
	////self@@:此处验证const版本的vector能不能调用push_back，其元素是不是const，能不能改变
	std::vector<std::string>  const cvs_t({ "Can const vector call"," push_back? ","No!","Can const vector change its elements? ","No!" ," Because its members are const also!!" });
	//cvs_t.push_back(std::string("\nThe above tow answers are absolutly wrong!"));////报错
	//cvs_t[5] = "Yes";	////报错: operand types are : const std::string = const char[4]
	//*(cvs_t.begin() + 2) = "Yes";////报错: Error	C2678	binary '=': no operator found which takes a left - hand operand of type 'const std::basic_string<char,std::char_traits<char>,std::allocator<char>>' (or there is no acceptable conversion)
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


	////9.24--临时测试，放这里吧
	//std::vector<int> iv;
	//cout << iv.at(0) << endl;
	//cout << iv[0] << endl;
	//cout << iv.front() << endl;
	//cout << iv.back() << endl;
	//cout << *iv.begin() << endl;
	//cout << *(++iv.end()) << endl;
}

