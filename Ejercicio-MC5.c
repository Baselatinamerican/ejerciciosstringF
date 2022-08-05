/*
5) El usuario ingresa una palabra.
Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.
*/

#include <stdio.h>

char vocales[10]="aeiouAEIOU";
int cant_char=0;
int i=0;
int j=0;
int cant_vocales=0;

int main()
{
    printf ("\nIngrese la cantidad de caracteres que va a tener la palabra:\t");
    scanf ("%d",&cant_char);
    char palabra[cant_char];
    printf ("\nIngrese una palabra de hasta %d caracteres:\t",cant_char);
    scanf ("%s",palabra);
    for (i=0;i<cant_char;++i)
    {
        for (j=0;j<10;++j)
        {
            if (palabra[i] == vocales[j])
            {
                cant_vocales++;
            }
        }
    }
    printf ("\nLa palabra %s tiene %d vocales.",palabra,cant_vocales);
    return 0;
}