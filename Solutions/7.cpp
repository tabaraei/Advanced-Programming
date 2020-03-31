#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
	system("color 3b");

	int num, counter = 0;
	int sum = 0;
	
	cout << "Lotfan Adade morede nazar ra vered konid" << endl;
	cout << "Ba vorude adade (-1) be vorude adad payan dahid" << endl;

	do
	{
		cin >> num;
		if (num == -1) break;
		sum += num;
		counter++;
	} while (true);


	system("cls");

	double average = (double)sum / counter;

	if (sum == 0 && counter == 0)
		cout << "Error! You didn't enter any number...";
	else
		cout << "Miangine adad haye dade shode barabar ast ba = " << average;
	
	_getch();
}