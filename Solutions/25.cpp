#include<iostream>
#define max 100
using namespace std;
void Makus(int A[], int n)
{
	int B[max];
	for (int i = 0; i < n; i++)
		B[i] = A[i];
	//az araye A copy migirim
	for (int i = n - 1, j = 0; i >= 0; i--, j++)
		A[j] = B[i];
	//hal araye B ra az khaneye akhar be aval, dar khanye aval ta akhare A gharar midahim
}
void main()
{
	system("color 3b");
	int num, A[max];
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> num;
	system("cls");
	cout << "Adad haye morede nazar ra vared konid:" << endl;
	for (int i = 0; i < num; i++)
		cin >> A[i];
	Makus(A, num);
	system("cls");
	cout << "Makuse dade ha barabar ast ba:" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << A[i];
		if (i < num - 1)
			cout << " , ";
	}
	system("pause>n");
}