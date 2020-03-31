#include<iostream>
using namespace std;
void main()
{
	system("color 3b");
	float a, b;
	//dar surate soal gofte shode vorude adad ha be surate (int) bashad
	//ama chon baraye taghsime daghighe do adad haghal yeki az anha bayad float bahsad
	//Dar natije Vorude adad ha (float) gerefte shod
	cout << "2 adad vared konid:" << endl;
	cin >> a >> b;
	system("cls");
	cout << "Ba type kardane Character morede nazar, amaliat ra anjam dahid" << endl << endl;
	cout << "1) Jam '+'" << endl << "2) Tafrigh '-'" << endl << "3) Zarb '*'" << endl << "4) Taghsim '/'" << endl;
	char op;
	cin >> op;
	system("cls");
	switch (op)
	{
	case '+':
		cout << "Hasele Jam = " << a + b;
		break;
	case '-':
		cout << "Hasele Tafrigh = " << a - b;
		break;
	case '*':
		cout << "Hasele Zarb = " << a * b;
		break;
	case '/':
		if (b == 0)
			cout << "Error";
		else
			cout << "Hasele Taghsim = " << a / b;
		break;
	default:
		cout << "Error";
		break;
	}
	system("pause>n");
}