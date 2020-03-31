#include<iostream>
using namespace std;
void main()
{
	system("color 3b");
	cout << "2 adad vared konid" << endl;
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	system("cls");
	cout << "Adad haye aval beyne 2 adade vared shode:" << endl;
	for (;a <= b;a++)
	{
		bool result = true;
		for (int i = 2; i <= sqrt(a);i++)
			if (a%i == 0)
				result = false;
		if (result == true)
			cout << a << endl;
	}
	system("pause>n");
}