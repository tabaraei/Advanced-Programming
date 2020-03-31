#include<iostream>
#include <conio.h>
#define max 100

using namespace std;

void Shift(int A[], int size, int x)
{
	for (int i = 0; i < x; i++)
		for (int j = size - 1; j > 0; j--)
			A[j] = A[j - 1];
	
	for (int i = 0, j = x; i < size - 1; i++, j++)
		A[i] = A[j];
	
}

void main()
{
	system("color 3b");
	
	int n, A[max], x;
	
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> n;
	
	system("cls");
	
	cout << "Adad haye morede nazar ra vared konid:" << endl;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	
	system("cls");
	
	cout << "Yek adad vared konid:" << endl;
	cin >> x;
	
	system("cls");
	
	Shift(A, n, x);
	
	cout << "Araye pas az shift dadane " << x << " onsore akhar:" << endl;
	for (int i = 0; i < n - x; i++)
	{
		cout << A[i];
		if (i < n - x - 1)
			cout << " , ";
	}
	_getch();
}