#include<iostream>
using namespace std;
int Combination(int x, int y)
{
	if (x == y || y == 0)
		return 1;
	return Combination(x - 1, y) + Combination(x - 1, y - 1);
}
void main()
{
	system("color 3b");
	cout << "Do adad vared konid" << endl;
	int n, m;
	cin >> n >> m;
	system("cls");
	cout << "Combination = " << Combination(n, m);
	system("pause>n");
}