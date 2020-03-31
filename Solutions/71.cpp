#include <iostream>
#include<conio.h>
using namespace std;

void Pouya(int n)
{
	int *p;
	p = new int[n];

	cout << "Adad haye khod ra vared konid" << endl;

	for (int i = 0; i < n; i++)
		cin >> *(p + i);

	system("cls");

	cout << "Result:" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << p[i];
		if (i < n - 1)
			cout << " , ";
	}

	delete[] p;
}

int main()
{
	system("color 3b");
	int num;
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> num;

	system("cls");

	Pouya(num);

	_getch();
}