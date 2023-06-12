#include <stdio.h>
#include <string.h>

int main(){


    FILE *dosya;
    char karakter;
     dosya=fopen("/Users/apple/Desktop/""dosya.txt","r");
     
     while(! feof(dosya) ){
    putchar(fgetc(dosya));
  }
    fclose(dosya);
   
    
     
    return 0;
}



    
    
        
    

