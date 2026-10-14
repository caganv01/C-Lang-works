#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef struct schema{
    uint16_t machine;
    uint16_t sectionCount;
    uint32_t entryPoint;
} sema;

int main(){
    sema try_1;
    printf(" ----- PE FILE INFO -----\n");
    printf("Lütfen machine ismi giriniz : "); scanf("%"SCNu16,&try_1.machine);
    printf("Lütfen section count giriniz : "); scanf("%"SCNu16,&try_1.sectionCount);
    printf("Lütfen entry point giriniz : "); scanf("%"SCNu32,&try_1.entryPoint);

    printf("Machine : %" PRIu16"\n",try_1.machine);
    printf("Sec Count : %" PRIu16"\n",try_1.sectionCount);
    printf("Entry Point : %" PRIu16"\n",try_1.entryPoint);


    return 0;

}