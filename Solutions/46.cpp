#include<iostream>
using namespace std;
int Factorial(int x)
{
	if (x == 1)
		return 1;
	return x * Factorial(x - 1);
}
void main()
{
	system("color 3b");
	cout << "Yek adad vared konid" << endl;
	int a;
	cin >> a;
	system("cls");
	cout << a << " Factorial = " << Factorial(a);
	system("pause>n");
}