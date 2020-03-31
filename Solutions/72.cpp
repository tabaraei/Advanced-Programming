#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#define max 100
using namespace std;

struct student
{
	string name;
	long id;
	double avg;
};

int main()
{
	system("color 3b");
	cout << "Enter name, id and average of student!" << endl;

	student array[max];
	bool check = true;
	int counter = 0;

	//vorude etelaat!
	for (int i = 0; check; i++)
	{
		counter++;

		cout << "Student " << i+1 << ":" << endl;

		//Name vared shode bayad bedune space bashad!
		cout << "Name:";
		cin >> array[i].name;
		
		cout << "ID:";
		cin >> array[i].id;
		
		cout << "Average:";
		cin >> array[i].avg;

		cout << endl;
		cout << "Do you want to add another student? (Press y or n)" << endl;
		
		switch (_getch())
		{
		case 'y':
			break;
		case'n':
			check = false;
			system("cls");
			break;
		default:
			system("cls");
			cout << "Error; Wrong character!" << endl;
			Sleep(1500);
			exit(0);
			break;
		}
	}

	//Chape daneshjuyane mashrut shode:
	int failed = 0;
	cout << "Failed students:" << endl;
	for (int i = 0; i < counter; i++)
	{	
		if (array[i].avg < 12)
		{
			cout << array[i].name << " - " << array[i].id << endl;
			failed++;
		}
	}
	if (failed == 0)
		cout << "None of students failed!" << endl;
	
	//jologiri az baste shodane barname!
	_getch();
}