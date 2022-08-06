/*
9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano.
*/

#include <stdio.h>
#include <string.h>

char palabra[10];

char abc[26] = "abcdefghijklmnopqrstuvwxyz";
char ABC[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int i=0;
int j=0;

int main ()
{
    printf ("\nIngrese una palabra de hasta 10 letras:\t");
    scanf ("%s", palabra);
    for (i=0;i<10;++i)
    {
        for (j=0;j<26;++j)
        {
            if (palabra[i] == abc[j])
            {
                if (j + 3 > 25)
                {
                    palabra[i] = abc[j - 23];
                }
                else
                {
                    palabra[i] = abc[j + 3];
                }
                j = 26;
            }
            else if (palabra[i] == ABC[j])
            {
                if (j + 3 > 25)
                {
                    palabra[i] = ABC[j - 23];
                }
                else
                {
                    palabra[i] = ABC[j + 3];
                }
                j = 26;
            }
        }
    }
    printf ("\nLa palabra encriptada es: %s",palabra);
}