#include <stdio.h>
#include <string.h>

int main(){
    int x,factorial,number;
    factorial =1;
    printf("Bir sayi girin: ");
    scanf("%d",&number);

    for(x=1;x<=number;x++){
        factorial *= x;

}
    printf("%d!=%d\n",number,factorial);
    return 0;
}



    
    
        
    

