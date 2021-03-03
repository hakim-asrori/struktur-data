#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void matrik(int *baris, int *kolom);

int main ()
{
	int baris, kolom;
	
	matrik(&baris, &kolom);

 	getch ();
}

void matrik(int *baris, int *kolom) {
	int matriks[3][3];
	int x, y;

	for(int baris = 0; baris < 3; baris++)
	{
		for(int kolom = 0; kolom < 3; kolom++)
		{
			cout<<"Baris Ke ["<<baris+1<<"] Kolom Ke ["<<kolom+1<<"] = ";
			cin>>matriks[baris][kolom];		
		}
		cout<<endl;
	}
	
	cout << "Hasilnya adalah : " << endl;
	
	for(int baris = 0; baris < 3; baris++)
	{
		for(int kolom = 0; kolom < 3; kolom++)
		{
			cout<<matriks[baris][kolom]<<" ";
		}
		cout<<endl;
	}
}
