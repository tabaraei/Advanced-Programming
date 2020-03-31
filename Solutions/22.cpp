#include<iostream>
#define max 100
using namespace std;
void Soudi(int A[], int size)
{
	for (int i = 0; i<size - 1; i++)
		for (int j = i + 1; j<size; j++)
			if (A[i] > A[j])
			{
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
}
int BinarySearch(int A[],int size,int x)
{
	int i = 0, j = size - 1;
	while (i <= j)
	{
		int mid = (i + j) / 2;
		if (A[mid] == x)
			return mid;
		else if (A[mid] > x)
			j = mid - 1;
		else i = mid + 1;
	}
	return -1;
}
void main()
{
	system("color 3b");
	int n, A[max], x;
	cout << "Chand adad mikhahid vared konid?" << endl;
	cin >> n;
	system("cls");
	cout << "Adad haye morede nazar ra vared konid:" << endl;
	//Note:
	//Dar surati ke adad ha be surate soudi vared nashavand, Function "Soudi" An hara moratab mikonad
	//ama inkar baes mishavad jaye khanehaye araye avaz shavad va be mahale ghablie adade vared shode
	//dastrasi nadashte bashim (inke adade vared shode chandomin adad bude ast)
	//baraye rafe in moshekl mitavan copy az araye ra be function ha ferestad
	//ke albate dar in barname be in mozu tavajoh nashode ast, chon hadaf faghat yaftane adad dar araye mibashad
	for (int i = 0; i < n; i++)
		cin >> A[i];
	Soudi(A, n);
	system("cls");
	cout << "Yek adad baraye barresi dar araye vared konid: " << endl;
	cin >> x;
	system("cls");
	int temp = BinarySearch(A, n, x);
	if (temp == -1)
		cout << "<Motasefane Adad dar araye vojud nadarad>";
	else
		cout << "Adade morede nazar, aknun dar khaneye <" << temp << "> araye mibashad";
	system("pause>n");
}