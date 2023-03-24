#include <iostream>
#include "Tasks.cpp"
using namespace std;

static void SelectTask(bool a ,int Number)
{
	
	do
	{
		cout << "Введите номер задания\n";
		cin >> Number;
		switch (Number)
		{
		case 1:
			Nomber1();break;
		case 2:
			Number2();break;
		case 3:
			Number3();break;
		case 4:
			Number4();break;
		case 5:
			Number5();break;
		case 6:
			Number6();break;
		case 7:
			Number7();break;
		default:
			cout << "Такого задания нет\n";
			break;
		}
		cout << "\nхотите прододжить(да = 0, нет = 1)\n";
		cin >> a;
	} while (a != 1);
}