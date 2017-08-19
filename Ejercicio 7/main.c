#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846

int main()
{
    //7.Diseñar un programa que calcule la longitud de la circunferencia y el área del círculo de radio dado.
    //Circunferencia = 2pi*radio
    //area = radio al cuadrado * pi
    //radio es diametro / 2;

    int radio;
    float circunferencia;
    float area;

    printf("Ingrese el radio de un circulo: ");
    scanf("%d",&radio);

    circunferencia = (2* PI)*radio;
    area = (radio * radio) * PI;
    printf("La circunferencia dado el radio ingresado es: %.2f\n",circunferencia);
    printf("El area del circulo dado el radio ingresado es %.2f\n",area);


}
