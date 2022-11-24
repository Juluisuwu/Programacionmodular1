#include <stdio.h>
float factorial(int n)
{
float f;
if(n==0) f=1;
else f=n*factorial(n-1);
return f;
}

int main(){

float fact;
int n;
printf("\nDame un numero: ");
scanf("%d",&n);
fact=factorial(n);
printf("\nEl factorial=%f\n",fact);

return 0;
}



