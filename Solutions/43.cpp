#include<iostream>
#define max 100
using namespace std;
void main()
{
	system("color 3b");
	int x;
	int matrix[max][max];
	cout << "Yek adad vared konid:" << endl;
	cin >> x;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < x; j++)
		{
			if (j >= i)
				matrix[i][j] = (j - i) + 1;
			else
				matrix[i][j] = (i - j) + 1;
		}
	system("cls");
	cout << "Result:" << endl;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	system("pause>n");
}