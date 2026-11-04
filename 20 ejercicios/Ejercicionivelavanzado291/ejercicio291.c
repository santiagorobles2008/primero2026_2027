#include <stdio.h>
#include <string.h>

const double FACTOR_ACTIVIDAD_BAJA = 1.2;
const double FACTOR_ACTIVIDAD_MEDIA = 1.55;
const double FACTOR_ACTIVIDAD_ALTA = 1.9;
const int COMIDAS_POR_DIA = 3;

int main(void){
    //DECLARAMOS VARIABLES DE ENTRADA
    double peso;
    double altura;
    int edad;
    char sexo;
    char objetivo;

    //SOLICITAMOS AL USUARIO QUE INGRESE LOS DATOS
    printf("Ingrese el peso en kg: ");
    scanf("%lf", &peso);
    printf("Ingrese la altura en metros: ");
    scanf("%lf", &altura);
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    printf("Ingrese el sexo M(masculino) o F(femenino): ");
    scanf(" %c",&sexo);
    printf("Ingrese el objetivo P(perder), G(ganar), M(mantener): ");
    scanf(" %c", &objetivo);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    double metabolismo_basal, calorias_dia;
    int calorias_enteras, calorias_por_comida, resto_calorias;
    char tipo_dieta [30];
    int perder, ganar, mantener, invalido;

    //PROCESOS MATEMATICOS Y LOGICOS
    metabolismo_basal = 10 * peso + 6.25 * altura - 5 * edad + 5;

    perder = (objetivo == 'P');
    ganar = (objetivo == 'G');
    mantener = (objetivo == 'M');
    invalido = !(perder ||ganar ||mantener);

    if (perder){
        calorias_dia = metabolismo_basal * FACTOR_ACTIVIDAD_BAJA;
        strcpy( tipo_dieta, "Perder peso");
    }
    if (ganar){
        calorias_dia = metabolismo_basal * FACTOR_ACTIVIDAD_ALTA;
        strcpy( tipo_dieta, "Ganar peso");
    }
    if (mantener){
         calorias_dia = metabolismo_basal * FACTOR_ACTIVIDAD_MEDIA;
         strcpy(tipo_dieta, "Mantener peso");    
    }
    if (invalido){
        calorias_dia = 0;
        strcpy(tipo_dieta, "Objetivo no valido");
    }

    calorias_enteras = (int)(calorias_dia + 0.5);
    calorias_por_comida = calorias_enteras / COMIDAS_POR_DIA;
    resto_calorias = calorias_enteras % COMIDAS_POR_DIA;

    //PRESENTAMOS LOS RESULTADOS AL USUARIO 
    printf("\nDieta recomendada: %s\n", tipo_dieta);
    printf("Calorias diarias: %d kcal\n", calorias_enteras);
    printf("Reparto en %d comidas: %d kcal por comida\n", COMIDAS_POR_DIA, calorias_por_comida);
    printf("Resto de la division: %d kcal\n", resto_calorias);

    //RESUMEN DE LOS DATOS INGERESADOS 
    printf("\n------RESUMEN DE LOS DATOS INGRESADOS------\n");
    printf("Peso: %.2f kg\n", peso);
    printf("Altura: %.2f m\n",altura);
    printf("Edad: %d anios\n", edad);
    printf("Sexo: %c\n",sexo);
    printf("Objetivo: %c\n", objetivo);

    return 0;

}