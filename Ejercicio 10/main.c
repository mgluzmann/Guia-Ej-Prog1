#include <stdio.h>
#include <stdlib.h>

int main()
{
    //10.Escribir en C un programa que muestre los n�meros impares entre 0 y 100 y que imprima cuantos impares hay

    int contadorImpares=0;

    for (int i = 0; i < 100 ; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            contadorImpares++;
        }
    }

    printf("Entre 0 y 100 hay %d numeros impares",contadorImpares);
}
