#include <stdio.h>

const int DIVISOR = 2;

int main (void){
    //DECLARAMOS VARIABLES DE ENTRADA
    int b;

    //SOLICITAMOS AL USUARIO QUE INGRESE UN NUMERO
    printf("Ingrese un numero entero: ");
    scanf("%d", &b);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    int es_par;
    int es_positivo;
    int es_par_positivo;
    int suma_acumulada;

    //PROCESOS MATEMATICOS Y LOGICOS
    es_par = (b %DIVISOR == 0);
    es_positivo = ( b > 0);
    es_par_positivo = (es_par && es_positivo);

    if ( es_par_positivo){
        printf("El numero es par y positivo\n");
    }else{
        printf("El numero no es par y positivo\n");
    }
    suma_acumulada = 0;
    suma_acumulada = suma_acumulada + es_par;
    suma_acumulada = suma_acumulada + es_positivo;
    suma_acumulada = suma_acumulada + es_par_positivo;

    printf("La suma de los resultados parciales es:%d\n", suma_acumulada);
    
    return 0;

}