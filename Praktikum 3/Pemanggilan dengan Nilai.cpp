#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void tukar(int x, int y);

int main() {
	int a, b;
	system("cls");
	a = 4; b = 6;
	cout << "kondisi sebelum ditukar \n";
	cout << "a = " << a << " b = " << b <<endl;
	
	tukar(a,b);
	printf("kondisis setelah ditukar \n");
	cout << "a = " << a << " b = " << b << endl;
	getch();
	return 0;
}

void tukar( int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "nilai akhir pada fungsi tukar \n";
	cout << "x = " << x << " y = " << y << endl;
}
