#include <stdio.h>

void asignarvalor(int a[][10],int filas,int columnas)
{
int i;
        for(i=0;i<filas;i++)
        {
        int j;
                for(j=0;j<columnas;j++)
                {
                    printf("Ingrese el valor [%i][%i] de la matirz A: ",i,j);
                    scanf("%i",&a[i][j]);
                }
        }
        printf("La matriz A se definio como:\n");
for(i=0;i<filas;i++)
        {
        int j;
                for(j=0;j<columnas;j++)
                {
                    printf("%i\t",a[i][j]);
                }
        printf("\n");
        }
}
void transp(int a[][10],int b[][10],int filas,int columnas)
{
    printf("La matriz At es igual a:\n");
    int i;    
for(i=0;i<columnas;i++)
        {
        int j;
                for(j=0;j<filas;j++)
                {
                        b[i][j]=a[j][i];
                        printf("%i\t",b[i][j]);
                }
                        printf("\n");
        }
}
int main()
{
        int filas,columnas;
        int a[10][10],b[10][10];
        printf("Ingrese el numero de filas para la matriz A: ");
        scanf("%i",&filas);
        printf("\n");
        printf("Ingrese el numero de columnas para la matriz A: ");
        scanf("%i",&columnas);
        printf("\n");
        asignarvalor(a,filas,columnas);
        transp(a,b,filas,columnas);
        return 0;
}                       
