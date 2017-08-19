#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*/
   3.	Escribir  un programa que realice las siguientes acciones
•	Limpie la pantalla
•	Asigne a 2 variables numero1 y numero2 valores distintos de cero
•	Efectúe el producto de dichas variables
•	Muestre el resultado pos pantalla
•	Obtenga el cuadrado de numero1 y lo muestre par pantalla
   /*/

   system("cls");

   int numero1;
   int numero2;
   int producto;
   int cuadrado;

    printf("Ingrese el numero 1: ");
    scanf("%d",&numero1);

   while (numero1 <= 0)
   {
        printf("Re-Ingrese el numero 1: ");
        scanf("%d",&numero1);
   }

   printf("Ingrese el numero 2: ");
   scanf("%d",&numero2);

   while (numero2 <= 0)
   {
       printf("Re-Ingrese el numero 2: \n");
       scanf("%d",&numero2);
   }

   producto = numero1 * numero2;
   cuadrado = numero1 * numero1;
   printf("El producto de los numeros es: %d\n",producto);
   printf("El cuadrado de numero1 es: %d\n",cuadrado);

   }
