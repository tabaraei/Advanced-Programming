#include<iostream>
using namespace std;
int power(int a, int b)
{
	int exponent = 1;
	for (int i = 0; i < b; i++)
		exponent *= a;
	return exponent;
}
int Binary(int n)
{
	int bin = 0, r, counter = 0;
	while (n)
	{
		if (n / 2) //Agar khareje ghesmate taghsime adad bar 2 hamchenan bozorgtar az 0 bashad:
		{
			r = n % 2;
			bin += r*power(10, counter); 
			//baghimande ra dar 10 be tavane counter (shoru az 0) mikonad
			counter++;
			//va baraye zarbe badi, be counter yeki ezafe mikonad (yani tavane 10 yeki afzayesh miyabad)
		}
		else
			//ama agar khareje ghesmat 0 bud:
			bin += n*power(10, counter);
			//khode khareje ghesmat ra be adad ezafe konad, yani zarb dar 10 be tavane counter...
		n /= 2;
	}
	return bin;
}
void main()
{
	system("color 3b");
	int num;
	cout << "Input number" << endl;
	cin >> num;
	system("cls");
	if (num > 0 && num < 1024)
		cout << "Mabnaye 2e adad barabar ast ba = " << Binary(num);
	else
		cout<<"Error";
	system("pause>n");
}