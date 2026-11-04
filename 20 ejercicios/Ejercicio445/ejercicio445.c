#include <stdio.h>

const int NUM_LADO = 4;

int main (void){
    //DECLARAMOS VARIABLES DE ENTRADA
    float lado;
    
    //SOLICITAMOS AL USUARIO  QUE INGRESE EL DATO
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    float perimetro;
    int es_positivo;
    int es_negativo;
    int es_lado_valido;

    //PROCESOS MATEMATICOS Y LOGICOS
    perimetro = NUM_LADO * lado;
    es_lado_valido = (lado > 0);
    es_positivo = (perimetro > 0);
    es_negativo = (perimetro < 0);
    
    printf("El perimetro del cuadrado es: %2.f\n", perimetro);

    if (es_lado_valido){
        printf("El lado es valido\n");
    }else{
        printf("El lado no es valido\n");
    }
    
    if (es_positivo){
        printf("El perimetro es positivo\n");
    }else{
        if (es_negativo){
            printf("El perimetro es negativo\n");
        }else{
            printf("El perimetro es cero se evita division por cero\n");
        }
    }
    return  0;
    
}