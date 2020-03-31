#include<iostream>
using namespace std;
int Recursive(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 2;
	if (n % 3 == 0)
		return Recursive(n - 1) + (n / 3);
	else
		return 2 * Recursive(n - 1) + Recursive(n - 2);
}
void main()
{
	system("color 3b");
	int num;
	cout << "Input number" << endl;
	cin >> num;
	system("cls");
	cout << "result is = " << Recursive(num) << endl;
	system("pause>n");
}