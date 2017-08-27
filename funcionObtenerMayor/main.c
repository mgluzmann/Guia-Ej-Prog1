#include <stdio.h>
#include <stdlib.h>

int obtenerMayor(int, int, int);

int main()
{
    int num1;
    int num2;
    int num3;
    int mayor;
/*
      printf("Ingrese un numero: ");
      scanf("%d",&num1);

      printf("Ingrese un numero: ");
      scanf("%d",&num2);

      printf("Ingrese un numero: ");
      scanf("%d",&num3);
*/
      mayor = obtenerMayor(10,10,2);

      printf("\n\nEl mayor numero ingresado es: %d",mayor);

    return 0;
}
int obtenerMayor(int num1, int num2, int num3){

    int mayor;

    if(num1 >= num2 && num1 >= num3)
    {
        mayor = num1;
    }
    else if(num2 >= num3 && num2 >= num1)
    {
        mayor = num2;
    }
    else
    {
        mayor = num3;
    }

    return mayor;
}
//
