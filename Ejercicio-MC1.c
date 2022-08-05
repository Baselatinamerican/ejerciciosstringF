/*
1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.
*/

#include <stdio.h>

char palabra[20];
int i=0;

int main()
{
    printf ("\nIngrese una palabra de hasta 20 letras:\t");
    scanf ("%s",palabra);
    while (i < 20 && palabra[i] != 0)
    {
        ++i;
    }
    if (i > 1)
    {
        printf ("\nLa palabra %s contiene %d letras.",palabra, i);
    }
    else
    {
        printf ("\nLa palabra %s contiene 1 letra.",palabra);
    }
    return 0;
}