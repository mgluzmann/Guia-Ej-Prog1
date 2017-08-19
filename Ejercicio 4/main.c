#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/4.Escribir un programa que realice las siguientes acciones:
Limpie la pantalla
Declare 2 variables y les asigne sendos valores
Realice la resta de dichas variables y muestre por pantalla la leyenda "Resultado positivo"
en caso de ser mayor que cero o "Resultado negativo" si es menor que cero/*/

system("cls");

 int num1;
 int num2;
 int resta;

printf("Ingrese un numero: ");
scanf("%d",&num1);

printf("Ingrese otro numero: ");
scanf("%d",&num2);

resta = num1 - num2;

if(resta > 0)
{
    printf("Resultado positivo");
}
else
{
    printf("Resultado negativo");
}

}
