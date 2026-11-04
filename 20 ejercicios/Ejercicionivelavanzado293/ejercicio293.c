#include <stdio.h>
const double HUMEDAD_MIN = 40.0;
const double TEMP_MAX = 35.0;
const double LLUVIA_MIN = 10.0;
const int  CICLO = 20;
int main(void){
    //DECLARAMOS VARIABLES DE ENTRADA 
    float humedad, temperatura, lluvia;
    char cultivo, fase;
    
    //SOLICITAMOS AL USUARIO QUE INGRESE LOS DATOS
    printf("Humedad del suelo:  ");
    scanf("%f", &humedad);
    printf("Temperatura en grados Celsius: ");
    scanf("%f", &temperatura);
    printf("Cultivo (C cereales, H hortalizas, F frutales): ");
    scanf(" %c", &cultivo);
    printf("Fase ( G germinacion , C crecimiento, F floracion, M maduracion): ");
    scanf(" %c", &fase);

    //DECLARAMOS VARIABLS PARA EL PROCESO
    int suelo_seco, sin_lluvia, hace_calor, fase_sensible, activar_riego;
    int tiempo_base = 0, tiempo_total = 0, ciclos = 0, resto = 0;

    //PROCESOS MATEMATICOS Y LOGICOS 

    suelo_seco = humedad < HUMEDAD_MIN;
    sin_lluvia = lluvia < LLUVIA_MIN;
    hace_calor = temperatura > TEMP_MAX;
    fase_sensible = (fase == 'G')|| (fase == 'F');
    activar_riego = suelo_seco && sin_lluvia;

       if (activar_riego) {
    
        if (cultivo == 'C') {
            tiempo_base = 30;
        } else {
            if (cultivo == 'H') {
                tiempo_base = 45;
            } else {
                tiempo_base = 60;   
            }
        }

        tiempo_total = tiempo_base;
        if (fase_sensible) {
            tiempo_total = tiempo_total + 15;   
        }
        if (hace_calor) {
            tiempo_total = tiempo_total + 10;   
        }
        ciclos = tiempo_total / CICLO;
        resto  = tiempo_total % CICLO;
    }

    // PRESENTAMOS LOS RESULTADOS AL USUARIO
    if (activar_riego) {
        printf("Estado del riego : ACTIVADO\n");
        printf("Tiempo total   %d minutos\n", tiempo_total);
        printf("Ciclos completos: %d\n", ciclos);
        printf("Resto : %d minutos\n", resto);
    } else {
        printf("Estado del riego : NO ACTIVADO\n");
    }

    return 0;
}

    
