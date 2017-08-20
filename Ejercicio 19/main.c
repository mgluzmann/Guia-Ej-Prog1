#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/19.Ingresar un número entero por consola y efectuar la suma de todos los números que le anteceden,
    comenzando desde 0 y mostrar el resultado por pantalla/*/


    int num;
    int acumulador=0;

    printf("Ingrese un numero: ");
    scanf("%d",&num);


    for (int i = 0 ; i < num ; i++)
    {
        acumulador = acumulador + i;
    }

    printf("La suma de todos los numeros antecedentes al numero ingresado es: %d",acumulador);
    return 0;
}
