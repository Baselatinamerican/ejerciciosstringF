/*
8) El usuario ingresará nombres de personas hasta que ingrese la palabra "FIN".
No sabemos cuántos nombres ingresará.
Luego de finalizar el ingreso, mostrar en pantalla cuál es el primer nombre en orden alfabético de todos los ingresados.
*/

/*
si ambos nombres son iguales pero uno tiene una letra más, el que esta antes en la lista es el de menos letras.
Si ambos nombres son iguales pero uno tiene algunas letras en mayusculas cuando el otro no, pasa como que son iguales
*/

#include <stdio.h>
#include <string.h>

char nombre1[15] = " ";
int pos_abc1 = 27;
char nombre2[15];
int pos_abc2 = 27;

char abc[26] = "abcdefghijklmnopqrstuvwxyz";
char ABC[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int i=0;
int j=0;
int flag=0;

unsigned long contador=1;

int main ()
{
    printf ("\nPara terminar el ingreso de nombres debe ingresar la palabra FIN.");
    while (strcmp (nombre2, "FIN") != 0)
    {
        while (flag == 0)
        {
            printf ("\nIngrese el nombre de la persona n%d (maximo 15 caracteres):\t",contador);
            scanf ("%s", nombre2);
            for (i=0;i<26 && flag == 0;++i)
            {
                if (nombre2[0] == ABC[i])
                {
                    flag = 1;
                    pos_abc2 = i;
                }
            }
            if (flag == 0)
            {
                printf ("\nIngrese el nombre comenzando con una mayuscula.");
            }
            if (nombre1 == NULL)
            {
                flag = 0;
                printf ("\nIngrese un nombre antes de ingresar la palabra FIN.");
            }
        }
        ++contador;
        flag = 0;
        for (i=1;i<15 && pos_abc2 == pos_abc1 && strcmp (nombre2, "FIN") != 0;++i)
        {
            for (j=0;j<26;++j)
            {
                if (nombre1[i] == abc[j] || nombre1[i] == ABC[j])
                {
                    pos_abc1 = j;
                }
                if (nombre2[i] == abc[j] || nombre2[i] == ABC[j])
                {
                    pos_abc2 = j;
                }
            }
            if (nombre1[i]==NULL)
            {
                pos_abc2 = 27;
            }
            if (nombre2[i]==NULL)
            {
                pos_abc1 = 27;
            }
        }
        if (pos_abc2 < pos_abc1 && strcmp (nombre2, "FIN") != 0)
        {
            strcpy (nombre1, nombre2);
            pos_abc1 = pos_abc2;
            pos_abc2 = 27;
        }
    }
    if (strcmp (nombre1, " ") != 0)
    {
        printf ("\nEl primer nombre en orden alfabetico es %s.",nombre1);
    }
    else
    {
        printf ("\nSe ha terminado el programa sin haber ingresado ningun nombre");
    }
}