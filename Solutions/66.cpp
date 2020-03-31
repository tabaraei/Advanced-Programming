#include<iostream>
#include<string.h>
#include<conio.h>
#define max 100
using namespace std;
bool parentheses(char A[])
{
	int p = 0, q = 0;
	for (int i = 0;A[i] != NULL;i++)
	{
		if (A[i] == '(')
			p++;
		if (A[i] == ')')
			q++;
		if (q > p)
			break;
	}
	if (p == q)
		return true;
	else
		return false;
}
void main()
{
	system("color 3b");
	char str[max];

	cout << "Yek kalame vared konid" << endl;
	cin.get(str, max);
	system("cls");
	
	if (parentheses(str))
		cout << "Dorost ast" << endl;
	else
		cout << "Dorost nist" << endl;

	_getch();
}