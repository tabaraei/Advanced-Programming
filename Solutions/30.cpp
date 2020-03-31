#include<iostream>
#define max 1000
using namespace std;
void main()
{
	system("color 3b");
	bool Array[max] = { 0 };
	int n, num, Tedad=0;
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> n;
	system("cls");
	cout << "adad haye khod ra vared konid:" << endl;
	for (int i = 0; i < n;i++)
	{
		cin >> num;
		if (num > max && num < 0)
			exit(0);
		if (!Array[num])
		{
			Array[num] = 1;
			Tedad++;
		}
	}
	system("cls");
	cout << "adad ha be tartibe soudi barabar ast ba:" << endl;
	for (int i = 0 ;i < max;i++)
	{
		if (Array[i] == 1)
		{
			cout << i;
			if (Tedad-->1)
				cout << ",";
		}
	}
	system("pause>n");
}
