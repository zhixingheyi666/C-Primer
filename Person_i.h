#pragma once
#ifndef PERSON_I_H
#define PERSON_I_H

#include <string>
#include<iostream>

////ѧ���ˣ�������Ҫ��ĳ��<��ʶ��>������  person_i  ���ʶ�������ǻ�û����ϸ��������ʱ�򣬿�������һ��������Ȼ��Ϳ�����

class person_i
{
	////��Ԫ
	friend std::istream& read_86(std::istream& cin_i, person_i& person_a);

	//���캯��
public:
	person_i() = default;
	person_i(const std::string& name ):name(name) {};
	person_i(const std::string& name, const std::string& address) :name(name), address(address) {};
	explicit person_i(std::istream& cin_i) { read_86(cin_i, *this); }
	//person_i(std::istream& cin_i) {  cin_i >> this->name >> this->address; }


private:
	//���ݳ�Ա
	std::string name;
	std::string address;

	//std::string get_name() const { return name; }
	//std::string get_address() const { return address; }

	////����3��Ϊgithub�ο���ע��
	//  1. add public access modifier for the function members
	//  2. use trailing return type 
	//  3. change return type from string to string const&, for better performance.

public:
	auto get_name() const-> std::string const& { return name; }
	auto get_adr() const-> const std::string& { return address; }

};

////std::istream& read_86(std::istream& cin_i, person_i  person_a) {//self@@:����һ�������ûд����
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

