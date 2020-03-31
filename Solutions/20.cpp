#include<iostream>
#define max 100
using namespace std;
void Soudi(int A[], int size)
{
	for(int i=0 ;i<size-1 ; i++)
		for(int j=i+1 ; j<size ; j++)
			if (A[i] > A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
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
	Soudi(A, n);
	system("cls");
	cout << "Dade ha be tartibe Soudi barabar ast ba: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << A[i];
		if (i < n - 1)
			cout << " , ";
	}
	system("pause>n");
}