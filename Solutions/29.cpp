#include<iostream>
using namespace std;
int repeat(int A[], int n)
{
	int max = 0, Maxhome;
	for (int i = 0;i < n;i++)
		if (A[i] > max)
		{
			max = A[i];
			Maxhome = i;
		}
	return Maxhome;
}
float Average(int A[], int n)
{
	float sum = 0.0;
	for (int i = 0;i < n;i++)
		if (A[i] != 0)
			sum += A[i] * i;
	float avg = sum / n;
	return avg;
}
void main()
{
	system("color 3b");
	int A[1000] = { 0 }, n, num;
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> n;
	system("cls");
	cout << "adad haye khod ra vared konid:" << endl;
	for (int i = 0; i < n;i++)
	{
		cin >> num;
		A[num]++;
	}
	system("cls");
	cout << "Bishtarin tekrar ra adade " << repeat(A, n) << " Darad" << endl;
	cout << "Miangine dade ha barabar ast ba = " << Average(A, n) << endl;
	system("pause>n");
}