#include"Teacher.h"

//Teacher Defenition
////////////////////////////////////////  GET&SET  //////////////////////////////////////
const std::string& Teacher::get_speciality() { return speciality; }
unsigned int  Teacher::get_experiance() { return experience; }

void  Teacher::set_speciality(const std::string& speciality) { this->speciality = speciality; }
void  Teacher::set_experiance(unsigned int exper) { this->experience = exper; }

////////////////////////////////////////  Metods  //////////////////////////////////////
void  Teacher::print()
{
	std::cout << "ÏÐÅÏÎÄÎÂÀÒÅËÜ";
	Graduate::print();
	std::cout << "\nÑïåöèàëüíîñòü - " << get_speciality() << "\nÎïûò - " << get_experiance() << "\n\n";
}
////////////////////////////////////////  Constructors  //////////////////////////////////////
Teacher::Teacher
(
	// Parents class Parameters
	const std::string last_name, const std::string first_name, unsigned int age,

	const std::string speciality,
	unsigned int experiance
)
	: Graduate(last_name, first_name, age)
{

	set_speciality(speciality);
	set_experiance(experiance);
	std::cout << "T-Constructor" << this << std::endl;
}
Teacher::~Teacher()
{
	std::cout << "T-Destructor" << this << std::endl;
}
