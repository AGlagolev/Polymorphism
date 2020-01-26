#include <iostream>
#include"Auxiliary.h"
#include"Myfunc.h"

#define GRADUAT

#ifdef GRADUAT
class Graduate
{
	std::string last_name;
	std::string first_name;
	unsigned int age;

public:
	////////////////////////////////////////  GET&SET  //////////////////////////////////////
	const std::string& get_last_name() const
	{
		return this->last_name;
	}

	const std::string& get_first_name() const
	{
		return this->first_name;
	}

	unsigned int get_age() const
	{
		return this->age;
	}

	void set_last_name(const std::string& last_name)
	{
		this->last_name = last_name;
	}

	void set_first_name(const std::string& first_name)
	{
		this->first_name = first_name;
	}

	void set_age(unsigned int age)
	{
		this->age = age;
	}
	////////////////////////////////////////  Metods  //////////////////////////////////////
	 virtual void print() // ����������� ����� 
	{
		std::cout << "\n" << get_first_name() << " " << get_last_name() << " " << get_age() << " ��� ";
	}

	////////////////////////////////////////  Constructors  //////////////////////////////////////
	Graduate()
	{
		this->first_name = "";
		this->last_name = "";
		this->age = 0;
		std::cout << "G-DefaultConstructor " << this << std::endl;
	}

	Graduate(const std::string& last_name, const std::string first_name, const unsigned int age)
	{
		this->first_name = first_name;
		this->last_name = last_name;
		this->age = age;
		std::cout << "G-Constructor " << this << std::endl;
	}

	////////////////////////////////////////  Destructors  //////////////////////////////////////
	~Graduate() // ~+TAB ������� ����������
	{
		std::cout << "G-Destructor " << this << std::endl;
	}

};
/*************************************************************************************************/
class Student :public Graduate
{
	std::string group;
	std::string specialty;
	
public:
	////////////////////////////////////////  GET&SET  //////////////////////////////////////

	//// GETS
	const std::string  get_group() { return this->group; }
	const std::string get_speciality() { return specialty; }	

	//// SETS
	void set_group(const std::string& group) { this->group = group; }
	void set_speciality(const std::string speciality) { this->specialty = speciality; }
	
	////////////////////////////////////////  Metods  //////////////////////////////////////
	void print()
	{   
		std::cout << "�������";
		Graduate::print();
		std::cout << "\n������ - " << get_group() << "\n������������� - " << get_speciality() << "\n\n";
	}
	////////////////////////////////////////  Constructors  //////////////////////////////////////


	Student
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
	~Student() // ~+TAB ������� ����������
	{
		std::cout << "S-Destructor " << this << std::endl;
	}
};
/*************************************************************************************************/
class Teacher :public Graduate
{
	std::string speciality;	
	unsigned int experience;
public:
	////////////////////////////////////////  GET&SET  //////////////////////////////////////
	const std::string& get_speciality()	{return speciality;}	
	unsigned int get_experiance() {	return experience;}

	void set_speciality(const std::string& speciality)	{this->speciality = speciality;	}	
	void set_experiance(unsigned int exper)	{this->experience = exper;}

	////////////////////////////////////////  Metods  //////////////////////////////////////
	void print()
	{
		std::cout << "�������������";
		Graduate::print();
		std::cout << "\n������������� - " << get_speciality() << "\n���� - " << get_experiance() << "\n\n";
	}
	////////////////////////////////////////  Constructors  //////////////////////////////////////
	Teacher
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
	~Teacher()
	{
		std::cout << "T-Destructor" << this << std::endl;
	}





	////////////////////////////////////////  Destructors  //////////////////////////////////////
};
/*************************************************************************************************/
void main()
{
	setlocale(LC_ALL, "Russian");
	std::system("color 0A");
	Font(25);
	SetConsoleCP(1251); // ��� ������ �������� �� ������� + ����� Lucida console, Console 
	SetConsoleOutputCP(1251);

	Teacher T1("���������","������",60,"����",90),T2("�������", "����", 55, "����", 80);
	Student S1("������", "�����", 20, "�12", "����������"), S2("�����������", "����", 19, "�12", "������� ����");
	Graduate* Group[4] = {&T1, &T2, &S1, &S2};
	W_line();
	for (int i = 0; i < sizeof(Group) / sizeof(Graduate*); i++) // ���������� ��������� �������
	{
		Group[i]->print();		
		W_line();
	}
/*************************************************************************************************/
	//������ ��� ����
	//Vehicle* Garage[] = { // ������������ ������ ����������
	//	new Car(),
	//	new Board(),
	//	new Airplain()
	//};
	//for (int i = 0; i < sizeof(Garage) / sizeof(Vehicle*); i++) // ���������� ��������� �������
	//{
	//	Garage[i]->move();
	//	std::cout << std::endl;
	//}
/*************************************************************************************************/

}
#endif // GRADUAT