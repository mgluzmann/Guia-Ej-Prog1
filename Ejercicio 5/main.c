#include <stdio.h>
#include <stdlib.h>

int main()
{
/*/5.Escribir el programa necesario para calcular y mostrar el cuadrado de un número.
El número debe ser mayor que cero, en caso de error que aparezca el mensaje "ERROR, el número debe ser mayor que cero"/*/

   int num;
   int cuadrado;

   printf("Ingrese el numero del que desea calcular su cuadrado: ");
   scanf("%d", &num);

   while (num <= 0)
   {
       printf("ERROR, el número debe ser mayor que cero\n");
       printf("Ingrese el numero del que desea calcular su cuadrado: ");
       scanf("%d", &num);
   }

    cuadrado = num * num;

    printf("El cuadrado del numero ingresado es: %d",cuadrado);
}
