#include <iostream>
#include "Tasks.cpp"
using namespace std;

static void SelectTask(bool a ,int Number)
{
	
	do
	{
		cout << "������� ����� �������\n";
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
			cout << "������ ������� ���\n";
			break;
		}
		cout << "\n������ ����������(�� = 0, ��� = 1)\n";
		cin >> a;
	} while (a != 1);
}