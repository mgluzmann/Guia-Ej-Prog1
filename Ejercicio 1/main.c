#include <stdio.h>
#include <stdlib.h>

int main()

{
    //Ingresar 5 números y calcular su media

    int num;
    int acumulador=0;
    int promedio;

    for (int i = 0 ; i < 5 ; i++);
    {
        printf("Ingrese un numero entero: ");
        scanf("%d",&num);
        acumulador = acumulador + num;
    }

    promedio = acumulador / 5;

    printf("El promedio de los numeros ingresados es: %d",promedio);
}
