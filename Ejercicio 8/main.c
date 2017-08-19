#include <stdio.h>
#include <stdlib.h>

int main()
{
    //8.Diseñar un programa que calcule la superficie de un triángulo a partir del ingreso de su base y altura y muestre el resultado.

    int base;
    int altura;
    float area;

    printf("Ingrese la base de un triangulo: ");
    scanf("%d",&base);

    printf("Ingrese la altura de un triangulo: ");
    scanf("%d",&altura);

    area = (base * altura) / 2;

    printf("El area del triangulo dados los datos ingresados es: %f",area);
}
