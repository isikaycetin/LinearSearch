#include <stdlib.h>
#include <stdio.h>

int linearSearch(int dizi[], int boyut, int sayi) {
    int i;
    for (i = 0; i < boyut; i++) {          // Dizinin elemanlarini sirayla  karsilastirip sayi bulunur.
        if (dizi[i] == sayi) {
            return i;               // sayi bulunursa indeks döndürsün.
        }
    }
    return -1;              // Bulunamazsa -1 döner.
}

int main() {
    int boyut, sayi, i, sonuc;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &boyut);
    int dizi[boyut];                               // Dizi noyutu kadar yer ayýrdýk.
    printf("Dizinin elemanlarini girin:\n");
    for (i = 0; i < boyut; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Aranacak elemani girin: ");
    scanf("%d", &sayi);
    sonuc = linearSearch(dizi, boyut, sayi);           // Sonuc kullandýðýmýz linearSearch e eþitlenir.     
    if (sonuc == -1) {
        printf("%d sayisi dizide bulunamadi.\n", sayi);
    } else {
        printf("%d sayisi dizide bulundu.\n", sayi, sonuc);
    }
    return 0;
}

