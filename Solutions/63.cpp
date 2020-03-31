#include<iostream>
#include<conio.h>
#define max 100
using namespace std;

void Add(char A[], char B[])
{
	int counter = 0;
	for (int i = 0; A[i] != NULL; i++)
		counter++;
	//ba in kar, khane E ke az an bayad reshteye dovom chap shavad ra peyda mikonim

	for (int i = 0; B[i] != NULL; i++)
	{
		A[counter] = B[i];
		counter++;
	}

	A[counter] = NULL;
}

void main()
{
	system("color 3b");
	char Array1[max];
	char Array2[max];

	cout << "(Do kalame vared konid)" << endl;

	cout << "kalame aval:" << endl;
	cin.get(Array1, max);

	cin.get();

	cout << "kalame dovom:" << endl;
	cin.get(Array2, max);

	Add(Array1, Array2);

	system("cls");
	cout << "Natijeye hasel az chasbandane kalameye dovom be kalameye aval = " << Array1;

	_getch();
}