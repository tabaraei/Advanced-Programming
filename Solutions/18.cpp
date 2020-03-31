#include<iostream>
using namespace std;
double power(double a, int b)
{
	double pow = 1;
	for (int i = b; i; i--)
		pow *= a;
	return pow;
}
double fact(int n)
{
	double factorial = 1;
	for (int i = n; i; i--)
		factorial *= i;
	return factorial;
}
double Sinus(double x)
{
	double result = 0;
	int minus = 1;
	for (int i = 1; i <= 99; i += 2)
	{
		result += minus*(power(x, i) / fact(i));
		minus *= -1;
	}
	return result;
}
void main()
{
	system("color 3b");
	double num;
	cout << "Yek zavie beyne 0 ta 90 vared konid" << endl;
	cin >> num;
	num = ((num*(3.141592654)) / (180));
	system("cls");
	cout << "Sinuse Zavie morede nazar barabar ast ba = " << Sinus(num);
	system("pause>n");
}