#include<iostream>
#include<string.h>
#include<conio.h>
#define max 100
using namespace std;
bool Taqaron(char A[])
{
	int j = strlen(A)-1;
	for (int i = 0; i<=j ;i++, j--)
	{
		if (A[i] != A[j])
			return false;
	}
	return true;
}
void main()
{
	system("color 3b");
	char A[max];
	cout << "Yek kalame vared konid" << endl;
	cin.get(A, max);
	system("cls");
	if (Taqaron(A))
		cout << "Kalameye vared shode moteqaren ast" << endl;
	else
		cout << "Kalameye vared shode moteqaren nist" << endl;
	_getch();
}