#include<iostream>
#define max 100
using namespace std;
int Determinant(int A[][max])
{
	//Raveshe Sarus
	int result = ((A[0][0] * A[1][1] * A[2][2]) + (A[0][1] * A[1][2] * A[2][0]) + (A[0][2] * A[1][0] * A[2][1])) - ((A[0][2] * A[1][1] * A[2][0]) + (A[0][1] * A[1][0] * A[2][2]) + (A[0][0] * A[1][2] * A[2][1]));
	return result;
}
void main()
{
	system("color 3b");
	int matrix[max][max];
	cout << "Yek matrise 3*3 vared konid" << endl;
	cout << "Deraye haye matrise avale khod ra be taritb az chap be rast vared konid" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Satre " << i + 1 << endl;
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix[i][j];
		}
	}
	system("cls");
	cout << "Determinant = " << Determinant(matrix);
	system("pause>n");
}