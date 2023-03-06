//* Nama File    		: Bilanganint.c *//
//* Deskripsi    		: Menampilkan dan menginput bilangan i merupakan bilangan bulat positif atau nol atau bulat negatif *//
//* Nama - NIM      	: Adinda Rizka Hamdasati - 24060122140139 *//

int main(){
    int bilangan;

    printf("masukkan nilai bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan > 0){
        printf("bilangan bulat positif");
    }
    else if (bilangan == 0){
        printf("nol");
    }
    else if (bilangan < 0){
        printf("bilangan bulat negatif");
    }
    else{
        printf("tidak termasuk bilangan bulat");
    }
    return 0;
}
