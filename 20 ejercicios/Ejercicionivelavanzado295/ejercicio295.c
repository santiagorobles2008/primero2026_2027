#include <stdio.h>
const double VARIACIONMAX = 1.0;
const int TIEMPO_RESPUESTA = 5;
const int MINUTOS_HORA = 60;

int main (void){
    //DECLARAMOS VARIABLES DE ENTRADA
    float temp_actual, temp_objetivo, tolerancia;
    char tipo = ' ';
    char modo =' ';

    //SOLICITAMOS AL USUARIO QUE INGRESE LOS DATOS
    printf(" Temperatura actual en grado Celsius: ");
    scanf("%f", &temp_actual);
    printf("Temperatura objetivo en grados Celsius: ");
    scanf("%f", &temp_objetivo);
    printf("Tolerancia en grados celsius: ");
    scanf("%f", &tolerancia);
    printf("Tipo de sistema (R=refrigeracion, C=calefaccion, A=acondicionado): ");
    scanf(" %c", &tipo); 
    printf("Modo (A=automatico, M=manual): ");
    scanf(" %c", &modo);

    //DECLARAMOS VARIABLES PARA EL PROCESO 
    float diferencia_abs;
    int fuera_tolerancia, muy_caliente, muy_frio, tipo_correcto;
    int es_automatico, activar, ciclos;
    float diferencia;
    int tiempo_total, horas, resto_minutos;
    int contador_ops = +1;

    //PROCESOS MATEMATICOS Y LOGICOS
    diferencia = temp_actual - temp_objetivo;
    contador_ops = contador_ops + 1;
    if (diferencia < 0) {
        diferencia_abs = -diferencia;
    } else {
        diferencia_abs = diferencia;
    }
    contador_ops = contador_ops + 1;

    fuera_tolerancia = diferencia_abs > tolerancia;
    muy_caliente     = diferencia > 0;
    muy_frio         = diferencia < 0;
    tipo_correcto    = (muy_caliente && (tipo == 'R' || tipo == 'A')) || (muy_frio && (tipo == 'C' || tipo == 'A'));
    es_automatico    = (modo == 'A');
    activar          = fuera_tolerancia && tipo_correcto && es_automatico;
    contador_ops = contador_ops + 1;

    if (activar){
        ciclos = (int)(diferencia_abs/VARIACIONMAX);
        contador_ops = contador_ops + 1;

        tiempo_total = ciclos * TIEMPO_RESPUESTA;
        contador_ops = + 1;

        horas = tiempo_total / MINUTOS_HORA;
        resto_minutos = tiempo_total % MINUTOS_HORA;
        contador_ops =  contador_ops + 1;

    }
     if (activar) {
        printf("Estado del sistema : ACTIVADO\n");
        if (muy_caliente) {
            printf("Accion : ENFRIAR\n");
        } else {
            printf("Accion : CALENTAR\n");
        }
        printf("Diferencia: %.2f C\n", diferencia);
        printf("Ciclos necesarios: %d\n", ciclos);
        printf("Tiempo total estimado: %d minutos\n", tiempo_total);
        printf("Equivale a : %d h y %d min (resto)\n", horas, resto_minutos);
    } else {
        printf("Estado del sistema : NO ACTIVADO\n");
        printf("Diferencia:  %.2f C\n", diferencia);
    }
    printf("Operaciones realizadas : %d\n", contador_ops);
 
    return 0;
}