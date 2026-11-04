#include <stdio.h>

const double FACTOR = 0.44704;

int main (void){
    //ENCABEZADO DESCRIPTIVO
    printf("-------------------------------------------\n");
    printf("CONVERSOR DE VELOCIDAD DE  MPH A M/S\n");
    printf("-------------------------------------------\n");
    printf("Convierte millas por hora a metros por segundo\n");
    printf("-------------------------------------------\n");
    printf("Calcula el triple si el resultado es positivo\n");
    printf("-------------------------------------------\n");

    //DECLARAMOS VARIABLES DE ENTRADA
    double mph;

    //SOLICITAMOS AL USUARIO QUE INGRESE EL DATO
    printf("Ingrese la velocidad en millas por hora: ");
    scanf("%lf", &mph);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    double ms;
    double triple;
    int es_positivo;

    //PROCESOS MATEMATICOS Y LOGICOS
    ms = mph * FACTOR;
    es_positivo = (ms > 0);

    printf("%.2f mph equivalen a %2.f m/s\n", mph, ms);

    if(es_positivo){
        triple = ms * 3;
        printf("El triple es: %.2f", triple);
    }else{
        printf("No se calcula el triple");
    }
    return 0;
}