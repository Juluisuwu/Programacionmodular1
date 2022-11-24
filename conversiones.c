#include <stdio.h>
#include <math.h>

void farenheit(){
float c, f;
printf("Los grados celcius a convertir:  ");
    scanf("%f", &c);
    f = (c*(1.8)+32);
    printf("Los grados son: %f", f);
}

void kelvin (){
float c, k;
printf("Los grados celcius a convertir:  ");
    scanf("%f", &c);
    k = (c+273.15);
    printf("El area del cuadrado: %f", k);
}

void rankine(){
float c, r;
printf("Los grados celcius a convertir:  ");
    scanf("%f", &c);
    r = (((9/5)*c)+491.67);
    printf("El area del cuadrado: %f", r);
}

int main (){

char opc;
printf("\na) De grados celcius a farenheit: ");
    printf("\nb) De grados celcius a kelvin: ");
    printf("\nc) De grados celcius a rankine: ");
printf("\nElige una opcion: ");
    scanf("%c", &opc);
   
    switch (opc)
{
case 'a': farenheit();
                        break;

            case 'b': kelvin();
                        break;
case 'c': rankine();
                        break;
}
return 0;
}


