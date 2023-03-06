/* Nama File    		: Tahanan.c */
/* Deskripsi    		: Mengecek, menghitung dan menampilkan nilai total tahanan yang dirangkai secara seri */
/* Nama - NIM      		: Adinda Rizka Hamdasati - 24060122140139 */

#include <stdio.h>
#include <stdlib.h>

int main(){
/* Kamus */
    int R1; /* Tahanan satu */
    int R2; /* Tahanan dua*/
    int R3; /* Tahanan tiga */
    int val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai tahanan satu (R1) = ");
    val = scanf("%d",&R1);

    printf("Masukkan nilai tahanan dua (R2) = ");
    val = scanf("%d",&R2);

    printf("Masukkan nilai tahanan tiga (R3) = ");
    val = scanf("%d",&R3);

    if (R1 >= 0 && R2 >= 0 && R3 >= 0) {
        printf("%d",R1 + R2 + R3);
    } else {
        printf("Masukan tahanan tidak boleh negatif");
    }

    return 0;
}
