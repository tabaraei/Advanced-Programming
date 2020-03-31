#include<iostream>
#define max 100
using namespace std;
void ZarbArray(int matrix1[][max], int matrix2[][max], int matrix3[][max], int a, int b, int c, int d)
{
	int result;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < d; j++)
		{
			result = 0;
			for (int k = 0; k < b; k++)
			{
				result += matrix1[i][k] * matrix2[k][j];
			}
			matrix3[i][j] = result;
		}
	}
}
void main()
{
	system("color 3b");
	int a, b, c, d;
	int matrix1[max][max], matrix2[max][max], matrix3[max][max];
	system("cls");
	cout << "Tedade satr haye matris aval ra vared konid" << endl;
	cin >> a;
	cout << "Tedade sotun haye matris aval ra vared konid" << endl;
	cin >> b;
	system("cls");
	cout << "Tedade satr haye matris dovom ra vared konid" << endl;
	cin >> c;
	cout << "Tedade sotun haye matris dovom ra vared konid" << endl;
	cin >> d;
	system("cls");
	if (b == c)
	{
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
		cout << "Deraye haye matrise dovome khod ra be tartib az chap be rast vared konid" << endl;
		for (int i = 0; i < c; i++)
		{
			cout << "Satre " << i + 1 << endl;
			for (int j = 0; j < d; j++)
			{
				cin >> matrix2[i][j];
			}
		}
		system("cls");
		//dade hara baraye zarb be tabe midahim
		ZarbArray(matrix1, matrix2, matrix3, a, b, c, d);
		cout << "Hasel zarbe 2 matris barabar ast ba:" << endl;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < d; j++)
			{
				cout << matrix3[i][j] << " ";
			}
			cout << endl;
		}
		system("pause>n");
	}
	else
	{
		cout << "Error";
		system("pause>n");
	}
}