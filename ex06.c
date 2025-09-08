#include <stdio.h>

int main(){

    char str[50];
    
    printf("entrez votre message :");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i<50; i++)
    {
        if (str[i]<=122 && str[i]>=97)
        {
            str[i] = str[i] - 32;
        }
        
        switch (str[i])
        {
        case 'A': case 'a':
            str[i]='4';
            break;

        case 'B': 
            str[i]='8';
            break;

        case 'E':
            str[i]='3';
            break;

        case 'I': 
            str[i]='1';
            break;

        case 'O': 
            str[i]='0';
            break;

        case 'S': 
            str[i]='5';
            break;    
        
        default:
            break;
        }
    }

    for (int i = 0; str[i]!='\0'; i++)
    {
        printf("%c",str[i]);
    }
    
    


    return 0;
    

}