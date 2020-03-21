// C++Primer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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



////自编头文件

#include "Chapter_1_6.h"
#include "Chapter_7.h"
#include "glance_of_II_III_IV.h"
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

////分离式编译，重复定义测验

////Error	LNK1169	one or more multiply defined symbols found	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\Debug\C++Primer.exe	1
////Error	LNK2005	"void __cdecl f6_(void)" (? f6_@@YAXXZ) already defined in C++Primer.obj	C++Primer	D : \VisualStudioProject\source\repos\C++Primer\chapter6.obj	1
//void f6_() {
//	cout << "i'm function f6_() in the main file.\n";
//}

//-------------------self.main--------------------------------------------------------------------------------------------------------------------------------
//const	char c00[] = "you kan dedicate a portion", c01[]{" of that feild!"};

//void f_test(){}

int main()
{
	////6.25

	////string类型复习
	//string s625t = "come up ", s625tt = "with", tts625;
	//char n = '\n';
	//tts625 = s625t + n;
	//tts625 += s625tt + n;
	//tts625 += n;
	//cout << tts625;
	////
	//string s1_s625 = "";
	//for (size_t i = 1; i != __argc; ++i) {
	//	cout << __argv[i] << endl;
	//	//while (*__argv[i]) {
	//	//	s1_s625 += *__argv[i];
	//	//	__argv[i]++;
	//	//}
	//	//
	//	////借鉴的写法
	//	s1_s625 += string(__argv[i]) + " ";
	//}
	//cout << s1_s625;

	//luogu1424_2();
	//luogu1980();


	//glance_234_();
	glance_1037();
	


	//f7_();
	//f6_();
	//f5_();
	//f4_();
	//f3_();
	//constexpr size_t new_size = strlen(c00) + strlen(c01) + 1;//虽然完全按照答案写，但是strlen处仍然报错,error	c2131	expression did not evaluate to a constant
	//int f = fact(10);
	//std::cout << fact(10);
	//std::cout << aplusb();
	//f1_();
	//marin();
	//f2_decltype();
	//f2_();
	//luogu1909();
	//luogu1085();
	//cout << luogu1089();

}



// run program: ctrl + f5 or debug > start without debugging menu
// debug program: f5 or debug > start debugging menu

// tips for getting started: 
//   1. use the solution explorer window to add/manage files
//   2. use the team explorer window to connect to source control
//   3. use the output window to see build output and other messages
//   4. use the error list window to view errors
//   5. go to project > add new item to create new code files, or project > add existing item to add existing code files to the project
//   6. in the future, to open this project again, go to file > open > project and select the .sln file
