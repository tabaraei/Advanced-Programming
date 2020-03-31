#include<iostream>
using namespace std;
int f(int A[], int n,int i, int m)
{
	for (; i <= n; i++)
		if (A[i] > m)
			m = A[i];
	return m;
}
void main()
{
	system("color 3b");
	int A[9] = { 1,5,-1,3,12,4,22,18,0 };
	int Size = 9;
	int i = 1; 
	int m = A[0];
	cout << "Result = " << f(A, Size, i, m);
	system("pause>n");
}