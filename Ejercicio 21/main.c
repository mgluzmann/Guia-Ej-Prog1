#include <stdio.h>
#include <stdlib.h>

int main()
{
    //21.Hacer el programa que nos permita contar los múltiplos de 3 desde la unidad hasta un número que introducimos por teclado

    int num;

    printf("Introduzca un numero: ");
    scanf("%d",&num);

    for (int i = 1 ; i <= num ; i++)
    {
        if(i%3==0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
