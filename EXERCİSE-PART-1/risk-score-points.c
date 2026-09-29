#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int durum = 1;
    srand(time(NULL));
    while (durum)
    {
        int score;
        score = rand() % 101;

        if (0<= score &&  score<=30 )
        {
            printf("Skor %d LOW !!!\n",score);

        } else if (30 < score &&  score <=60){

            printf("Skor %d MEDIUM !!!\n",score);

        } else if (60 < score &&  score <=80){

            printf("Skor %d HIGH !!!\n",score);

        }else if (80<score &&  score<= 100){
            
            printf("Skor %d CRITICAL !!!\n",score);
        }    

        printf("Cikmak istersen 0'a bas : "); scanf("%d",&durum);
    }
    
    
    return 0;
}