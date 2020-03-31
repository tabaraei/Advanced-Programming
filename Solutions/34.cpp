#include<iostream>
#define max 100
using namespace std;
void SumArray(int matrix1[][max], int matrix2[][max], int matrix3[][max], int a, int b, int c, int d)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			matrix3[i][j] = matrix2[i][j] + matrix1[i][j];
		}
	}
}
void main()
{
	system("color 3b");
	int a, b, c, d;
	int matrix1[max][max], matrix2[max][max], matrix3[max][max];
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
	if (a == c && b == d)
	//Agar tedade satr va sotune do matrix barabar bashad dasturat anjam mishavad...
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
		for (int i = 0; i < a; i++)
		{
			cout << "Satre " << i + 1 << endl;
			for (int j = 0; j < b; j++)
			{
				cin >> matrix2[i][j];
			}
		}
		SumArray(matrix1, matrix2, matrix3, a, b, c, d);
		system("cls");
		cout << "Hasel jame 2 matris barabar ast ba:" << endl;
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
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