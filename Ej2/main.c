#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1.	Ingresar 5 números y calcular su media

    int num;
    int acumulador=0;
    float promedio;



    for (int i = 0 ; i < 5 ; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        acumulador+=num;
    }

    printf("\nLa suma de los numeros ingresados es: %d\n",acumulador);
    promedio = (float)acumulador / 5;

    printf("El promedio de los numeros ingresados es: %.2f\n\n",promedio);

    return 0;


}
