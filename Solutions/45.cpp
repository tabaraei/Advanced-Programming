#include<iostream>
using namespace std;
int Power(int x, int y)
{
	if (y == 1)
		return x;
	return x * Power(x, y - 1);
}
void main()
{
	system("color 3b");
	cout << "Do adad vared konid" << endl;
	int a, b;
	cin >> a >> b;
	system("cls");
	cout << "Adade aval be tavane adade dovom = " <<Power(a, b);
	system("pause>n");
}