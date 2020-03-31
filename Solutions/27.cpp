#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
void main()
{
	system("color 3b");
	string a, b;
	int Array[100] = { 0 };
	cout << "adade aval ra vared konid:" << endl;
	cin >> a;
	int sizea = a.size();
	if (sizea > 100)
	{
		system("cls");
		//dar surati ke adad az 100 ragham bishtar bashad exit mikonad
		cout << "Error" << endl;
		Sleep(2000);
		exit(0);
	}
	system("cls");
	cout << "adade dovom ra vared konid:" << endl;
	cin >> b;
	int sizeb = b.size();
	if (sizeb > 100)
	{
		system("cls");
		//dar surati ke adad az 100 ragham bishtar bashad exit mikonad
		cout << "Error" << endl;
		Sleep(2000);
		exit(0);
	}
	system("cls");
	if (sizea == sizeb)
	{
		int sum, res = 0;
		for (int i = sizea - 1; i >= 0; i--)
		{
			//az akharin khaneye reshte ha, shoru be jam zadan mikonim va hasel ra dar araye gharar midahim
			//chon az meghdare characterie adad estefade mioknad, baraye dastyabi be meghdare asli, anra menhaye 96 mikonim
			sum = ((a[i] + b[i] + res) - 96);
			if (i == 0)
			{
				//dar surati ke ba avalin ragham resid, majmu ra mostaghiman chap konad
				Array[i] = sum;
				break;
			}
			if (sum >= 10)
			{
				Array[i] = sum % 10;
				res = 1;
			}
			else
			{
				Array[i] = sum;
				res = 0;
			}
		}
		cout << "Hasel jame do adad = ";
		for (int i = 0; i < sizea; i++)
			cout << Array[i];
		system("pause>m");
	}
	else
	{
		system("cls");
		//dar surati ke tedade arghame do adad barabar nabashad error midahad
		cout << "Error" << endl;
		Sleep(3000);
		exit(0);
	}

}