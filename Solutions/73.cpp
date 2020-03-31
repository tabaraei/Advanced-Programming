#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//tedade karmandha
int n;
//tarikh
int tarikh;

struct date
{
	int day;
	int month;
	int year;
};

struct employee
{
	string name;
	string degree;
	date empdate;
	long id;
	float basesalary;
	float salary;
};

//liste karmand ha tahie mishavad
employee *list;

//Functions:
float Career(int i);
float Salary(string d, int k);
void details(int i);
void Search1();
void Search2();
void Show_date();
void Delete();

//Main program:
void main()
{
	system("color 3b");

	//Sakhte araye pooya
	cout << "chand karmand mikhahid vared konid?" << endl;
	cin >> n;
	list = new employee[n];

	system("cls");

	//Yaftane tarikh

	cout << "Please insert current Year = ";
	cin >> tarikh;

	system("cls");

	for (int j = 0; true;)
	{
		cout << "Welcome! please enter your option (enter number):" << endl << endl;
		cout << "1) Insert an employee" << endl;
		cout << "2) Search an employee" << endl;
		cout << "3) Delete an employee" << endl;
		cout << "4) Show date" << endl;
		cout << "5) Exit" << endl;

		switch (_getch())
		{
		case '1':
			system("cls");
			if (j >= n)
			{
				cout << "Error! You can't add more employees!" << endl;
				cout << "Press any key to go back..." << endl;
				_getch();
			}
			else
			{
				details(j);
				j++;
			}

			system("cls");

			break;
		case '2':
			system("cls");
			cout << "1) Search with name" << endl << "2) Search with ID" << endl;
			switch (_getch())
			{
			case '1':
				system("cls");
				Search1();
				system("cls");
				break;
			case '2':
				system("cls");
				Search2();
				system("cls");
				break;

			default:
				break;
			}
			break;
		case '3':
			system("cls");
			Delete();
			j--;
			break;
		case '4':
			system("cls");
			Show_date();
			system("cls");
			break;
		case '5':
			system("cls");
			delete[] list;
			cout << "Goodbye, Have fun! ;)" << endl;
			Sleep(2000);
			exit(0);
		default:
			break;
		}
	}
}

//Mohasebeye Sabeghe kari
float Career(int i)
{
	int date = tarikh - list[i].empdate.year;

	if (date >= 5 && date < 10)
		return (list[i].basesalary)*(0.1);

	if (date >= 10 && date<15)
		return (list[i].basesalary)*(0.2);

	if (date >= 15 && date<20)
		return (list[i].basesalary)*(0.3);

	if (date >= 20)
		return (list[i].basesalary)*(0.4);
}

//Mohasebeye daramad
float Salary(string d, int k)
{
	/*
	"diplom"
	"lisance"
	"foge lisance"
	"doctora"
	*/

	//az harfe sevome reshte baraye shenasaii estefade shod!
	char check;

	if (d == "diplom")
		check = '1';
	if (d == "lisance")
		check = '2';
	if (d == "foge lisance")
		check = '3';
	if (d == "doctora")
		check = '4';

	switch (check)
	{
	case '1':
		return list[k].basesalary + ((list[k].basesalary)*(0.2));
		break;
	case '2':
		return list[k].basesalary + ((list[k].basesalary)*(0.3));
		break;
	case '3':
		return list[k].basesalary + ((list[k].basesalary)*(0.4));
		break;
	case '4':
		return list[k].basesalary + ((list[k].basesalary)*(0.6));
		break;
	default:
		break;
	}
}

//Vorude etelaat
void details(int i)
{
	//Name vared shode bayad bedune space bashad!
	cout << "Name:";
	getline(cin, list[i].name);
	getline(cin, list[i].name);
	cout << endl;

	cout << "ID:";
	cin >> list[i].id;
	cout << endl;

	cout << "Base Salary:";
	cin >> list[i].basesalary;
	cout << endl;

	cout << "Degree: (diplom, lisance, foge lisance, doctora)" << endl;
	getline(cin, list[i].degree);
	getline(cin, list[i].degree);
	cout << endl;

	//calculating salary!
	list[i].salary = Salary(list[i].degree, i);

	cout << "Employee Date:" << endl;
	cout << "Day:";
	cin >> list[i].empdate.day;
	cout << "Month:";
	cin >> list[i].empdate.month;
	cout << "Year:";
	cin >> list[i].empdate.year;

	//calculating career!
	list[i].salary += Career(i);
}

//Jostojuye karmand ba esm
void Search1()
{
	cout << "Name karmande morede nazar ra be tore kamel vared konid!" << endl;
	string c;
	getline(cin, c);
	getline(cin, c);

	system("cls");

	for (int i = 0; i < n; i++)
	{
		if (list[i].name == c)
		{
			cout << "Esm:";
			cout << list[i].name << endl;

			cout << "Shomare karmandi:";
			cout << list[i].id << endl;

			cout << "hoghugh paye:";
			cout << list[i].basesalary << endl;

			cout << "hoghugh:";
			cout << list[i].salary << endl;

			cout << "Madrak:";
			cout << list[i].degree << endl;

			cout << "Tarikhe estekhdam:";
			cout << list[i].empdate.day << "/" << list[i].empdate.month << "/" << list[i].empdate.year << endl;

			cout << endl << "Press any key to continue..." << endl;

			_getch();
		}
	}
}

//Jostojuye karmand ba id
void Search2()
{
	cout << "ID karmande morede nazar ra be tore kamel vared konid!" << endl;
	long id;
	cin >> id;

	system("cls");

	for (int i = 0; i < n; i++)
	{
		if (list[i].id == id)
		{
			cout << "Esm:";
			cout << list[i].name << endl;

			cout << "Shomare karmandi:";
			cout << list[i].id << endl;

			cout << "hoghugh paye:";
			cout << list[i].basesalary << endl;

			cout << "hoghugh:";
			cout << list[i].salary << endl;

			cout << "Madrak:";
			cout << list[i].degree << endl;

			cout << "Tarikhe estekhdam:";
			cout << list[i].empdate.day << "/" << list[i].empdate.month << "/" << list[i].empdate.year << endl;

			cout << endl << "Press any key to continue..." << endl;

			_getch();
		}
	}
}

//neshan dadane tarikhe estekhdame karmand
void Show_date()
{
	cout << "ID karmande morede nazar ra be tore kamel vared konid!" << endl;
	long id;
	cin >> id;

	system("cls");

	for (int i = 0; i < n; i++)
	{
		if (list[i].id == id)
		{
			cout << "Tarikhe estekhdam:" << endl;
			cout << list[i].empdate.day << "/" << list[i].empdate.month << "/" << list[i].empdate.year << endl;

			cout << endl << "Press any key to continue..." << endl;

			_getch();
		}
	}
}

//raha sazie araye ba moshkel movajeh shod!
void Delete()
{
	/*
	cout << "ID karmande morede nazar ra be tore kamel vared konid!" << endl;
	long id;
	cin >> id;

	//copy az list
	employee *copy;
	copy = new employee[n - 1];

	//peyda kardane khaneye morede nazar!
	int check;
	for (int i = 0; i < n; i++)
	{
		if (list[i].id == id)
		{
			check = i;
		}
	}

	for (int i = check; i < n - 1; i++)
	{
		list[i + 1] = list[i];
	}

	cout << list[check].name << " hazf shod!" << endl;
	getch();
	*/
}