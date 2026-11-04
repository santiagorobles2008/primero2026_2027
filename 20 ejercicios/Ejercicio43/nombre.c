#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
    //DECALARAMOS LAS VARIABLES
    char nombre [50];
    char apellido [50];
    char nombre_completo [100];

    //SOLICITAMOS AL USURIO QUE INGRESE LOS DATOS
    printf("Ingrese su nombre:");
    scanf("%49s", nombre);
    printf("Ingrese su apellido:");
    scanf("%49s", apellido);

    //PROCESOS
    strcpy(nombre_completo, nombre);
    strcat(nombre_completo, " ");
    strcat(nombre_completo, apellido);
    
    bool valido = (strlen(nombre) > 0 && strlen (apellido) > 0 );
    int diferencia = abs ((int) strlen (nombre) - (int) strlen (apellido));

    //CONDICIONALES
    if (valido) {
        printf("%s, %d\n", nombre_completo, diferencia);
    }else {
        printf("Datos inválidos\n");
    }
    
    printf("Operacion Finalizada\n");
    
    return 0;

}