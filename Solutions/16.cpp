#include <iostream>
using namespace std;
void main()
{
	system("color 3b");
	int a = 0, b = 1, c = 1, num;
	cout << "Yek adad vared konid" << endl;
	cin >> num;
	system("cls");
	cout << num << " jomleye avale donbale fibonacci:" << endl;
	for (int i = 0;i < num ;i++)
	{
		cout << c;
		if (i < num - 1)
			cout << " , ";
		c = a + b;
		a = b;
		b = c;
	}
	system("pause>n");
}