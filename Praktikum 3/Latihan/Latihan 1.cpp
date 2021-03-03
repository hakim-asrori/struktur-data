#include <iostream>
#include <string>
#include <stdio.h>
#define max 3

using namespace std;

struct Mahasiswa
{
	char nama[100];
	int nim;
	float uts, uas, tugas;
};

float nilai_akhir(int i, Mahasiswa mhs[]){
	return (0.3*mhs[i].uts) + (0.4*mhs[i].uas) + (0.3*mhs[i].tugas);
}

int main()
{
	Mahasiswa mhs[max];
	for (int i = 1; i < max; i++)
	{
		cout << "Masukan nama mahasiswa absensi ke-"<< i << " : "; fflush(stdin); gets(mhs[i].nama);
		cout << "Masukan NIM dari mahasiswa " << mhs[i].nama << " : "; cin >> mhs[i].nim;
		cout << "Masukan UTS dari mahasiswa " << mhs[i].nama << " : "; cin >> mhs[i].uts;
		cout << "Masukan UAS dari mahasiswa " << mhs[i].nama << " : "; cin >> mhs[i].uas;
		cout << "Masukan tugas dari mahasiswa " << mhs[i].nama << " : "; cin >> mhs[i].tugas;
		cout << endl;
	}
	
	cout << endl;
	
	cout << "Nama" << "\t" << "NIM" << "\t" << "UTS" << "\t" << "UAS" << "\t" << "UAS" << "\t" << "Nilai Akhir" << "\t" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	for (int i = 1; i < max; i++)
	{
		cout << mhs[i].nama << "\t" << mhs[i].nim << "\t" << mhs[i].uts << "\t" << mhs[i].uas << "\t" << mhs[i].tugas << "\t" << nilai_akhir(i, mhs) << endl;
	}

	return 0;
}
