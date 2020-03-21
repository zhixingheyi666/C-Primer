#pragma once
#ifndef PERSON_I_H
#define PERSON_I_H

#include <string>
#include<iostream>

////学到了，当你需要用某个<标识符>，比如  person_i  类标识符，但是还没有详细定义它的时候，可以先做一个声明，然后就可用了

class person_i
{
	////友元
	friend std::istream& read_86(std::istream& cin_i, person_i& person_a);

	//构造函数
public:
	person_i() = default;
	person_i(const std::string& name ):name(name) {};
	person_i(const std::string& name, const std::string& address) :name(name), address(address) {};
	explicit person_i(std::istream& cin_i) { read_86(cin_i, *this); }
	//person_i(std::istream& cin_i) {  cin_i >> this->name >> this->address; }


private:
	//数据成员
	std::string name;
	std::string address;

	//std::string get_name() const { return name; }
	//std::string get_address() const { return address; }

	////以下3条为github参考答案注释
	//  1. add public access modifier for the function members
	//  2. use trailing return type 
	//  3. change return type from string to string const&, for better performance.

public:
	auto get_name() const-> std::string const& { return name; }
	auto get_adr() const-> const std::string& { return address; }

};

////std::istream& read_86(std::istream& cin_i, person_i  person_a) {//self@@:犯了一个大错误，没写引用
std::istream& read_86(std::istream& cin_i, person_i & person_a) {
	cin_i >> person_a.name >> person_a.address;
	return cin_i;
}



std::ostream& print_76(std::ostream& cout_i, const person_i &person_a) {
	cout_i <<"Name: "<< person_a.get_name() <<"\tAddress: "<< person_a.get_adr();
	return cout_i;
}
//void f_test();
#endif // !PERSON_I_H

