#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

static void Nomber1() 
{
	struct point
	{
		int X;
		int Y;
	};
	point p1, p2, p3;
	cout << "Введите координаты первой и второй точки\n";
	cin >> p1.X >> p1.Y >> p2.X >> p2.Y;
	p3.X = p1.X + p2.X;
	p3.Y = p1.Y + p2.Y;
	cout << "p1 + p2 равны " << p3.X << " " << p3.Y << endl;
}


static void Number2()
{
	struct phone
	{
		int CodeTown;
		int NumberStashion;
		int NumberAbonent;
	};
	phone ph1{ 212,767,8900 };
	phone ph2;
	cout << "\nВведите полный номер(код города, номер станции, номер абонента)\n";
	cin >> ph2.CodeTown >> ph2.NumberStashion >> ph2.NumberAbonent;
	cout << endl << "(" << ph1.CodeTown << ") " << ph1.NumberStashion << "-" << ph1.NumberAbonent << endl;
	cout << "(" << ph2.CodeTown << ") " << ph2.NumberStashion << "-" << ph2.NumberAbonent << endl;
}

static void Number3()
/*Создайте структуру с именем Volume, содержащую три поля типа Distance
из примера englstrc, для хранения трех измерений помещения. Определите переменную типа Volume, инициализируйте ее, вычислите объем, занимаемый помещением,
и выведите результат на экран. Для подсчета объема
переведите каждое из значений типа Distance в значение типа float, равное
соответствующей длине в футах и хранимое в отдельной переменной. Затем для вычисления объема следует перемножить три полученные вещественные переменные*/
{
	struct Distance
	{
		int feet;
		float inches;
	};
	struct Volume
	{
		Distance lenght;
		Distance width;
		Distance height;
	};
	float l, w, h;
	Volume room = { { 16, 3.5 }, { 12, 6.25 }, { 8, 1.75 } };
	l = (room.lenght.feet + room.lenght.inches) / 12;
	w = (room.width.feet + room.width.inches) / 12;
	h = (room.height.feet + room.height.inches) / 12;
	cout << l * w * h;
}

static void Number4()
/*Создайте структуру с именем employee, содержащую два поля: номер сотрудника типа int и величину его пособия в долларах типа float.
	Запросите с клавиатуры данные о трех сотрудниках, сохраните их в трех структурных переменных типа employee и выведите информацию о каждом из
сотрудников на экран*/
{
	struct employee
	{
		int number;
		float cash;
	};

	int a = 0;
	employee a1, a2, a3;
	setlocale(LC_ALL, "rus");
	cout << "Введите номер сотрудника\n";
	cin >> a;
	switch (a)
	{
		case 1:
			cout << "Введите зп\n";
			cin >> a1.cash;
			cout << "Номер сотпрудника" << a << " Его зп = " << a1.cash;break;
		case 2:
			cout << "Введите зп\n";
			cin >> a2.cash;
			cout << "Номер сотпрудника" << a << " Его зп = " << a2.cash;break;
		case 3:
			cout << "Введите зп\n";
			cin >> a3.cash;
			cout << "Номер сотпрудника " << a << " Его зп = " << a3.cash;break;
	}
}


static void Number5()
/*Создайте структуру типа date, содержащую три поля типа int: месяц,
день и год. Попросите пользователя ввести день, месяц и год в формате
31/12/2002, сохраните введенное значение в структурной переменной, а затем извлеките данные из этой переменной и выведите их на экран в том же
формате, в каком они вводились.*/
{
	setlocale(LC_ALL, "rus");
	struct date
	{
		int month;
		int day;
		int year;
	};
	date d, m, y;

	cout << "Введите день, месяц и год\n";
	cin >> d.day >> m.month >> y.year;
	string Date = to_string(d.day) + "/" + to_string(m.month) + "/" + to_string(y.year);
	
}


static void Number6()
/*Как мы говорили, стандартные средства ввода/вывода C++ вместо значений перечисляемых типов данных выводят их внутреннее представление
в виде целых чисел. Для того чтобы преодолеть это ограничение, вы можете использовать конструкцию switch,
с помощью которой устанавливается соответствие между значением переменной перечисляемого типа и ее
внутренним представлением. Пусть, например, в программе определен перечисляемый тип данных etype, отражающий должность сотрудника:
enum etype { laborer, secretary, manager, accountant, executive, researcher };
Напишите программу, которая сначала по первой букве должности, введенной пользователем, определяет соответствующее значение переменной,
помещает это значение в переменную типа etype, а затем выводит полностью
название должности, первую букву которой ввел пользователь. Взаимодействие программы с пользователем может выглядеть следующим образом:
Введите первую букву должности
(laborer, secretary, manager, accountantexecutive, researcher); a
полное название должности: accountant
Возможно, вам понадобится два ветвления switch: одно — для ввода значения, другое — для вывода.*/
{
	setlocale(LC_ALL, "rus");
	enum etype { laborer, secretary, manager, accountan, textecutive, researcher };
	char ch = 'a';
	etype ac;
	cout << " Введите первую букву должности\n";
	cin >> ch;
	switch (ch)
	{
		case 'l':
			ac = laborer;break;
		case 's':
			ac = secretary;break;
		case 'm':
			ac = manager;break;
		case 'a':
			ac = accountan;break;
		case 't':
			ac = textecutive;break;
		case 'r':
			ac = researcher;break;
			 
	}
	cout << "Полное название должности\n";
	switch (ac)
	{
		case 0:
			cout << "laborer";break;
		case 1:
			cout << "secretary";break;
		case 2:
			cout << "manager";break;
		case 3:
			cout << "accountan";break;
		case 4:
			cout << "textecutive";break;
		case 5:
			cout << "researcher";break;
	}
}



static void Number7()
{
	
}
