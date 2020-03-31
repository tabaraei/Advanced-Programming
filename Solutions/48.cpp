#include<iostream>
using namespace std;
void hanoi(int n, char F, char T, char H)
{
	if (n == 0)
		return;
	hanoi(n - 1, F, H, T);
	cout << "Mohreye " << n << ": " << F << " ---> " << T << endl;
	hanoi(n - 1, H, T, F);
}
void main()
{
	system("color 3b");
	int mohre;
	cout << "Borje hanoi ra baraye chand mohre mikhahid barresi konid?" << endl;
	cin >> mohre;
	system("cls");
	char F, T, H;
	cout << "3 character baraye mile haye <from>, <to> va <help>, be tartib vared konid" << endl;
	cin >> F >> T >> H;
	system("cls");
	cout << "Be in tartib amal konid:" << endl;
	hanoi(mohre, F, T, H);
	system("pause>n");
}