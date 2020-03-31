#include<iostream>
#define max 100
using namespace std;
void SumArray(int A[], int B[], int C[], int x)
{
	for (int i = 0; i < x; i++)
		C[i] = A[i] + B[i];
}
void main()
{
	system("color 3b");
	int n, A[max], B[max], C[max];
	// n: tedade ozvhaye A,B
	cout << "Baraye Arayehaye <A> va <B> chand adad mikhahid vared konid?" << endl;
	cin >> n;
	system("cls");
	cout << "Adad haye araye A ra vared konid:" << endl;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	system("cls");
	cout << "Adad haye araye B ra vared konid:" << endl;
	for (int i = 0; i < n; i++)
		cin >> B[i];
	system("cls");
	SumArray(A, B, C, n);
	cout << "Hasele jame nazir be nazire anasore do araye:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << C[i];
		if (i < n - 1)
			cout << " , ";
	}
	system("pause>n");
}