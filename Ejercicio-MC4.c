/*
4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.
*/

#include <stdio.h>

char palabra[20];
int i=0;
int j=0;

int main()
{
    printf ("\nIngrese una palabra de hasta 20 letras:\t");
    scanf ("%s",palabra);
    while (i < 20 && palabra[i] != 0)
    {
        if (palabra[i] == 97)
        {
            j++;
        }
        ++i;
    }
    if (j > 1)
    {
        printf ("\nLa palabra %s contiene %d letras a.",palabra,j);
    }
    if (j == 1)
    {
        printf ("\nLa palabra %s contiene una a.",palabra);
    }
    if (j == 0)
    {
        printf ("\nLa palabra %s no contiene la letra a.",palabra);
    }
    return 0;
}