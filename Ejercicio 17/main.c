#include <stdio.h>
#include <stdlib.h>

int main()
{
    //17.Hacer el programa que nos permita introducir un número por teclado y nos informe si es par o impar

    int num;

    printf("Ingrese un numero: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("El numero ingresado es %d y dicho numero es par",num);
    }
    else
    {
        printf("El numero ingresado es %d y dicho numero es impar",num);
    }

    return 0;
}
