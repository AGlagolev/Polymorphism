#include"Auxiliary.h"
#include"Myfunc.h"
#include"Graduate.h"
#include"Student.h"
#include"Teacher.h"

#define GRADUAT

#ifdef GRADUAT

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