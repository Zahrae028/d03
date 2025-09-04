#include <stdio.h>


int main(){
    int s ;
    
    int num_size;
    int num[s];

    printf("entrez le nombre du tableux :");
    scanf("%d",&num_size);
    s = num_size;
    num_size = sizeof(num)/sizeof(num[0]);

    printf("Entrez nombres : ");
    for (int i = 0;i<num_size; i++)
    {
        scanf("%d",&num[i]);
    }
    
    
    printf("%d",num_size);

    // for (int i = num_size - 1; i >=0; i--)
    // {
    //     printf("%d ",num[i]);
    // }
    
    

    return 0;
}