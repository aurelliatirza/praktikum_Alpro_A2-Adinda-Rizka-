/* Nama File    		: LKLayang.c */
/* Deskripsi    		: Menghitung dan menampilkan luas dan keliling layang-layang */
/* Nama - NIM    		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main(){
/* Kamus */
    float s1; /* Sisi satu layang-layang (meter) */
    float s2; /* Sisi dua layang-layang (meter) */
    float d1; /* Diagonal satu layang-layang (meter) */
    float d2; /* Diagonal dua layang-layang (meter) */
    float Luas; /* Luas layang-layang (meter persegi) */
    float Kell; /* Keliling layang-layang (meter) */

/* Algoritma */
    printf("===MENGHITUNG LUAS DAN KELILING LAYANG-LAYANG===\n\n");

    printf("Masukkan nilai sisi satu layang-layang (s1) = ");
    scanf("%f",&s1);

    printf("Masukkan nilai sisi dua layang-layang (s2) = ");
    scanf("%f",&s2);

    printf("Masukkan nilai diagonal satu layang-layang (d1) = ");
    scanf("%f",&d1);

    printf("Masukkan nilai diagonal dua layang-layang (d2) = ");
    scanf("%f",&d2);

    printf("Luas layang-layang = ");
    Luas = 0.5 * d1 * d2;
    printf("%f",Luas);
    printf("\n");

    printf("Keliling layang-layang = ");
    Kell = 2 * (s1 + s2);
    printf("%f",Kell);

    return 0;
}
