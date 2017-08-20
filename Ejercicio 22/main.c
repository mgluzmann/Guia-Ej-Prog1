#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/22.Diseñar el programa necesario para que habiéndose leído el valor de 2 variables NUM1 y NUM2
    se intercambien los valores de las variables, es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y viceversa/*/

    int num1=5;
    int num2=8;
    int aux;

    aux=num1;
    num1=num2;
    num2=aux;

    printf("Num1 es %d y num2 es %d",num1,num2);


    return 0;
}
