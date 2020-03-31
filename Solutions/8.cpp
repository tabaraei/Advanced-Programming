#include<iostream>
using namespace std;
void main()
{
	system("color 3b");
	bool run = true;
	int total = 0, result = 0;
	//Total bayangare tedade Character 'A' ghable har 'B' mibashad
	//Ma pas az residan be har 'B' Tedade vordui 'A' ghabl ra dakhele result mirizim
	system("color 3b");
	cout << "Lotfan Character 'A' ya 'B' ra vared konid" << endl;
	cout << "Ba vorude Character 'Q' Be vorude Character payan dahid" << endl;
	while (run)
	{
		switch (_getch())
		{
		case 'A':
			total++;
			break;

		case 'B':
			result = total;
			break;

		case 'Q':
			run = false;
			break;
		default:
			break;
		}
	}
	system("cls");
	cout << "Tedade Character 'A' Pish az akaharin 'B' barabar ast ba = " << result << endl;
	system("pause>n");
}