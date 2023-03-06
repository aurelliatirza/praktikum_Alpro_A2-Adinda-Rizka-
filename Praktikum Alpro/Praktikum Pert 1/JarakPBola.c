/* Nama File    		: JarakPBola.c */
/* Deskripsi    		: Menghitung dan menampilkan nilai jarak (y) benda yang mengalami Gerak Parabola */
/* Nama - NIM      		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main(){
/* Kamus */
    float v0; /* Kecepatan awal (meter per detik) */
    float t; /* Waktu (detik) */
    float g = 9.8; /* Konstanta gravitasi (meter per detik kuadrat) */
    float y; /* Jarak (meter) */

/* Algoritma */
    printf("===MENGHITUNG JARAK BENDA YANG MENGALAMI GERAK PARABOLA===\n\n");

    printf("Masukkan nilai kecepatan awal (v0) = ");
    scanf("%f",&v0);

    printf("Masukkan nilai waktu (t) = ");
    scanf("%f",&t);

    printf("Konstanta gravitasi (g) = 9.8\n");

    printf("Jarak (y) benda yang mengalami gerak parabola = ");
    y = (v0 * t) - (0.5 * g * (t * t));
    printf("%f",y);

    return 0;
}
