#pragma once
#ifndef CHAPTER_1_6_H
#define CHAPTER_1_6_H

#include<string>
#include<cmath>
#include<vector>


using std::string;
using std::vector;

void f1_();

void f2_();

void f2_decltype();

void f3_();

void f4_();

void f5_();

int factorial(int num);
double abs_6(double);
int count_exe();
void exchange(int*, int*);
void exchange_rf(int&, int&);
void reset_t(int&, int&);
bool has_upper(const string&);

//// void to_lower(string);//Error	C2668	'to_lower': ambiguous call to overloaded function  could be 'void to_lower(std::string &)' or 'void to_lower(std::string)' while trying to match the argument list '(std::string)
			//self@@：头文件函数声明 与对应源文件的函数定义不一致，因为名字完全一样，IDE把他们判定为两个重载函数，但是他们也可以接受同样的参数，因此报错
			//self@@:还有，如果只是return有区别，重载也会失败 --> Error(active)	E0311	cannot overload functions distinguished by return type alone	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter_1_6.cpp	1055

void to_lower(string&);

//auto change_val(int, vector<int>);//self:函数返回值类型竟然用 auto也可以呀?

////6.18

//bool compare_m(const matrix&, const matrix&);
//vector<int>::iterator change_val(int, vector<int>::iterator);

int f1_654(int a, int b);
int f2_654(int aa, int bb);

void f6_();

//void f_test();

#endif // !CHAPTER_1_6_H
