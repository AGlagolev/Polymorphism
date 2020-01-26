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
	SetConsoleCP(1251); // Для вывода кирилицы из массива + шрифт Lucida console, Console 
	SetConsoleOutputCP(1251);

	Teacher T1("Тверитнев","Виктор",60,"физо",90),T2("Семенов", "Петр", 55, "физо", 80);
	Student S1("Иванов", "Фарид", 20, "Г12", "гимнастика"), S2("Джибаладуев", "Ваня", 19, "М12", "метание ядра");
	Graduate* Group[4] = {&T1, &T2, &S1, &S2};
	W_line();
	for (int i = 0; i < sizeof(Group) / sizeof(Graduate*); i++) // количество элементов массива
	{
		Group[i]->print();		
		W_line();
	}
/*************************************************************************************************/
	//ПРИМЕР ДЛЯ СЕБЯ
	//Vehicle* Garage[] = { // Динамический массив указателей
	//	new Car(),
	//	new Board(),
	//	new Airplain()
	//};
	//for (int i = 0; i < sizeof(Garage) / sizeof(Vehicle*); i++) // количество элементов массива
	//{
	//	Garage[i]->move();
	//	std::cout << std::endl;
	//}
/*************************************************************************************************/
}
#endif // GRADUAT