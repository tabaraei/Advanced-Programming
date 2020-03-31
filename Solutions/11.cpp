#include<iostream>
using namespace std;
int Digit(int x)
{
	int counter = 0;
	while (x > 0)
	{
		x = x / 10;
		counter++;
	}
	return counter;
}
long power(int a, int b)
{
	long exponent = 1;
	for (int i = 0;i < b;i++)
		exponent *= a;
	return exponent;
}
bool high_powered(int x)
{
	int dig = Digit(x);
	int sum = 0;
	int copyx = x;
	while (x)
	{
		int remain = x % 10;
		sum += power(remain, dig);
		x = x / 10;
	}
	if (sum == copyx)
		return true;
	return false;
}
void main()
{
	system("color 3b");
	cout << "Adad haye por tavane 4 raghami:" << endl;
	for (int i = 1000; i < 10000; i++)
		if (high_powered(i))
			cout << i << endl;
	system("pause>n");
}