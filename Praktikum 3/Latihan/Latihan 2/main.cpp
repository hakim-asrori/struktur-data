#include "pelajaran.cpp"

int main() {
	
	string namapel = "Struktur Data";
	string kodepel = "STD";
	
    pelajaran pel = create_pelajaran(namapel, kodepel);

    tampil_pelajaran(pel);
    
}
