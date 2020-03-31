#include<iostream>
#define max 100
using namespace std;
bool meet_twice(int B[], int counter, int x)
{
	//in function baraye barresie tekrare khaneye araye mibashad
	for (int i = 0; i < counter; i++)
		if (x == B[i])
			return true;
	return false;
}
int Search(int A[], int n)
{
	int B[max], counter = 1;
	for (int x = 0, i = 0; true; i++)
	{
		B[i] = x;
		//Shomareye khane baraye barresi be araye B dade mishavad va sepas be function meet_twice dade mishavad
		x = A[x];
		//Tebghe farze masale, meghdare dakhele khane ra dar <x> gharar midahim
		if (x >= n)
			return x;
		if (meet_twice(B, counter, x))
			return -1;
		counter++;
		//counter baraye barresie tedade khanehaye araye B dar nazar gerefte shode ast
	}
}
void main()
{
	system("color 3b");
	int num, A[max];
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> num;
	system("cls");
	cout << "Adad haye morede nazar ra vared konid:" << endl;
	for (int i = 0; i < num; i++)
		cin >> A[i];
	system("cls");
	cout << "Result = " << Search(A, num);
	system("pause>n");
}