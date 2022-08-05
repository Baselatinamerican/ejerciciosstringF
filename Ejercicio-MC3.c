/*
3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, 
si tienen las mismas letras en las mismas posiciones.
*/

#include <stdio.h>

int main()
{
    int cant_char=0;
    int i=0;

    printf ("\nIngrese la cantidad de caracteres que van a tener las palabras:\t");
    scanf ("%d",&cant_char);

    char palabra1[cant_char];
    char palabra2[cant_char];

    printf ("\nIngrese la primer palabra:\t");
    scanf ("%s",palabra1);
    printf ("\nIngrese la segunda palabra:\t");
    scanf ("%s",palabra2);

    for (i=0;i<cant_char && palabra1[i] == palabra2[i];++i){}
    if (i == cant_char)
    {
        printf ("\nLas palabras son iguales.");
    }
    else
    {
        printf ("\nLas no son palabras iguales.");
    }
    return 0;
}