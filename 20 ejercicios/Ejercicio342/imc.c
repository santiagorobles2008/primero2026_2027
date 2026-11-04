#include <stdio.h>

const int DIVISOR = 2;

int main(void){

    //DECLARAMOS VARIABLES DE ENTRADA
    double peso;
    double altura;
    
    //SOLICITAMOS AL USUARIO QUE INGRESE EL PESO Y LA ALTURA
    printf("Ingrese su peso en kilogramos: ");
    scanf("%lf", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%lf", &altura);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    double imc;
    double imc_dividido;
    int bajo;
    int sobre;
    int estado;

    //PROCESOS MATEMATICOS Y LOGICOS
    imc = peso / (altura * altura);
    bajo = imc < 18.5;
    sobre = imc > 25.0;
    imc_dividido = imc / DIVISOR;

    printf("Su IMC es: %.2lf\n", imc);

    if  (bajo){
        printf("Esta bajo el rango normal\n");
    }else{
        if (sobre){
            printf("Esta sobre el rango normal\n");
        }else {
            printf("Esta en el rango normal\n");
        }
    }
    printf("Su IMC dividido entre %d es: %.2lf\n", DIVISOR, imc_dividido);
    
    estado = 0;
    return estado;
}
