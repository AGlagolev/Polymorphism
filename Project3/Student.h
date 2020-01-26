#pragma once
//#include<iostream>
//#include<string>
#include"Graduate.h"
class Student :public Graduate
{
	std::string group;
	std::string specialty;

public:
	////////////////////////////////////////  GET&SET  //////////////////////////////////////

	//// GETS
	const std::string  get_group();
	const std::string get_speciality();

	//// SETS
	void set_group(const std::string& group);
	void set_speciality(const std::string speciality);

	////////////////////////////////////////  Metods  //////////////////////////////////////
	void print();
	////////////////////////////////////////  Constructors  //////////////////////////////////////
	Student(
		const std::string last_name, const std::string first_name, unsigned int age,
		const std::string group,
		const std::string speciality
	);
	////////////////////////////////////////  Destructor  //////////////////////////////////////
	~Student();
};
