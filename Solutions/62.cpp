#include<iostream>
#define max 100
using namespace std;

int Counter(char A[])
{
	int cnt = 0;
	for (int i = 0; A[i] != NULL; i++)
		cnt++;
	return cnt;
}

void main()
{
	system("color 3b");
	char Array[max];
	cout << "Yek kalame vared konid:" << endl;
	cin.get(Array,max);
	system("cls");
	cout << "Tedade horuf = " << Counter(Array);
	system("pause>n");
}