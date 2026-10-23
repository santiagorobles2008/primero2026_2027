#include <stdio.h>

void main() {
    int anio, mes, dia = 0.0;
    int DIVISOR = 7;
    int diasSemana = -1;
    int AJUSTE_MES = 12;
    

    printf("Ingrese el anio. \n");
    scanf("%d", &anio);

    printf("Ingrese el mes enero 1, feb 2, etc. \n");
    scanf("%d", &mes);

    printf("Ingrese el dia en valor numerico. \n");
    scanf("%d", &dia);

    if(mes > 0 && mes <= 2){
        mes = mes + AJUSTE_MES;
        anio = anio - 1;

    }

    int k = anio % 100;
    int j = anio / 100;


    diasSemana = (dia + (13 * (mes + 1)) / 5 + k + (k / 4) + (j / 4) + (5 * j)) % DIVISOR;

    printf("El dia de la semana es: %d \n", diasSemana);

}