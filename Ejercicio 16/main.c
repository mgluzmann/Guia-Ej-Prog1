#include <stdio.h>
#include <stdlib.h>

int main()
{
    //16.Hacer el programa que nos permita introducir un número por teclado y nos informe si es positivo o negativo

    int num;

    printf("Ingrese un numero: ");
    scanf("%d",&num);

    if(num<0)
    {
        printf("El numero ingresado es negativo");
    }
    else
    {
        printf("El numero ingresado es positivo");
    }

    return 0;
}
