#include <stdio.h>
#include <math.h>


void hipotenusa()
{

        int co, ca;
        float h;
        printf("Escribe la longitud del cateto adyacente: ");
        scanf("%d",&ca);
        printf("Escribe la longitud del cateto opuesto: ");
        scanf("%d",&co);
        h = sqrt((co*co)+(ca*ca));
        printf("La hipotenusa mide: %f ",h);
}

void area()
{

        int base, alt;
        float a;
        printf("Escribe la base: ");
        scanf("%d", &base);
        printf("Escribe la altura: ");
        scanf("%d", &alt);
        a = (base*alt)/2;
        printf("El area del triangulo es: %f", a);
}

void angulo()
{

        float a1, a2, a3;
        printf("Escribe el valor de los 2 angulos: ");
        scanf("%f%f", &a1,&a2);
        a3 = 180-(a1+a2);
        printf("El tercer angulo mide: %f", a3);
}

int main ()
{
        char opc;
        printf("\na) Hipotenusa de un triangulo rectangulo: ");
        printf("\nb) area de un triangulo: ");
        printf("\nc) tercer angulo de un triangulo: ");
        printf("\nElige una opcion: ");
        scanf("%c", &opc);

        switch(opc)
        {
                case 'a': hipotenusa();
                        break;

                case 'b': area();
                        break;
                case 'c': angulo();
                        break;
        }
        return 0;
}
