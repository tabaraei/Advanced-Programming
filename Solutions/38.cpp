#include<iostream>
#define max 100
using namespace std;
int Zin_Asbi(int A[][max], int a, int b)
{
	int maximum, minimum;
	for (int i = 0; i < a; i++)
	{
		maximum = A[i][0];
		//be tore pishfarz avalin deraye matris ra maximum migirim
		int k = 0;
		// <k> bayangare Jaygahe deraye dar sotun mibashad
		for (int j=0; j < b; j++)
			if (A[i][j] > maximum)
			{
				maximum = A[i][j];
				//dar surati ke deraye bozorgtari dar satr mojud bashad, be maximum taghir miyabad
				k = j;
				//jaygahe sotune an niz avaz mishavad
			}
		minimum = A[i][k];
		//Farz ra bar in migirim ke adade peyda shode kuchektarin adad dar sotun bashad
		for (int m = 0; m < a; m++)
			if (A[m][k] < minimum)
				minimum = A[m][k];
		//dar sotune morede nazar meghdare minimum dar be dast avardim
		//hal kafist barresi konim aya meghdare minimum va maximum barabar ast ya na...
		//dar surate barabari, noghte peyda shode, zin asbi mibashad
		//va gheyre in surat satr haye badi ra barresi mikonad
		if (minimum == maximum)
			return minimum;
	}
	//Dar surati ke dar araye chenin noghte E vojud nadashte bashad, false ra barmigardanad
	return false;
}
void main()
{
	system("color 3b");
	int a, b;
	int matrix[max][max];
	cout << "Tedade satr haye matris ra vared konid" << endl;
	cin >> a;
	cout << "Tedade sotun haye matris ra vared konid" << endl;
	cin >> b;
	system("cls");
	cout << "Deraye haye matrise avale khod ra be taritb az chap be rast vared konid" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "Satre " << i + 1 << endl;
		for (int j = 0; j < b; j++)
		{
			cin >> matrix[i][j];
		}
	}
	system("cls");
	int result = Zin_Asbi(matrix, a, b);
	if (result)
		cout << "Noghteye zin asbie araye barabar ast ba = " << result;
	else
		cout << "Error";
	system("pause>n");
}