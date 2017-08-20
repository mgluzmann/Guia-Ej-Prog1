#include <stdio.h>
#include <stdlib.h>

int main()
{
    //23.De 3 números ingresados desde el teclado por el usuario, indicar cuál es el mayor

    int num;
    int mayor;
    int bandera = 1;


    for (int i = 0 ; i < 3 ; i++)

    {
        printf("Ingrese un numero: ");
        scanf("%d",&num);


        if(bandera==1)
        {
            mayor=num;
            bandera=0;
        }

        if(num > mayor)
        {
            mayor=num;
        }

    }

    printf("El mayor numero ingresado fue: %d",mayor);

    return 0;
}
