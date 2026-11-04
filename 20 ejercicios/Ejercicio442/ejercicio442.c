#include <stdio.h>
#include <math.h>

const double RENDIMIENTO_IDEAL = 12.0;

int main (void){
    //DECLARAMOS VARIABLES DE ENTRADA
    double kilometros;
    double litros;

    //SOLICITAMOS AL USUARIO QUE INGRESE LOS KILOMETROS Y LITROS
    printf("Ingrese el numero de kilometros: ");
    scanf("%lf", &kilometros);
    printf("Ingrese el numero de litros: ");
    scanf("%lf", &litros);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    double rendimiento;
    double diferencia_abs;
    int eficiente;
    

    //PROCESOS MATEMATICOS Y LOGICOS
    rendimiento = kilometros / litros;
    if (eficiente){
        printf("Es eficiente\n");
    }else{
        printf("No es eficiente\n");
    }
    
    diferencia_abs = fabs(rendimiento - RENDIMIENTO_IDEAL);
    
    //PRESENTAMOS LOS RESULTADOS AL USUARIO
    printf("Su rendimiento es: %.2f km/l\n", rendimiento);
    printf("La diferencia con el ideal es: %.2f km/l\n", diferencia_abs);
    printf("Sigue adelante, cada litro cuenta");

}