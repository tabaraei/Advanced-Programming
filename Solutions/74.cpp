#include <iostream>
#include <conio.h>
using namespace std;

class triangle
{
public:

	float a;
	float b;
	float c;
	float height;
	float Qaede;
	void mohit(float a, float b, float c)
	{
		_mohit(a, b, c);
	}
	void masahat(float h, float q)
	{
		_masahat(h, q);
	}

private:

	void _mohit(float a, float b, float c)
	{
		cout << "mohite mosalas barabr ast ba = " << a + b + c;
	}

	void _masahat(float h, float q)
{
		cout << "masahate mosalas barabar ast ba = " << 0.5*h*q;
	}
};

void main()
{
	triangle mosalas;

	system("color 3b");

	cout << "Input your option:" << endl;
	cout << "1) Mohit" << endl;
	cout << "2)Masahat" << endl;

	//baraye barresie mohasebeye mohit ya masahat
	switch (_getch())
	{
	case '1':
		system("cls");

		cout << "Zel haye mosalase khod ra vared konid:" << endl;
		cin >> mosalas.a >> mosalas.b >> mosalas.c;
		
		system("cls");
		
		mosalas.mohit(mosalas.a, mosalas.b, mosalas.c);
		break;
	case '2':
		system("cls");

		cout << "Ertefa ra vared konid:" << endl;
		cin >> mosalas.height;

		cout << "Qaede ra vared konid:" << endl;
		cin >> mosalas.Qaede;

		system("cls");

		mosalas.masahat(mosalas.height, mosalas.Qaede);
		break;;
	default:
		system("cls");
		cout << "Error!";
		break;
	}

	//baraye jologiri az baste shodane barname
	_getch();
}