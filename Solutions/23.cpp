#include<iostream>
#define max 100
using namespace std;
void Soudi(int A[], int size)
{
	for (int i = 0; i<size - 1; i++)
		for (int j = i + 1; j<size; j++)
			if (A[i] > A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
}
void Sort_AB(int A[], int B[], int C[], int n, int m)
{
	for (int i = 0, j = 0, k = 0; i < (n + m); i++)
	{
		//dar har marhale khaneye "j"om A ba khaneye "k"om B moghayese mishavad va dakhele khaneye "i"om C gharar migirad
		if (A[j] <= B[k])
		{
			if (j == n) //marbut be halati ke khanehaye araye A ta akhar rafte bashand, dar natije azin be bad bayad faghat khanehaye araye B dakhele C gharar girand
			{
				C[i] = B[k];
				k++;
			}
			else
				C[i] = A[j];
			j++;
		}
		else
		{
			if (k == m) //marbut be halati ke khanehaye araye B ta akhar rafte bashand, dar natije azin be bad bayad faghat khanehaye araye A dakhele C gharar girand
			{
				C[i] = A[j];
				j++;
			}
			else
				C[i] = B[k];
			k++;
		}
	}
}
void main()
{
	system("color 3b");
	int n, m, A[max], B[max], C[max];
	// n: tedade ozvhaye A
	// m: tedade ozvhaye B
	cout << "Baraye Araye A chand adad mikhahid vared konid?" << endl;
	cin >> n;
	system("cls");
	cout << "Adad haye morede nazar ra vared konid:" << endl;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	system("cls");
	cout << "Baraye Araye B chand adad mikhahid vared konid?" << endl;
	cin >> m;
	system("cls");
	cout << "Adad haye morede nazar ra vared konid:" << endl;
	for (int i = 0; i < m; i++)
		cin >> B[i];
	Soudi(A, n);
	Soudi(B, m);
	//ba tavajoh be farze soal, dar surati ke adad haye dade shode soudi nabashand
	//Function soudi in kar ra anjam midahad
	system("cls");
	Sort_AB(A, B, C, n, m);
	cout << "Araye C:" << endl;
	for (int i = 0; i < n + m; i++)
	{
		cout << C[i];
		if (i < (n + m - 1))
			cout << " , ";
	}
	system("pause>n");
}