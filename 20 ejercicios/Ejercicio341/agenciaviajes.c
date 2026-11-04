#include <stdio.h>

const double GALON_LITRO = 3.78541; 

int main (void) {

    //DECLARAMOS VARIABLES DE ENTRADA
    double galones;

    //SOLICITAMOS AL USUARIO QUE INGRESE LOS GALONES
    printf("Ingrese la cantidad de galones: ");
    scanf("%lf", &galones);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    double litros;
    double litros_redondeados;
    int en_rango;
    int es_positivo;

    //PROCESOS MATEMATICOS Y LOGICOS
    en_rango = galones > 0;
    
   if (en_rango) {
    litros = galones * GALON_LITRO;
    es_positivo = litros > 0;

    if (es_positivo){
        litros_redondeados =(int)(litros * 100 + 0.5) / 100.0;
        printf("%.2f galones equivalen a %.2f litros\n", galones, litros_redondeados);

    }else {
        printf("Error en el calculo");
    }
   }else {
    printf("Error, ingrese galones mayores a 0");
   }
   return 0;

}   