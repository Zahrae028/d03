#include <stdio.h>

int main(){
    char str[50];
    
    int n;


    printf("Entrez le message a chiffrer :");
    fgets(str,sizeof(str),stdin);
    printf("Entrez le decalage (1-25) :");
    scanf("%d",&n);
    int k = (sizeof(str)/sizeof(str[0]));
    char chiffrer[k];

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            chiffrer[i] = ((str[i] - 'A' + n) % 26) + 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            chiffrer[i] = ((str[i] - 'a' + n) % 26) + 'a';
        }
        else {
            chiffrer[i] = str[i];
        }
    }
    
printf("%s",chiffrer);
    
    


    return 0;
}