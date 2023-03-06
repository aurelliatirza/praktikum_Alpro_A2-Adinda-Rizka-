/* Nama File    		: kallk.c */
/* Deskripsi    		: Menghitung dan menampilkan hasil operasi aritmatika dari 2 bilangan berdasarkan masukan character */
/* Nama - NIM     		: Adinda Rizka Hamdasati - 24060122140139 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
/* Kamus */
    float iA; /* Bilangan bulat satu */
    float iB; /* Bilangan bulat dua */
    char o; /* Pilihan operasi */
    float val; /* Validasi tipe data */

/* Algoritma */
    printf("Masukkan nilai bilangan bulat satu (iA) = ");
    val = scanf("%f",&iA);

    printf("Masukkan nilai bilangan bulat dua (iB) = ");
    val = scanf("%f",&iB);

    printf("Masukkan karakter pilihan operasi (o) = ");
    val = scanf(" %c",&o);

    switch (o)
    {
    case 'a':
        printf("%d",(int)iA + (int)iB);
        break;
    case 'b':
        printf("%d",(int)iA - (int)iB);
        break;
    case 'c':
        printf("%d",(int)iA * (int)iB);
        break;
    case 'd':
        printf("%f",iA / iB);
        break;
    case 'e':
        printf("%d",(int)iA / (int)iB);
        break;
    case 'f':
        printf("%d",(int)iA % (int)iB);
        break;
    default:
        printf("Bukan pilihan menu yang benar");
        break;
    }

    return 0;
}
