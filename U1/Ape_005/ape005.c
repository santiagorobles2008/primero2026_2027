#include <stdio.h>
int main () {

//DECLARAMOS VARIABLES Y CONSTANTES
float c1 = 0.0;
float c2 = 0.0;
float n_l = 0.0;
float c3 = 0.0;
const float NOTA_FINAL_APROBACION = 60.0;
const int NUMERO_CERTAMENES = 3;

// INGRESO DE DATOS POR EL USUARIO
printf("INGRESA LA NOTA DE TU CERTAMEN 1 :");
scanf("%f", &c1);    
printf("INGRESA LA NOTA DE TU CERTAMEN 2 :");
scanf("%f", &c2);
printf("INGRESA LA NOTA DE LABORATORIO : ");
scanf("%f", &n_l);

// REALIZAMOS PROCESOS MATEMATICOS
c3 = (NUMERO_CERTAMENES * (( NOTA_FINAL_APROBACION - ( n_l * 0.3)) / 0.7) - c1 - c2);


//SALIDA DE DATOS
if (c3 <=0) {
    printf("YA APRUEBAS CON LAS NOTAS ACTUALES ,");
} else {
    printf(" LA NOTA MINIMA QUE SE NECESITA SACAR EN EL CERTAMEN 3 ES: %.2f\n ", c3);
    
}


return 0;

}