#include<iostream>
using namespace std;
int Fibonacci(int x)
{
	if (x == 1 || x==0)
		return x;
	return Fibonacci(x - 1) + Fibonacci(x - 2);
}
void main()
{
	system("color 3b");
	cout << "Kodam jomleye donbale Fibonacci ra mikhahid?" << endl;
	cout << "(1, 1, 2, 3, 5, 8, 13, 21, 34, ...)" << endl;
	int a;
	cin >> a;
	system("cls");
	cout << a << "omin jomleye Fibonacci = " << Fibonacci(a);
	system("pause>n");
}