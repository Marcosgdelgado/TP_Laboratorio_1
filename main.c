#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main(void)
{
    char seguir='s';
    int opcion=0;
    float numero_uno;
    float numero_dos;
    float resultado;
    float i, factor=1;





    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A=%.2f)\n", numero_uno);
        printf("2- Ingresar 2do operando (B=%.2f)\n", numero_dos);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("\nSeleccione una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: printf("\nIngrese un numero: ");
                    fflush(stdin);
                    scanf("%f", &numero_uno);
                break;

            case 2: printf("\nIngrese un numero: ");
                    fflush(stdin);
                    scanf("%f", &numero_dos);
                break;

            case 3: printf("\nLa suma total es: %.2f\n\n", suma(numero_uno,numero_dos));
                    getch();

                break;

            case 4: printf("\nLa resta total es: %.2f\n\n", resta(numero_uno,numero_dos));
                    getch();
                break;

            case 5: while(numero_dos < 0  || numero_dos==0 )
                    {
                       printf("\nnumero es no valido, vuelva a intentar: ");
                       scanf("%f", &numero_dos);

                    }
                    printf("\nLa division total es: %.2f\n\n", division(numero_uno,numero_dos));
                    getch();
                break;

            case 6: printf("\nLa multiplicacion total es: %.2f\n\n", multiplicacion(numero_uno, numero_dos));
                    getch();
                break;

            case 7: printf("\nEl factor de:%.2f es %.2f\n",numero_uno, factoreo(numero_uno));
                    getch();
                break;

            case 8: printf("\nLa suma total es: %.2f\n\n", suma(numero_uno,numero_dos));

                    printf("\nLa resta total es: %.2f\n\n", resta(numero_uno,numero_dos));

                    printf("\nLa division total es: %.2f\n\n", division(numero_uno, numero_dos));

                    printf("\nLa multiplicacion total es: %.2f\n\n", multiplicacion(numero_uno, numero_dos));

                    printf("\nEl factor de:%.2f es %.2f\n",numero_uno, factoreo(numero_uno));

                break;

            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}



