
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");

	int a = 0, dlina, selection, select2;
	char tilda = '~', palka = '|';
	

	cout << "Выберите символ: " << endl;
	cout << "1 - ~ \n2 - |" << endl << endl;
	cin >> selection;

	cout << "\nВыберите линию символов:" << endl;
	cout << "1 - Вертикальная\n2 - Горизонтальная" << endl << endl;
	cin >> select2;

	cout << "\nНапишите длину символов:" << endl;
	cin >> dlina;

	switch (selection)
	{
	case 1:
	{
		cout << "\nВыбран символ: " << tilda << endl << endl;
		switch (select2)
		{
		case 1:
		{
			cout << "Линия символов: Вертикальная" << endl;
			while (a < dlina)
			{
				cout << tilda << endl;
				a++;
				
			}
			return 0;
		}
		case 2:
		{
			cout << "Линия символов: Горизонтальная" << endl;
			while (a < dlina)
			{
				cout << tilda;
				a++;
				
			}
			return 0;
		}


		

		}
	
	}
	case 2:
	{
		cout << "\nВыбран символ: " << palka << endl;
		switch (select2)
		{
		case 1:
		{
			cout << "Линия символов: Вертикальная" << endl;
			while (a < dlina)
			{
				cout << palka << endl;
				a++;
			}
			
		}
		case 2:
		{
			cout << "Линия символов: Горизонтальная" << endl;
			while (a < dlina)
			{
				cout << palka;
				a++;
			}
			
		}


		}

	}


	}
}