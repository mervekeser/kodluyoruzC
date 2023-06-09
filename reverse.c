#include <stdio.h>
#include <string.h>

void reverse(char *string);
int main(void){
    char string[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", string);
    reverse(string);
    printf("Reversed string: %s\n", string);
    return 0;
    
}

void reverse(char *string)
{
    int length = strlen(string);
    int middle = length/2;
    char temp;
    for (int i = 0; i<middle; i++)
    {
        temp = string[i];
        string[i] = string[length-i-1];
        string[length-i-1] = temp;
        
    }
    
}