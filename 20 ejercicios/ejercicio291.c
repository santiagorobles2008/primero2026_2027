#include <stdio.h>

int main () {

// DECLARAMOS VARIABLES Y CONSTANTES
float monto_usd = 0.0;
const float USD_EUR = 0.92;
const float USD_MXN = 17.50;
const float USD_COP = 4100.0;

//DECLARAMOS VARIABLES PARA LOS PROCESOS MATEMATICOS 
float monto_eur = 0.0;
float monto_mxn = 0.0;
float monto_cop = 0.0;
int es_mayor_cero = 0;
int esta_en_rango = 0;

//ENTRADA DE DATOS POR PARTE DEL USUARIOS
printf("INGRESE EL MONTO EN DOLARES :");
scanf("%f", &monto_usd);

//PROCESOS MATEMATICOS DE CONVERSION
monto_eur = monto_usd * USD_EUR;
monto_mxn = monto_usd * USD_MXN;
monto_cop = monto_usd * USD_COP;

//PROCESOS LOGICOS 
es_mayor_cero = (monto_usd > 0 );
esta_en_rango = (monto_usd >= 100 && monto_usd <= 1000);

//PRESENTAMOS LOS RESULTADOS AL USUARIO
printf("Euros: %.2f\n", monto_eur);
printf("Pesos Mexicanos: %.2f\n", monto_mxn);
printf("Pesos Colombianos: %.2f\n", monto_cop);
printf("Es mayor a cero (1=Si, 0=No): %d\n", es_mayor_cero);
printf("Esta dentro del rango (1=Si 0=No): %d\n", esta_en_rango);

return 0;
}
