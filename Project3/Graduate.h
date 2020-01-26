#pragma once
#include<iostream>
#include<string>

class Graduate
{
	std::string last_name;
	std::string first_name;
	unsigned int age;

public:
	////////////////////////////////////////  GET&SET  //////////////////////////////////////
	const std::string& get_last_name() const;
	const std::string& get_first_name() const;
	unsigned int get_age() const;
	void set_last_name(const std::string& last_name);
	void set_first_name(const std::string& first_name);
	void set_age(unsigned int age);
	////////////////////////////////////////  Metods  //////////////////////////////////////
	virtual void print();
	////////////////////////////////////////  Constructors  //////////////////////////////////////
	Graduate();
	Graduate(const std::string& last_name, const std::string first_name, const unsigned int age);
	////////////////////////////////////////  Destructors  //////////////////////////////////////
	~Graduate(); // ~+TAB создает деструктор	
};
