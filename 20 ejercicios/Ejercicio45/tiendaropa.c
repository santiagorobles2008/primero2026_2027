#include <stdio.h>
const int DIVISOR = 2;

int main(void){
    //DECLARACION DE VARIABLES
    int c;
    int triple;
    int es_par;
    int es_positivo;
    int es_par_positivo;

    //SOLICITAMOS AL USUARIO QUE INGRESE LOS DATOS
    printf("Ingrese un numero entero: ");
    scanf("%d", &c);

    //PROCESOS MATEMATICOS Y LOGICOS
    es_par = c % DIVISOR == 0;
    es_positivo = c > 0;
    es_par_positivo = es_par && es_positivo;

    //MOSTRAMOS RESULTADOS
    if (es_par_positivo){
        printf("El numero %d es par y positivo \n", c);
    }else{ 
        printf("El numero %d no es par y positivo \n", c);
    }

    if (c > 0){
        triple = c * 3;
        printf("El triple de %d es %d \n",c, triple);
    }else{
        printf("No se calcula el triple por que el numero no es positivo \n");
    }
    printf("Fin del programa \n");
return 0;

}