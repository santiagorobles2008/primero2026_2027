#include <stdio.h>
int main (void){
//DECLARAMOS VARIABLES
float peso = 0.0;
float altura = 0.0;
float imc = 0.0;

//SOLICITAMOS AL USUARIO QUE INGRESE SU PESO Y ALTURA PARA CALCULAR EL IMC
printf("Ingresa tu peso en kg:");
scanf("%f", &peso);
printf("Ingresa tu altura en m:");
scanf("%f", &altura);

//REALIZAMOS LOS PROCESOS MATEMATICOS Y APLICAMOS CONDICIONALES
imc = (peso / (altura * altura));
printf("IMC: %.2fkg/m^2\n", imc);
if (imc < 18.5){
    printf("Tu masa corporal se encuentra baja\n");
 }else if (imc > 25.0 ) {
    printf("Estas sobre el rango normal\n");
 }else{
    printf("Rango normal \n");
 }

}