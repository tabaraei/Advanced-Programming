#include<iostream>
#define max 100
using namespace std;
int SumArray(int A[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += A[i];
	return sum;
}
void main()
{
	system("color 3b");
	int n, A[max];
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> n;
	system("cls");
	cout << "Adad haye morede nazar ra vared konid:" << endl;
	for (int i = 0; i < n; i++)
		cin>> A[i];
	system("cls");
	cout << "Majmue Adad haye vared shode barabar ast ba = " << SumArray(A, n);
	system("pause>n");
}