#include<stdio.h>


int main(int argc,char *argv[]){
    FILE *dosya = fopen("C:\\Users\\cagan\\Desktop\\C-Programlama\\EXERCİSE-PART-2\\pe_analyzer.exe","rb");

    if (dosya == NULL)
    {
        perror("Dosya duzgun acilamadi !!!\n");
        fclose(dosya);
        return 1;
    }
    
    fclose(dosya);
    return 0;

}