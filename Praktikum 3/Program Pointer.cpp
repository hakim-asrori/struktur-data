#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int x, y;
	int *px;
	
	x = 87;
	px = &x;
	y = *px;
	cout << "Alamat x = " << &x << endl;
	cout << "Isi px = " << px << endl;
	cout << "Isi x = " << x << endl;
	
	cout << "Nilai yang ditunjuk px = " << *px << endl;
	cout << "Nilai y = " << y << endl;
	getch();
	return 0;
}
