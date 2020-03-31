#include<iostream>
#define max 100
using namespace std;
void Taranahade(int matrix1[][max], int matrix2[][max], int a, int b)
{
	//mohasebeye taranahade:
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			matrix2[j][i] = matrix1[i][j];
		}
	}
	//Chape taranahade:
	cout << "Taranahade matris barabar ast ba:" << endl;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
			cout << matrix2[i][j] << " ";
		cout << endl;
	}
}
void main()
{
	system("color 3b");
	int a, b;
	int matrix1[max][max], matrix2[max][max];
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
			cin >> matrix1[i][j];
		}
	}
	system("cls");
	Taranahade(matrix1, matrix2, a, b);
	system("pause>n");
}