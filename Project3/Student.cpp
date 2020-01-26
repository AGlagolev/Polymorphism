#include"Student.h"
////////////////////////////////////////  GET&SET  //////////////////////////////////////
const std::string  Student::get_group() { return this->group;}
const std::string Student::get_speciality() { return specialty;}
void Student::set_group(const std::string& group) { this->group = group; }
void Student::set_speciality(const std::string speciality) { this->specialty = speciality; }
////////////////////////////////////////  Metods  //////////////////////////////////////
void Student::print()
{
	std::cout << "СТУДЕНТ";
	Graduate::print();
	std::cout << "\nГруппа - " << get_group() << "\nСпециальность - " << get_speciality() << "\n\n";
}
////////////////////////////////////////  Constructors  //////////////////////////////////////
Student::Student
(
	const std::string last_name, const std::string first_name, unsigned int age,
	const std::string group,
	const std::string speciality

)
	:Graduate(last_name, first_name, age)
{
	set_group(group);
	set_speciality(speciality);
	std::cout << "S-Constructor" << this << std::endl;
}
////////////////////////////////////////  Destructor  //////////////////////////////////////
Student::~Student() // ~+TAB создает деструктор
{
	std::cout << "S-Destructor " << this << std::endl;
}