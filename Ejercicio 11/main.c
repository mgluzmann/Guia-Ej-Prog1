#include <stdio.h>
#include <stdlib.h>

int main()
{
    //11.Hacer el programa que imprima los n�meros pares entre el 1 y el 100

    for (int i = 1 ; i < 101 ; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
