#include<iostream>
using namespace std;
int DigitSum(int x)
{
	int sum = 0;
	while (x)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int Donbale(int n)
{
	int result = 1;
	for (int i = 1; i < n; i++)
	{
		//i bayangar tedad jomle, result bayangar meghdare jomle
		result = result + DigitSum(result);
	}
	return result;
}
void main()
{
	system("color 3b");
	int n;
	cout << "Chandomin jomle az seri (1, 2, 4, 8, 16, 23, 28, ...) ra mikhahid?" << endl;
	cin >> n;
	system("cls");
	if (n == 1)
		cout << "Jomleye morede nazar barabar ast ba = 1";
	else
		cout << "Jomleye morede nazar barabar ast ba = " << Donbale(n);
	system("pause>n");
}