#pragma once
//#include<iostream>
//#include<string>
#include"Graduate.h"

class Teacher :public Graduate
{
	std::string speciality;
	unsigned int experience;
public:
	////////////////////////////////////////  GET&SET  //////////////////////////////////////
	const std::string& get_speciality();
	unsigned int get_experiance();
	void set_speciality(const std::string& speciality);
	void set_experiance(unsigned int exper);
	////////////////////////////////////////  Metods  //////////////////////////////////////
	void print();
	////////////////////////////////////////  Constructors  //////////////////////////////////////
	Teacher
	(
		// Parents class Parameters
		const std::string last_name,
		const std::string first_name,
		unsigned int age,
		const std::string speciality,
		unsigned int experiance
	);
	~Teacher();
	////////////////////////////////////////  Destructors  //////////////////////////////////////
};

