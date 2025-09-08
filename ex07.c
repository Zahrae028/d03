#include <stdio.h>


int main(){

    int ligne[5][5];

    for (int i = 0; i < 5; i++)
    {
        printf("Entrez la ligne %d : ",i+1);
        scanf("%d %d %d %d %d",&ligne[i][0],&ligne[i][1],&ligne[i][2],&ligne[i][3],&ligne[i][4]);
        
    }
    
    int t_lignes[5];
    int t_colonnes[5];

    for (int k = 0; k < 5; k++)
    {   
        int g=0;
        for (int h = 0; h < 5; h++)
        {
        
        g =g+ligne[k][h];
        }
        t_lignes[k]=g;
    }



    for (int f = 0; f < 5; f++)
    {   
        int g=0;
        for (int m = 0; m < 5; m++)
        {
        
        g =g+ligne[m][f];
        }
        t_colonnes[f]=g;
    }

    printf("Totaux des lignes :");
    for (int l = 0; l <5; l++)
    {
        printf("%d ",t_lignes[l]);
    }
    
    printf("\n");

    printf("Totaux des colonnes :");
    for (int l = 0; l <5; l++)
    {
        printf("%d ",t_colonnes[l]);
    }
    


    return 0;
}