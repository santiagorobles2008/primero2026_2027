#include <stdio.h>
int main (void) {

// DECLARACION DE CONSTANTES Y VARIABLES 
double GALON_LITRO = 3.78541;
float PI = 3.14;
float galones = 0.0;

// VARIABLES PARA EL CALCULO DE LA CANTIDAD DE LITROS
float litros = 0.0;
float resultado_pi;

//PEDIMOS AL USUARIO QUE INGRESE LA VOLUMEN DE GALONES
printf ("Ingrese el volumen de los  galones:");
scanf ( "%f", &galones);

// CALCULAMOS LA CANTIDAD DE LITROS Y LA CONDICION
litros = galones * GALON_LITRO;

if (litros > 0) {
    printf("%.2f galones equivalen a %.2f litros\n", galones, litros);
    resultado_pi = litros * PI;
    printf ("Operacion realizada: Multiplicación de los litros por PI \n");
    printf ("Resultado del producto es %.2f\n", resultado_pi);
}else{ 
    printf("Los datos ingresados son incorrectos");
}
}
