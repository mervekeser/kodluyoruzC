#include <stdio.h>
#include <string.h>

int main(){

    FILE *dosya;
    char karakter;
     dosya=fopen("/Users/apple/Desktop/""dosya.txt","w");
     
     fprintf(dosya, "Merhaba ben Merve Keser");
    
    fclose(dosya);
    
     
    return 0;
}



    
    
        
    

