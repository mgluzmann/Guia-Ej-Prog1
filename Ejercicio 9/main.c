#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*/9.Escribir un programa que lea por teclado 20 caracteres.
    Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"/*/

    char caracter;
    int conta = 0;
    int conte = 0;
    int conti = 0;
    int conto = 0;
    int contu = 0;

    for (int i = 0 ; i < 20 ; i++)
    {
        printf("Ingrese un caracter: ");
        scanf("%c",&caracter);

        switch(caracter)
        {
            case 'a':
            case 'A':
                conta++;
                break;

            case 'e':
            case 'E':
                conte++;
                break;

            case 'i':
            case 'I':
                conti++;
                break;

            case 'o':
            case 'O':
                conto++;
                break;

            case 'u':
            case 'U':
                contu++;
                break;
        }

        fflush(stdin);
    }

    printf("Se ingreso la letra a %d veces\n",conta);
    printf("Se ingreso la letra e %d veces\n",conte);
    printf("Se ingreso la letra i %d veces\n",conti);
    printf("Se ingreso la letra o %d veces\n",conto);
    printf("Se ingreso la letra u %d veces\n",contu);
}
