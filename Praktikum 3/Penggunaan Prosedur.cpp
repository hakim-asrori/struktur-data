#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void tulis(int x);

int main() {
	system("cls");
	
	int jum;
	
	cout << "jumlah baris kata = ";
	cin >> jum;
	
	tulis(jum);
	
	getche();
	return 0;
}

void tulis(int x) {
	for (int i = 0; i < x; i++)
		cout << "baris ke-" << i+1 << endl;
}
