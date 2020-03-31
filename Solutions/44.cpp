#include<iostream>
using namespace std;
int Zarb(int x, int y)
{
	if (y == 1)
		return x;
	return y + Zarb(x, y - 1);
}
void main()
{
	system("color 3b");
	cout << "Do adad vared konid" << endl;
	int a, b;
	cin >> a >> b;
	system("cls");
	cout << "Hasel zarbe do adad = " << Zarb(a, b);
	system("pause>n");
}