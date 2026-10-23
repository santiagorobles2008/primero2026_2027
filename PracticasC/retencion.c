#include <stdio.h>
//#include <string.h>

void main () {
/*Crear un sistema que pida el valor total de la factura y de que tipo es: si es por servivcio profecionales se retiene el 10%,
si es por servicios educativos el 8% se debe devolver el valor retenido*/

// Declaramos variables y constantes
float valor_fac = 0.0;
int seleccion = 0;//1 para profesionale y 2 para educativo
float PROFESIONAL = 0.1;
float EDUCATIVO = 0.08;
float retencion = 0.0;

printf("Ingrese el valor de la factura: ");
scanf("%f", &valor_fac);

printf("Ingrese el tipo de factura \n1. Profesional \n2. Educativo \n");
scanf("%d", &seleccion);

printf("\n MENU DE OPCINES: \n");
if ( seleccion == 1 ){
    retencion = valor_fac * PROFESIONAL;
} else if ( seleccion == 2 ){
    retencion = valor_fac * EDUCATIVO;
}else{
    printf("Opcion no valida \n");
}

printf("El valor de la retencion es: $ %.2f \n", retencion);

}