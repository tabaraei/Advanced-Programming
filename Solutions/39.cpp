#include<iostream>
#define max 100
using namespace std;
int Counter(int A[][max], int n)
{
	int counter = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (j > i && A[i][j]!=0)
				counter++;
	return counter;
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
	cout << "Tedade deraye haye gheyre sefre balaye ghotre asli = " << Counter(matrix, a) << endl;
	system("pause>n");
}