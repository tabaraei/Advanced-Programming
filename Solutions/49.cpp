#include<iostream>
#define max 100
using namespace std;
int SumArray(int A[],int n)
{
	if (n == 1)
		return A[0];
	return A[n - 1] + SumArray(A, n - 1);
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
		cin >> A[i];
	system("cls");
	cout << "Majmue adad haye vared shode barabar ast ba = " << SumArray(A, n) << endl;
	system("pause>n");
}