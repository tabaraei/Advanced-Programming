#include<iostream>
#include<string>
using namespace std;
int power(int x, int y)
{
	int exponent = 1;
	for (int i = 0; i < y; i++)
		exponent *= x;
	return exponent;
}
int Decimal(string n)
{
	int dec = 0;
	//Mabnaye 10e adad ra dar dec mirizim
	int Size = n.size();
	//tedad khane haye string ra dar size mirizim
	int pow = Size - 1;
	//baraye be tavan resandan, az pow (size-1) estefade mikonim
	for (int i = 0; i < Size; i++)
	{
		//dar har marhale, jomleye i string, be dasture morede nazar switch mishavad
		switch (n[i])
		{
		case 'a':
			dec += 10 * power(16, pow);
			pow--;
			break;
		case 'b':
			dec += 11 * power(16, pow);
			pow--;
			break;
		case 'c':
			dec += 12 * power(16, pow);
			pow--;
			break;
		case 'd':
			dec += 13 * power(16, pow);
			pow--;
			break;
		case 'e':
			dec += 14 * power(16, pow);
			pow--;
			break;
		case 'f':
			dec += 15 * power(16, pow);
			pow--;
			break;
		default:
			//baraye adad haye tak raghami, be in dastur switch mishavand
			//dar in dastur, baghimandeye adad dar taghsim bar 16, be amaliat ferestade mishavad
			int r = n[i] % 16;
			dec += r * power(16, pow);
			pow--;
			break;
		}
		
	}
	return dec;
}
void main()
{
	system("color 3b");
	//hamantor ke midanim, dar mabnaye bish az 10, be jaye estefade az adad, az moadele englisi an estefade mikonim
	cout << "Yek adad dar mabnaye 16 vared konid:" << endl;
	cout << "Agar ghasde estefade az adad haye bozorgtar az 10 ra darid" << endl;
	cout << "be ingune az anha estefade konid: (a=10, b=11, c=12, d=13, e=14, f=15)" << endl;
	cout << "Example: a2b" << endl;
	string num;
	cin >> num;
	system("cls");
	cout << "Mabnaye 10e adad barabar ast ba = " << Decimal(num);
	system("pause>n");
}