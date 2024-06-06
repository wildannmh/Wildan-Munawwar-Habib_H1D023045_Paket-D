#include <stdio.h>

//Deklarasi struktur KHS
typedef struct {
    int nim;
    float ip;
}khs;
khs p;

void init (khs *p, int x, float y){
    p->nim = x;
    p->ip = y;
}

//Buat fungsi update IP Mahasisswa
void updateIP (khs *p, int x, float y) {
    p->nim = x;
    p->ip = y;
}

//Buatlah fungsi cetak KHS
void printKHS (khs *p){
    printf("NIM: %d\n", p->nim);
    printf("Ip: %f", p->ip);
}

//Buat main program
int main (){
    init(&p, 24052, 3.85);
    //Cetak KHS sebelum perubahan
    printf("Sebelum IP diperbarui:\n");
    printKHS(&p);
    printf("\n");

    //Ubah IP Mahasiswa
    updateIP(&p, 24052, 4.00);

    //Cetak KHS setelah perubahan
    printf("Setelah IP diperbarui:\n");
    printKHS(&p);

    return 0;
}