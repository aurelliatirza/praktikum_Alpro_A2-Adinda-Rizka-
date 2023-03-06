/* Nama File    		: BolaKrct.c */
/* Deskripsi    		: Menghitung dan menampilkan volume bola (Vb) dan volume kerucut (Vk) */
/* Nama - NIM    		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main(){
/* Kamus */
    float r; /* Jari-jari lingkaran (meter) */
    float phi = 3.1415; /* Konstanta phi */
    float Vb; /* Volume bola (meter kubik) */
    float Vk; /* Volume kerucut (meter kubik) */

/* Algoritma */
    printf("===MENGHITUNG VOLUME BOLA DAN VOLUME KERUCUT===\n\n");

    printf("Masukkan nilai jari-jari lingkaran (r) = ");
    scanf("%f",&r);

    printf("Konstanta phi = 3.1415\n");

    printf("Volume bola (Vb) = ");
    Vb = 1.33 * phi * (r * r * r);
    printf("%f",Vb);
    printf("\n");

    printf("Volume kerucut (Vk) = ");
    Vk = 0.5 * Vb;
    printf("%f",Vk);

    return 0;
}
