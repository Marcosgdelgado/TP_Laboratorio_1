#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    int estado;

}eEmpleado;


int main()
{
   eEmpleado* unEmpleado;
   unEmpleado = (eEmpleado*)malloc(sizeof(eEmpleado));

   if(unEmpleado == NULL){
    printf("no se pudo reservar memoria\n\n");
    exit(1);
   }

   unEmpleado->legajo = 1234;
   strcpy(unEmpleado->nombre, "Juan");
   unEmpleado->sueldo= 20000;
   unEmpleado->estado=1;

   printf("%d %s %.2f\n\n",  unEmpleado->legajo,  unEmpleado->nombre,  unEmpleado->sueldo,  unEmpleado->estado);

   free(unEmpleado);


    return 0;
}

void empleadoSetLegajo(eEmpleado* unEmpleado, int legajo){

     if(unEmpleado !=NULL && legajo > 0){
     unEmpleado->legajo = legajo;
     }

}

int empleadoGetLegajo(eEmpleado* unEmpleado){

    int legajo= -1;
    if(unEmpleado !=NULL){
        legajo = unEmpleado->legajo;
    }

    return legajo;

}








