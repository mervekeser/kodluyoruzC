#include <stdio.h>

int main()
{   int siralama[5],i,j,temp;
    for (i=0;i<5;i++)
    {
        printf("siralama dizisi icin sayi giriniz: ");
        scanf("%d", &siralama[i]);
    }

    for (i=0;i<5;i++)
    {
       for(j=0;j<5;j++)
       {
        if (siralama[i]>siralama[j]){

        temp=siralama[i];
        siralama[i]=siralama[j];
        siralama[j]=temp;
        }

       }

    }
    printf("sirali dizi=");
    for(i=0;i<5;i++){
        printf("%d",siralama[i]);
    }
   
    
    return 0;
}