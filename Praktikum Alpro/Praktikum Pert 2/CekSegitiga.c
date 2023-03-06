/* Nama File    		: CekSegitiga.c */
/* Deskripsi    		: Mengecek dan menampilkan jenis segitiga berdasarkan 3 masukan integer berupa sisi segitiga */
/* Nama - NIM     		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    int s1; /* Sisi segitiga satu */
    int s2; /* Sisi segitiga dua*/
    int s3; /* Sisi segitiga tiga */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai sisi segitiga satu (s1) = ");
    val = scanf("%d",&s1);

    printf("Masukkan nilai sisi segitiga dua (s2) = ");
    val = scanf("%d",&s2);

    printf("Masukkan nilai sisi segitiga tiga (s3) = ");
    val = scanf("%d",&s3);

    if (s1 > 0 && s2 > 0 && s3 > 0) {
        if (s1 == s2 && s2== s3) {
            printf("Segitiga sama sisi");
        } else if (s1 == s2 || s2 == s3 || s1 == s3) {
            printf("Segitiga sama kaki");
        } else {
            printf("Segitiga sembarang");
        }
    } else {
        printf("Terdapat nilai yang bukan sisi segitiga");
    }

    return 0;
}
