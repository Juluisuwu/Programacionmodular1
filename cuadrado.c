#include <stdio.h>
#include <math.h>

void area2(){

int a, L;
printf("Escribe la longitud del lado del cuadrado: ");
    scanf("%d", &L);
    a = (L*L);
    printf("El area del cuadrado: %d", a);
   
}

void trapecio//Se nombra area 2 porque ya hay una función que se parece y así la mandamos a llamar de forma correcta
(){

int a, L, l, h;
printf("Escribe la base mayor del trapecio: ");
    scanf("%d", &L);
    printf("Escribe la base menor del trapecio: ");
    scanf("%d", &l);
    printf("Escribe la altura del trapecio: ");
    scanf("%d", &h);
    a = ((L*l)/2)*h;//operación necesaria para sacar el área de un cuadrado
    printf("El area del trapecio es: %d", a);
   
}

void rectangulo//Se nombra area 2 porque ya hay una función que se parece y así la mandamos a llamar de forma correcta
(){

int a, L,l;
printf("Escribe la base del reactangulo: ");
    scanf("%d", &L);
    printf("Escribe la altura del reactangulo: ");
    scanf("%d", &l);
    a = (L*l);//operación necesaria para sacar el área de un cuadrado
    printf("El area del rectangulo es: %d", a);
   
}

int main ()
{
        char opc;
        printf("\na) area de un cuadrado: ");
        printf("\nb) area de un rectangulo: ");
        printf("\nc) area de un trapecio: ");
        printf("\nElige una opcion: ");//se repite esta función es para mandar a llamar la parte exacta del programa que necesita
        scanf("%c", &opc);

       
switch(opc)
        {
                case 'a': area2();
                        break;

                case 'b': rectangulo();
                        break;
                case 'c': trapecio();
                        break;

        }
        return 0;
}
