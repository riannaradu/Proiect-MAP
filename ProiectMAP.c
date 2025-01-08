#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
/* Se dă o matrice de dimensiunea M x N, generată aleatoriu. Se cere să se calculeze:
a) Suma elementelor aflate pe diagonala principală, respectiv pe diagonala
secundară b) Minimul și maximul elementelor aflate sub diagonala principală,
respectiv sub diagonala secundară.*/

void generare_matrix(int m, int n, int matrix[m][n])
{int i,j;
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        matrix[i][j]=rand()%100+1; //valori intre 1 si 100

}

void afisare_matrix(int m, int n, int matrix[m][n])
{int i,j;
printf("Matricea generata este: \n");
for(i=0;i<m;i++)
    { 
        for(j=0;j<n;j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

}

void suma_diagonale(int m, int n, int matrix[m][n])
{

}

void gaseste_min_max_sub_diagonale(int m, int n, int matrix[m][n])
{
    
}





int main()
{
    int M,N;
    printf("Introduceti numarul de linii : ");
    scanf("%d", &M);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &N);
    if (N<= 0|| M<=0) {
        printf("Dimensiunea trebuie să fie pozitivă!\n");
        return 1;
    }
    int matrix[M][N];
    generare_matrix(M,N,matrix);
    afisare_matrix(M,N,matrix);


}