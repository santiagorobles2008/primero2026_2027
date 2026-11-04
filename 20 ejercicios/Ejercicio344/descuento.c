#include <stdio.h>
#include <math.h>

const double PORCENTAJE_DESCUENTO = 0.05;
const int INDICE_RAIZ = 2;
 
//FUNCION PARA EL CALCULO DE LA RAUIZ CUADRADA
double raiz_cuadrada(double n) {
    return pow(n, 1.0 / INDICE_RAIZ);
}
int main (void){
    //DECLARAMOS VARIABLES DE ENTRADA
    double numero;

    // SOLICITAMOS AL USUARIO QUE INGRESE UN NUMERO
    printf("Ingresa un numero real positivo:");
    scanf("%lf", &numero);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    double raiz;
    double monto_descuento;
    double raiz_descuento;
    int es_positivo;
    
    //PROCESOS MATEMATICOS Y LOGICOS
    es_positivo = (numero > 0);

    if ( es_positivo){
        raiz = raiz_cuadrada(numero);
        printf("La raiz cuadrada de %.2f es %.2f\n", numero, raiz);
        monto_descuento = raiz * PORCENTAJE_DESCUENTO;
        raiz_descuento = raiz - monto_descuento;
        printf("El resultado con el descuento del 5%% es: %.2f\n", raiz_descuento);
    }else{
        printf("Error ingrese un numero mayor a cero");
    }
    return 0;

}