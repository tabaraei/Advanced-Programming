#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

//local variable i
int i = 0;

class student
{
private:
	string name;
	long id;
	double avg;

	void _details(int i)
	{
		cout << "Name:";
		getline(cin, name);
		//visual bug!
		if(i!=0)
			getline(cin, name);
		
		cout << "ID:";
		cin >> id;
		
		cout << "Average:";
		cin >> avg;
		return;
	}

	void _print()
	{
		cout << "Name:" << name << endl;
		cout << "ID:" << id << endl;
		cout << "Average:" << avg << endl;
	}

public:
	void details(int j)
	{
		_details(j);
	}
	void print()
	{
		_print();
	}
	double Average()
	{
		return avg;
	}
	
};

//varriables
student *list;
student *cpy;

//functions
void more();
void sort();
void output();

void main()
{
	system("color 3b");

	list = new student[5];
	bool check = true;

	while(check)
	{
		cout << "Student " << i + 1 << ":" << endl;
		
		list[i].details(i);
		
		cout << endl << "Do you want to add more students? (y/n)" << endl;
		
		switch (_getch())
		{
		case 'y':
			system("cls");
			more();
			i++;
			break;
		case 'n':
			check = false;
			break;
		default:
			break;
		}

	}

	//moratab sazi
	sort();

	//chape 3 nafare bartar
	output();
}

//afzudane student
void more()
{
	cpy = new student[i + 1];
	for (int m = 0; m < i + 1; m++)
	{
		cpy[m] = list[m];
	}
	delete[] list;
	list = new student[i + 2];
	for (int m = 0; m < i + 1; m++)
	{
		list[m] = cpy[m];
	}
	delete[] cpy;
	return;
}

void sort()
{
	for (int j = 0; j < i + 1; j++)
	{
		for (int k = 0; k < i + 1; k++)
		{
			if (list[j].Average() > list[k].Average())
			{
				swap(list[j], list[k]);
			}
		}
	}
}

void output()
{
	system("cls");

	for (int j = 0; j < 3; j++)
	{
		if (list[j].Average() < 0) { break; }
		cout << "\t << Rotbe " << j + 1 << " >>" << endl;
		list[j].print();
		cout << endl;
	}

	_getch();
}