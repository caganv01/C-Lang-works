#include<stdio.h>
#include<stdlib.h>

int main(){
    // İp bilgisini , port bilgisini ve risk skorunu taşıyacak variable tanımlarım.
    char ip[16];
    int port; 
    int risk_score; 

    
    printf("Bilgileri giriniz !!!\n");
    printf("Target IP : "); scanf("%15s",ip);
    printf("Port : "); scanf("%d",&port);
    printf("Risk Score : "); scanf("%d",&risk_score);

    return 0;

}