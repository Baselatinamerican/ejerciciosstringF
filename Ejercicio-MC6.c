/*
6) El usuario ingresa una palabra. Determinar qué letra aparece mayor cantidad de veces.
Para simplificar el problema, trabaje solo con mayúsculas.
*/

#include <stdio.h>

int cant_char=0;
char copiar=0;      // Para pasar un caracter de un lugar de memoria a otro. Despues se va a convertir en la variable que contiene la letra que más veces se repitio
int cant_letras=1;  //
int cant_letras2=0;
int i=0;
int j=0;

int main()
{
    printf ("\nIngrese la cantidad de caracteres que va a tener la palabra:\t");
    scanf ("%d",&cant_char);
    char palabra[cant_char];
    printf ("\nIngrese una palabra de hasta %d caracteres:\t",cant_char);
    scanf ("%s",palabra);
    for(i=0;i<cant_char;++i)            // Reordenamos las letras para que sea más facil contar cuantas hay de cada
    {
        for (j=i+1;j<cant_char;++j)
        {
            if (palabra[i] == palabra[j])
            {
                copiar = palabra[i+cant_letras];
                palabra[i+cant_letras] = palabra[i];
                palabra[j] = copiar;
                cant_letras + 1;
            }
        }
        cant_letras = 1;
    }
    for (i=0;i<cant_char;++i)
    {
        while (palabra[i] == palabra[i + cant_letras])
        {
            ++cant_letras;
        }
        if (cant_letras > cant_letras2)
        {
            cant_letras2 = cant_letras;
            copiar = palabra [i];
        }
        cant_letras = 1;
    }
    printf("\nLa letra que mas veces aparecio fue la letra %c, apareciendo un total de %d veces.",copiar,cant_letras2);
}