/* Nama File    		: GayaSentr.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai benda yang mengalami Gaya Sentripetal (F) */
/* Nama - NIM     		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main(){
/* Kamus */
    float m; /* Massa (kilogram) */
    float v; /* Kecepatan (meter per detik) */
    float r; /* Jari-jari (meter) */
    float F; /* Gaya (Newton) */

/* Algoritma */
    printf("===MENGHITUNG NILAI BENDA YANG MENGALAMI GAYA SENTRIPETAL===\n\n");

    printf("Masukkan nilai massa (m) = ");
    scanf("%f",&m);

    printf("Masukkan nilai kecepatan (v) = ");
    scanf("%f",&v);

    printf("Masukkan nilai jari-jari (r) = ");
    scanf("%f",&r);

    printf("Gaya Sentripetal (F) yang dialami benda = ");
    F = m * (v * v) / r;
    printf("%f",F);

    return 0;
}
