#include<iostream>
#define max 100
using namespace std;
int search(int A[], int size, int x)
{
	int counter = 0;
	for (int i = 0; i < size; i++)
		if (A[i] == x) counter++;
	return counter;
}
void main()
{
	system("color 3b");
	int n, A[max], x;
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> n;
	system("cls");
	cout << "Adad haye morede nazar ra vared konid:" << endl;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	system("cls");
	cout << "Yek adad baraye barresi dar araye vared konid: " << endl;
	cin >> x;
	system("cls");
	cout << "Tedade tekrare adade morede nazar dar araye barabar ast ba = " << search(A, n, x);
	system("pause>n");
}