#include<iostream>
#include<string.h>
#include<conio.h>
#define max 100
using namespace std;
int reserved(char A[], int i)
{
	if (i == 0)
	{
		cout << A[0];
		return 0;
	}
	cout << A[i];
	return reserved(A, i - 1);

}
void main()
{
	system("color 3b");
	char str[max];
	cout << "Yek kalame vared konid" << endl;
	cin.get(str, max);
	system("cls");

	int n = strlen(str) - 1;

	reserved(str, n);

	_getch();
}