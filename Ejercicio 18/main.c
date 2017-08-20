#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/18.Diseñar en  un programa que permita ingresar 10 números, ninguno de ellos igual a cero.
    Se pide sumar los positivos, obtener el producto de los negativos y luego mostrar ambos resultados/*/

    int num;
    int acumulador = 0;
    int multiplicadorNegativo=1;
    int producto;
    int productoAcumulado = 0;


    for (int i = 0 ; i < 10 ; i++)
    {
        printf("Ingrese un numero distinto a 0: ");
        scanf("%d",&num);

        while(num==0)
        {
            printf("Usted ingreso el numero 0, por favor ingrese un numero distinto: ");
            scanf("%d,&num");
        }

        if(bandera==1 && num < 0)
            {
                auxNegativo=num;
                bandera=0;
            }

        if(num > 0)
        {
            acumulador+=num;

        }
        else
        {




        }


    }

        printf("La suma de los numeros positivos ingresados es: %d y el producto de los negativos es %d",acumulador,productoAcumulado);

        return 0;
    }
