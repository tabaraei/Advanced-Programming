#include<iostream>
#define max 100
using namespace std;
int Sum_Fari(int A[][max], int n)
{
	int sum = 0;
	for (int i = 0, j = n - 1; i < n; i++, j--)
		sum += A[i][j];
	return sum;
}
void main()
{
	system("color 3b");
	int a;
	int matrix[max][max];
	cout << "Tedade satr va sotune matris ra vared konid (square matrix)" << endl;
	cin >> a;
	system("cls");
	cout << "Deraye haye matris ra be taritb az chap be rast vared konid" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "Satre " << i + 1 << endl;
		for (int j = 0; j < a; j++)
		{
			cin >> matrix[i][j];
		}
	}
	system("cls");
	cout << "Majmue deraye haye ghotre fari = " << Sum_Fari(matrix, a) << endl;
	system("pause>n");
}