#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/
    22.	Diseñar el programa necesario para que habiéndose leído el valor de 2 variables NUM1 y NUM2
     se intercambien los valores de las variables, es decir que el valor que tenía NUM1 ahora lo contenga NUM2 y viceversa
    /*/

    int num1;
    int num2;
    int aux;

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);

    aux = num1;
    num1 = num2;
    num2 = aux;


    printf("Num 1 es: %d\n", num1);
    printf("Num 2 es: %d\n", num2);


}
