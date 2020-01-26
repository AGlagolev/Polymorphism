#include"Graduate.h"
////////////////////////////////////////  GET&SET  //////////////////////////////////////
const std::string& Graduate::get_last_name() const {return this->last_name;}
const std::string& Graduate::get_first_name() const {return this->first_name;}
unsigned int Graduate::get_age() const { return this->age;}
void Graduate::set_last_name(const std::string& last_name) {this->last_name = last_name;}
void Graduate::set_first_name(const std::string& first_name) {this->first_name = first_name;}
void Graduate::set_age(unsigned int age) { this->age = age;}
////////////////////////////////////////  Metods  //////////////////////////////////////
void Graduate::print()
{
	std::cout << "\n" << get_first_name() << " " << get_last_name() << " " << get_age() << " лет ";
}
////////////////////////////////////////  Constructors  //////////////////////////////////////
Graduate::Graduate()
{
	this->first_name = "";
	this->last_name = "";
	this->age = 0;
	std::cout << "G-DefaultConstructor " << this << std::endl;
}
Graduate::Graduate(const std::string& last_name, const std::string first_name, const unsigned int age)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->age = age;
	std::cout << "G-Constructor " << this << std::endl;
}
////////////////////////////////////////  Destructors  //////////////////////////////////////
Graduate::~Graduate() // ~+TAB создает деструктор
{
	std::cout << "G-Destructor " << this << std::endl;
}