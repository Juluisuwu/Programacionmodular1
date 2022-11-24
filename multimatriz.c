#include <stdio.h>
#define M 100

void dimension(int t[]){

printf("Defina las dimensiones MxM de las 3 matrices: ");
scanf ("%i", &t[0]);

}

void valormatr(int a[][M], int b[][M], int t[]){


int i;
for(i=0; i<t[0]; i++)
{

int j;
for(j=0; j<t[0];j++)
{

printf("Ingrese el valor de [%i][%i] en A: ", i, j);
scanf("%i", &a[i][j]);

}
}

for(i=0;i<t[0];i++)
{
int j;
for(j=0; j<t[0];j++)
{

printf("Ingrese el valor de [%i][%i] en B: ", i, j);
scanf("%i", &b[i][j]);

}
}

}

void multimatri(int a[][M], int b[][M], int c[][M], int t[])
{

printf("A*B=C\n");
int i;
for(i=0; i<t[0]; i++)
{

for(int j=0; j<t[0]; j++)
{
int x=0;
for(int k=0; k<t[0]; k++)
{

x=x+a[i][k]*b[k][j];
c[i][j]=x;

}
printf("%i\t", c[i][j]);

}
printf("\n");

}

}


int main (){

int a[M][M], b[M][M], c[M][M], t[1];

dimension(t);
valormatr(a,b,t);
multimatri(a,b,c,t);

return 0;
}
