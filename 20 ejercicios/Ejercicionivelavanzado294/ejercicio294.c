#include <stdio.h>
const double PRECIO_CARTA = 25.0;
const double PRECIO_BUFFET = 20.0;
const double PRECIO_EJECUTIVO = 12.0;
const double DESC_ALMUERZO = 0.10;
const double RECARGO_CENA = 1.2;
const double RECARGO_FIN_SEMANA = 1.15;
const double PRECIO_BEBIDA = 3.0;
const int PERSONAS_MESA = 4;

int main (void){
    //DECLARAMOS VARIABLES DE ENTRADA
    int personas;
    char menu = ' ';
    char dia = ' ';
    int hora;
    int bebidas;

    //SOLICITAMOS AL USUARIO QUE INGRESE LOS DATOS
    printf("Numero de personas: ");
    scanf("%d", &personas);
    printf("Menu ( A= a la carta, B= buffet, E=ejecutivo): ");
    scanf(" %c", &menu);
    printf("Dia (L, M, X, J, V, S, D): ");
    scanf(" %c",&dia);
    printf("Hora (0-23): ");
    scanf("%d",&hora);
    printf("Bebidas (1= si 0= no): ");
    scanf("%d", &bebidas);

    //DECLARAMOS VARIABLES PARA EL PROCESO
    float precio_unitario;
    float costo_comida;
    float costo_bebidas;
    float subtotal;
    float descuento;
    int es_almuerzo , es_cena, es_fin_semana;
    float costo_total;
    int mesas;
    int resto_personas;

    //PROCESOS MATEMATICOS Y LOGICOS
    es_almuerzo = (hora >= 12) && (hora <= 15);
    es_cena = hora >= 19;
    es_fin_semana = (dia == 'S') || (dia == 'D');

    if (menu == 'A') {
        precio_unitario = PRECIO_CARTA;
    } else {
        if (menu == 'B') {
            precio_unitario = PRECIO_BUFFET;
        } else {
            precio_unitario = PRECIO_EJECUTIVO;
        }
    }
    costo_comida = personas * precio_unitario;
 
    if (bebidas == 1) {
        costo_bebidas = personas * PRECIO_BEBIDA;
    }
 
    subtotal = costo_comida + costo_bebidas;
 
    if (es_almuerzo) {
        descuento = subtotal * DESC_ALMUERZO;
    }
    costo_total = subtotal - descuento;
 
    if (es_cena) {
        costo_total = costo_total * RECARGO_CENA;
    }
    if (es_fin_semana) {
        costo_total = costo_total * RECARGO_FIN_SEMANA;
    }
    mesas = personas / PERSONAS_MESA;
    resto_personas =  personas % PERSONAS_MESA;

    //PRESENTAMOS LOS RESULTADO AL USUARIO
     printf("Personas  : %d\n", personas);
    printf("Precio por persona  : %.2f\n", precio_unitario);
    printf("Costo comida  : %.2f\n", costo_comida);
    printf("Costo bebidas : %.2f\n", costo_bebidas);
    printf("Descuento almuerzo  : %.2f\n", descuento);
    if (es_cena) {
        printf("Recargo cena  : SI (x%.2f)\n", RECARGO_CENA);
    } else {
        printf("Recargo cena : NO\n");
    }
    if (es_fin_semana) {
        printf("Recargo fin semana  : SI (x%.2f)\n", RECARGO_FIN_SEMANA);
    } else {
        printf("Recargo fin semana  : NO\n");
    }
    printf("COSTO TOTAL  : %.2f\n", costo_total);
    printf("Mesas completas : %d (de %d personas)\n", mesas, PERSONAS_MESA);
    printf("Personas sobrantes : %d\n", resto_personas);
 
    return 0;
 
}