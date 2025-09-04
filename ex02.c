#include <stdio.h>

int main(){
    int nums[50];
    int occ[10];

    int num ;

    printf("entrez le nombre : ");
    scanf("%d",&num);
    int n = num;
    int i =0;
    while (n!=0)
    {
        nums[i]=n%10;
        n = n/10;
        i++;
    }

    for (int j = 0; j < 10; j++)
    {int o = 0;
        for (int k = 0; k <i; k++)
        {
            
            if (j==nums[k]){
                o++;
            }
        }
        occ[j]=o;
    }
    printf("chiffres : ");
    for (int h = 0; h < 10; h++)
    {
        printf("%d ",h);
    }
    printf("occurences : ");
    for (int m = 0; m < 10; m++)
    {
        printf("%d ",occ[m]);
    }
    
    return 0;
}