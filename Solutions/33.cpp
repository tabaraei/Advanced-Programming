#include<iostream>
#define max 100
using namespace std;
int SumArray(int matrix[][max], int a, int b)
{
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
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
	cout << "Hasel jame deraye haye matris barabar ast ba = "<< SumArray(matrix, a, b) << endl;
	system("pause>n");
}