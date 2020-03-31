#include  <iostream>
#include  <conio.h>
using namespace std;

void sort(char* x[])
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (*x[i] >*x[j])
			{
				char* temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
}

int main()
{
	system("color 3b");
	char* pointer[10];

	cout << "Araye 10taii az esharegar hara vared konid:" << endl;

	for (int i = 0; i < 10; i++)
		cin >> *pointer[i];

	sort(pointer);
	
	_getch();
}