#include<iostream>
using namespace std;
int Digit(int x)
{
	int counter = 0;
	while (x)
	{
		x = x / 10;
		counter++;
	}
	return counter;
}
int power(int a, int b)
{
	long exponent = 1;
	for (int i = 0;i < b;i++)
		exponent *= a;
	return exponent;
}
int maghloob(int x)
{
	int d = Digit(x)-1;
	int r,sum = 0;
	while (x)
	{
		r = x % 10;
		sum += power(10, d)*r;
		d--;
		x /= 10;
	}
	return sum;
}
void main()
{
	system("color 3b");
	int num;
	cout << "Yek adad vared konid" << endl;
	cin >> num;
	system("cls");
	cout << "Maghloobe adad barabar ast ba = " << maghloob(num);
	system("pause>n");
}