/*
7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.
*/

#include <stdio.h>
#include <string.h>

char nombre1[20];
int edad1 = 2147483647;
char nombre2[20];
int edad2 = 0;
int i = 0;

int main ()
{
    for (i=1;i<6;++i)
    {
        printf ("\nIngrese el nombre de la persona n%d:\t",i);
        scanf ("%s", nombre2);
        printf ("\nIngrese la edad de la persona n%d:\t",i);
        scanf ("%d", &edad2);
        if (edad2 < edad1)
        {
            strcpy (nombre1, nombre2);
            edad1 = edad2;
        }
    }
    printf ("\nLa persona mas joven es %s, con %d anios.", nombre1, edad1);
}