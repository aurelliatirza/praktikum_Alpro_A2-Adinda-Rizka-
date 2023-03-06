/* Nama File    		: JarakGLBB.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai jarak (S) benda yang mengalami Gerak Lurus Berubah Beraturan */
/* Nama - NIM      		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main(){
/* Kamus */
    float v0; /* Kecepatan awal (meter per detik) */
    float t; /* Waktu (detik) */
    float a; /* Percepatan (meter per detik kuadrat) */
    float S; /* Jarak (meter) */

/* Algoritma */
    printf("===MENGHITUNG JARAK BENDA YANG MENGALAMI GERAK LURUS BERUBAH BERATURAN===\n\n");

    printf("Masukkan nilai kecepatan awal (v0) = ");
    scanf("%f",&v0);

    printf("Masukkan nilai waktu (t) = ");
    scanf("%f",&t);

    printf("Masukkan nilai percepatan (a) = ");
    scanf("%f",&a);

    printf("Jarak (S) benda yang mengalami Gerak Lurus Berubah Beraturan = ");
    S = (v0 * t) + (0.5 * a * (t * t));
    printf("%f",S);

    return 0;
}
