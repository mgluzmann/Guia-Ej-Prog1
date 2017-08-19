#include <stdio.h>
#include <stdlib.h>

int main()
{
    //6.De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero

    int num;
    int mayor = 0;
    int menor = 0;

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&num);

        if(num > 0)
        {
            mayor++;
        }
        else
        {
            menor++;
        }
    }
    //fflush(stdin);

    printf("De los numeros ingresados, %d son mayores a 0 y %d son menores",mayor,menor);
}
