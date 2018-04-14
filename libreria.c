#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float suma(float numero_uno, float numero_dos)
    {   float retorno;
        retorno =numero_uno+numero_dos;
        return retorno;
    }

float resta(float numero_uno, float numero_dos)
{
    float retorno;
    retorno= numero_uno-numero_dos;
    return retorno;

}
float division(float numero_uno, float numero_dos)
{
     while(numero_dos < 0  || numero_dos==0 )
                    {
                       printf("\nnumero es no valido, vuelva a intentar: ");
                       scanf("%f", &numero_dos);

                    }
    float retorno;
    retorno= numero_uno/numero_dos;
    return retorno;

}
float multiplicacion(float numero_uno, float numero_dos)
{
    float retorno;
    retorno= numero_uno*numero_dos;
    return retorno;

}

float factoreo(float numero_uno)
{
   int i,factor=1;
    while (numero_uno < 0 || numero_uno==0)
        {
            printf("\nIngrese un numero entero:\n ");
            scanf("%.2f", &numero_uno);
        }
   for (i=1; i<=numero_uno; i++)
    {
        factor=factor*i;
    }
    return factor;

}

