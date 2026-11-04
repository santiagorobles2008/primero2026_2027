#include <stdio.h>
const int CERO = 0;

int main (void){
    //DECLARAMOS VARIABLES DE ENTRADA
    double a; 
    double b;
     
    //SOLICITAMOS AL USUARIO QUE INGRESE LOS DOS NUMEROS
    printf("Ingrese el primer numero: ");
    scanf("%lf",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%lf",&b);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    double diferencia;
    double mayor;
    double cuadrado;
    int es_a_mayor;
    int es_b_mayor;
    int son_iguales;

    //PROCESOS MATEMATICOS Y LOGICOS
    es_a_mayor = (a > b);
    es_b_mayor = (b > a);
    diferencia = a - b;
    son_iguales = (diferencia == CERO);

    if (es_a_mayor){
        mayor = a;
    }
    if (es_b_mayor){
        mayor = b;
    }
    if (son_iguales){
        mayor = a;
    }
    //PRESENTAMOS LOS RESULTADOS AL USUARIO
    printf("El numero mayor es: %.2f\n", mayor);

    cuadrado = mayor * mayor;
    printf("El cuadrado es: %.2f\n", cuadrado);

    //PRESENTAMOS LA TABLA AL USUARIO
    printf("\nTABLA DE DATOS Y RESULTADOS\n");
    printf("------------------------------------|\n");
    printf("|a       | b      |mayor   |cuadrado|\n");
    printf("|-----------------------------------|\n");
    printf("|%8.2f|%8.2f|%8.2f|%8.2f|\n", a, b, mayor, cuadrado);
    printf("------------------------------------|\n");
    
    return 0;

}
