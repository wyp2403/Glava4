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
	cout << "������� ���������� ������ � ������ �����\n";
	cin >> p1.X >> p1.Y >> p2.X >> p2.Y;
	p3.X = p1.X + p2.X;
	p3.Y = p1.Y + p2.Y;
	cout << "p1 + p2 ����� " << p3.X << " " << p3.Y << endl;
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
	cout << "\n������� ������ �����(��� ������, ����� �������, ����� ��������)\n";
	cin >> ph2.CodeTown >> ph2.NumberStashion >> ph2.NumberAbonent;
	cout << endl << "(" << ph1.CodeTown << ") " << ph1.NumberStashion << "-" << ph1.NumberAbonent << endl;
	cout << "(" << ph2.CodeTown << ") " << ph2.NumberStashion << "-" << ph2.NumberAbonent << endl;
}

static void Number3()
/*�������� ��������� � ������ Volume, ���������� ��� ���� ���� Distance
�� ������� englstrc, ��� �������� ���� ��������� ���������. ���������� ���������� ���� Volume, ��������������� ��, ��������� �����, ���������� ����������,
� �������� ��������� �� �����. ��� �������� ������
���������� ������ �� �������� ���� Distance � �������� ���� float, ������
��������������� ����� � ����� � �������� � ��������� ����������. ����� ��� ���������� ������ ������� ����������� ��� ���������� ������������ ����������*/
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
/*�������� ��������� � ������ employee, ���������� ��� ����: ����� ���������� ���� int � �������� ��� ������� � �������� ���� float.
	��������� � ���������� ������ � ���� �����������, ��������� �� � ���� ����������� ���������� ���� employee � �������� ���������� � ������ ��
����������� �� �����*/
{
	struct employee
	{
		int number;
		float cash;
	};

	int a = 0;
	employee a1, a2, a3;
	setlocale(LC_ALL, "rus");
	cout << "������� ����� ����������\n";
	cin >> a;
	switch (a)
	{
		case 1:
			cout << "������� ��\n";
			cin >> a1.cash;
			cout << "����� �����������" << a << " ��� �� = " << a1.cash;break;
		case 2:
			cout << "������� ��\n";
			cin >> a2.cash;
			cout << "����� �����������" << a << " ��� �� = " << a2.cash;break;
		case 3:
			cout << "������� ��\n";
			cin >> a3.cash;
			cout << "����� ����������� " << a << " ��� �� = " << a3.cash;break;
	}
}


static void Number5()
/*�������� ��������� ���� date, ���������� ��� ���� ���� int: �����,
���� � ���. ��������� ������������ ������ ����, ����� � ��� � �������
31/12/2002, ��������� ��������� �������� � ����������� ����������, � ����� ��������� ������ �� ���� ���������� � �������� �� �� ����� � ��� ��
�������, � ����� ��� ���������.*/
{
	setlocale(LC_ALL, "rus");
	struct date
	{
		int month;
		int day;
		int year;
	};
	date d, m, y;

	cout << "������� ����, ����� � ���\n";
	cin >> d.day >> m.month >> y.year;
	string Date = to_string(d.day) + "/" + to_string(m.month) + "/" + to_string(y.year);
	
}


static void Number6()
/*��� �� ��������, ����������� �������� �����/������ C++ ������ �������� ������������� ����� ������ ������� �� ���������� �������������
� ���� ����� �����. ��� ���� ����� ���������� ��� �����������, �� ������ ������������ ����������� switch,
� ������� ������� ��������������� ������������ ����� ��������� ���������� �������������� ���� � ��
���������� ��������������. �����, ��������, � ��������� ��������� ������������� ��� ������ etype, ���������� ��������� ����������:
enum etype { laborer, secretary, manager, accountant, executive, researcher };
�������� ���������, ������� ������� �� ������ ����� ���������, ��������� �������������, ���������� ��������������� �������� ����������,
�������� ��� �������� � ���������� ���� etype, � ����� ������� ���������
�������� ���������, ������ ����� ������� ���� ������������. �������������� ��������� � ������������� ����� ��������� ��������� �������:
������� ������ ����� ���������
(laborer, secretary, manager, accountantexecutive, researcher); a
������ �������� ���������: accountant
��������, ��� ����������� ��� ��������� switch: ���� � ��� ����� ��������, ������ � ��� ������.*/
{
	setlocale(LC_ALL, "rus");
	enum etype { laborer, secretary, manager, accountan, textecutive, researcher };
	char ch = 'a';
	etype ac;
	cout << " ������� ������ ����� ���������\n";
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
	cout << "������ �������� ���������\n";
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
