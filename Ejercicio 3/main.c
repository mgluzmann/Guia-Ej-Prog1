#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/3.Escribir  un programa que realice las siguientes acciones
Limpie la pantalla
Asigne a 2 variables numero1 y numero2 valores distintos de cero
Efectúe el producto de dichas variables
Muestre el resultado pos pantalla
Obtenga el cuadrado de numero1 y lo muestre par pantalla
/*/

system("cls");

int num1;
int num2;
int producto;
int cuadrado;

printf("Ingrese un numero distinto a 0: ");
scanf("%d",&num1);

while(num1 == 0)
{
printf("Reingrese el numero, recuerde que debe ser distinto a 0: ");
scanf("%d",&num1);
}

printf("Ingrese otro numero distinto a 0: ");
scanf("%d",&num2);

while(num2 == 0)
{
    printf("Reingrese el numero, recuerde que debe ser distinto a 0: ");
    scanf("%d",&num2);
}

producto = num1 * num2;
cuadrado = num1 * num1;

printf("El producto de la multiplicacion de los numeros ingresados es: %d\n",producto);
printf("El primer numero elevado al cuadrado es: %d\n",cuadrado);

}
