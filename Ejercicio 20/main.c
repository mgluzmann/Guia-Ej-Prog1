#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/20.Hacer el programa que imprima todos los números naturales que hay desde la unidad hasta
    un número que introducimos por teclado/*/

    int num;

    printf("Introduzca un numero: ");
    scanf("%d",&num);

    for (int i = 1 ; i <= num ; i++)
    {
        printf("%d\n",i);
    }


    return 0;
}
