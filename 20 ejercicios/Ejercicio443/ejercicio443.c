#include <stdio.h>

const int  INICIO_SIGLO_XXI = 2001;
const int FIN_SIGLO_XXI = 2100;

int main (void) {
    //DECLARAMOS VARIABLES DE ENTRADA
    int anio;

    //SOLICITAMOS AL USUARIO QUE INGRESE EL AÑO
    printf("Ingrese un anio");
    scanf("%d", &anio);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    int es_siglo_xxi;
    int anio_del_siglo;
    long factorial;
     
    //PROCESOS MATEMATICOS Y LOGICOS
    es_siglo_xxi = (anio >= INICIO_SIGLO_XXI && anio <= FIN_SIGLO_XXI);
    if (es_siglo_xxi){
        printf("El anio %d si pertenece al siglo XXI\n", anio);

        anio_del_siglo = anio - INICIO_SIGLO_XXI + 1;
        printf("Valor intermedio: anio_del_siglo = %d\n", anio_del_siglo);

        if (anio_del_siglo > 0 && anio_del_siglo < 10){
            factorial = 1;
            printf("Valor intermedio: factorial = %ld\n", factorial);
            
            if (anio_del_siglo >= 2){
                factorial = factorial * 2;
                printf("Valor intermedio:factorial * 2 = %ld\n", factorial);
            }
            if (anio_del_siglo >= 3){
                factorial = factorial * 3;
                printf("Valor intermedio:factorial * 3 = %ld\n", factorial);
            }
            if (anio_del_siglo >= 4){
                factorial = factorial * 4;
                printf("Valor intermedio:factorial * 4 = %ld\n", factorial);
            }
            if (anio_del_siglo >= 5){
                factorial = factorial * 5;
                printf("Valor intermedio:factorial * 5 = %ld\n", factorial);
            }
            if (anio_del_siglo >= 6){
                factorial = factorial * 6;
                printf("Valor intermedio:factorial * 6 = %ld\n", factorial);
            }
            if (anio_del_siglo >= 7){
                factorial = factorial * 7;
                printf("Valor intermedio:factorial * 7 = %ld\n", factorial);
            }
            if (anio_del_siglo >= 8){
                factorial = factorial * 8;
                printf("Valor intermedio:factorial * 8 = %ld\n", factorial);
            }
            if (anio_del_siglo >= 9){
                factorial = factorial * 9;
                printf("Valor intermedio:factorial * 9 = %ld\n", factorial);
            }
            printf("El factorial de %d es %ld\n", anio_del_siglo, factorial);
        }else{
            printf("No se calcula el factorial ( anio_del_siglo debe estar entre 1 y 9)\n");
        }  
    }else{
        printf("El anio %d no pertenece al siglo XXI\n", anio);
    }
    return 0;

}