#include<stdio.h>
#include<stdint.h>

int main(int argc,char *argv[]){

    if (argv < 2)
    {
        printf("Kullanim: %s <exe_dosyasi>\n",argv[0]);
        return 1;
    }

    FILE * file;

    file = fopen(argv[1],"rb");

    if (file == NULL){
        perror("Dosya acilmadi !!");
        return 1;
    }

    unsigned char buffer[64];

    size_t okunan;
    // Fread'in okudugu eleman sayısını tutması ıcın olusturdum.
    okunan = fread(buffer,1,64,file);

    if (okunan < 64)
    {
        printf("Hata: Dosya PE header analizi için fazla küçük.\n");
        fclose(file);
        return 1;
    }
    


    printf(" ===== PE ANALYZER ===== \n");

    printf("Dosya: %s\n",argv[1]);
    
    if (buffer[0] != 0x4D || buffer[1] != 0x5A)
    {
        printf("[*] MZ signature bulunamadi.\n");
        fclose(file);
        return 1;
    }
    printf("[*] MZ signature bulundu !!!\n");

    uint32_t e_flanew = 
        ((uint32_t)buffer[60]) |
        ((uint32_t)buffer[61] << 8) |
        ((uint32_t)buffer[62] << 16) |
        ((uint32_t)buffer[63] << 24);

    printf("[*] PE Header Offset: 0x%X\n",e_flanew);


    fclose(file);




    return 0;

}