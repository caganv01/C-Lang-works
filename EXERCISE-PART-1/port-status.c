#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int durum = 1;
    int port = 22;
    int cikis;
    
    while (durum)
    {
        // Rastgele sayı üretecini zaman tabanlı olarak başlatır.
        // Bu sayede program her çalıştığında farklı bir sayı dizisi üretilir.
        srand(time(NULL));

        int rastgele_Sayi = rand() % 2;
        
        if (rastgele_Sayi == 1)
        {
            printf("%d portu acik !!!\n",port);
        } else if (rastgele_Sayi == 0){
            printf("%d portu kapali !!!\n",port);
        }

        printf("Cikmak istiyorsan 0'a bas :  "); scanf("%d",&durum);
        
    }
    return 0;
    


}