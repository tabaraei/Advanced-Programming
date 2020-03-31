#include<iostream>
using namespace std;
long SumEven(long x)
{
	int r;
	long sum = 0;
	while (x)
	{
		r = x % 10;
		if (r % 2 == 0)
			sum += r;
		x /= 10;
	}
	return sum;
}
void main()
{
	system("color 3b");
	long num;
	cout << "Yek adad vared konid" << endl;
	cin >> num;
	system("cls");
	cout << "Hasele jame arghame Zoj = " << SumEven(num);
	system("pause>n");
}