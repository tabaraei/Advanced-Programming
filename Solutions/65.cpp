#include<iostream>
#include<conio.h>
#define max 100
using namespace std;

int Size(char A[])
{
	int counter = 0;
	for (int i = 0; A[i] != NULL; i++)
		counter++;
	return counter;
}

int Check(char A[], char B[], char C[])
{
	const int counter = Size(B);
	int check = 0;
	int start;

	//barresi mikonim ke aya reshteye dovom dar avali vojud darad ya na!
	// dar surate vojud dashtan, khaneye morede nazar return mishavad

	for (int i = 0; A[i] != NULL; i++)
	{
		if (A[i] == B[0])
		{
			check = 1;
			int k = i+1;
			for (int j = 1; B[j] != NULL; j++)
			{
				if (B[j] == A[k])
				{
					check++;
					k++;
				}
			}

			if (check == counter)
			{
				start = i;
				break;
			}

			else
				check = 0;
		}
	}

	if (check == counter)
		return start;
	else
		return -1;
		
}

void Change(char A[], char B[], char C[], int start)
{
	char D[max];
	int length = start + Size(C);
	//qesmate aval dakhele D rikhte mishavad
	for (int i = 0; i < start; i++)
		D[i] = A[i];

	//reshteye C dar edameye D rikhte mishavad
	for (int i = 0, j = start; i < Size(C); j++)
	{
		D[j] = C[i];
		i++;
	}

	//qesmate dovom dakhele D rikhte mishavad
	for (int i = start + Size(C), j = start + Size(B); A[j] != NULL; j++)
	{
		D[i] = A[j];
		i++;
		length++;
	}

	//dar akharin khane, null mizarim
	D[length] = NULL;

	//araye D ra dar A copy mikonim
	for (int i = 0; D[i] != NULL; i++)
		A[i] = D[i];
	A[length] = NULL;
}

void main()
{
	system("color 3b");
	char str1[max], str2[max], str3[max];

	cout << "(3 kalame vared konid)" << endl;

	cout << "Kalame Aval:" << endl;
	cin.get(str1, max);

	cin.get();

	cout << "Kalame Dovom:" << endl;
	cin.get(str2, max);

	cin.get();

	cout << "Kalame Sevom:" << endl;
	cin.get(str3, max);
	
	int begin = Check(str1, str2, str3);

	if (begin!=-1)
	{
		Change(str1, str2, str3, begin);
		cout << "result = " << str1;
	}
	else
		cout << "kalameye dovom dar avali mojud nis" << endl;
	_getch();
}