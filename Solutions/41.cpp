#include<iostream>
#define max 100
using namespace std;
void Minus_Array(int A[][max], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		int min = A[i][0];
		//ebteda avalin deraye dar satr ra minimum migirim
		for (int j = 0; j < b; j++)
			if (A[i][j] < min)
				min = A[i][j];
		//aknun be kuchektarin deraye dar satr dastrasi darim
		for (int j = 0; j < b; j++)
			A[i][j] -= min;
	}
}
void main()
{
	system("color 3b");
	int a, b;
	int matrix[max][max];
	cout << "Tedade satr haye matris ra vared konid" << endl;
	cin >> a;
	cout << "Tedade sotun haye matris ra vared konid" << endl;
	cin >> b;
	system("cls");
	cout << "Deraye haye matrise avale khod ra be taritb az chap be rast vared konid" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "Satre " << i + 1 << endl;
		for (int j = 0; j < b; j++)
		{
			cin >> matrix[i][j];
		}
	}
	system("cls");
	Minus_Array(matrix, a, b);
	cout << "Matrise hasel az tafrighe har deraye satr az kuchektarin deraye satr barabar ast ba:" << endl;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	system("pause>n");
}