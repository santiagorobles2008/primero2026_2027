#include <stdio.h>
#include <string.h>

int main(void){
    //DECLARAMOS VARIABLES DE ENTRADA
    char nombre [60];
    char apellido [60];

    //PEDIMOS AL USUARIO QUE INGRESE SU NOMBRE Y APELLIDO
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", apellido);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    char nombre_completo [120];
    int lon_nombre;
    int lon_apellido;
    int lon_completo;
    int es_valido;
    double mitad;

    //PROCESOS MATEMATICOS Y LOGICOS
    lon_nombre = strlen(nombre);       
    lon_apellido = strlen(apellido);
    es_valido = (lon_nombre > 0 && lon_apellido > 0);

    if (es_valido) {
        strcpy(nombre_completo, nombre);
        strcat(nombre_completo, " ");
        strcat(nombre_completo, apellido);

        lon_completo = strlen(nombre_completo);
        mitad = lon_completo / 2.0;

        printf("El nombre completo es %s y su mitad es %.1f\n", nombre_completo, mitad);
    }else {
        printf("Error el nombre o el apellido no pueden estar vacios\n");
    }
    return 0;


}