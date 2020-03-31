#include<iostream>
using namespace std;
void main()
{
	system("color 3b");
	cout << "Yek adad vared konid" << endl;
	int a;
	cin >> a;
	system("cls");
	cout << "Maghsum alayh haye adad:" << endl;
	for (int i = 1; i <= (a/2);i++)
	{
		if (a%i == 0)
			cout << i << endl;
	}
	cout << a;
	system("pause>n");
}