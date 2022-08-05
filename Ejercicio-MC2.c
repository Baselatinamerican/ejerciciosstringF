/*
2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".
*/

#include <stdio.h>

char palabra[20];
int i=0;

int main()
{
    printf ("\nIngrese una palabra de hasta 20 letras:\t");
    scanf ("%s",palabra);
    printf ("\n");
    for (i=19;i>=0;--i)
    {
        if (palabra[i] != 0)
        {
            printf ("%c",palabra[i]);
        }
    }
    return 0;
}