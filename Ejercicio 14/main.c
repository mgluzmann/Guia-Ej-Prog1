#include <stdio.h>
#include <stdlib.h>

int main()
{
    //14.Diseñar un programa que imprima y sume la serie de números 3,6,9,12,...,99.

    int acumulador=0;

    for (int i = 3 ; i <= 99 ; i=i+3)
    {
        printf("%d\n",i);
        acumulador+=i;
    }

    printf("La suma de todos los numeros impresos es: %d",acumulador);

    return 0;
}
