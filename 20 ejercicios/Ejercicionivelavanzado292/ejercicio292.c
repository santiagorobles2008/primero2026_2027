#include <stdio.h>
//CONSTANTES 
const double PRECIO_CORTE = 15.0;
const double PRECIO_PEINADO = 25.0;
const double PRECIO_TRATAMIENTO = 50.0;
const double DESC_NINIO = 0.30; 
const double DESC_ADULTO_MAYOR = 0.20;
const double DESC_MARTES = 0.10;
const int NUMERO_CUOTAS = 3;

int main (void){
    //DECLARAMOS VARIABLES DE ENTRADA 
    char tipo_servicio, longitud_cabello, tipo_cliente, dia_semana;
    int urgencias;

    //SOLICITAMOS AL USUARIO QUE INGRESE LOS DATOS 
    printf(" TIPO DE SERVICIO ( C corte, P peinado, T tratamiento): ");
    scanf(" %c", &tipo_servicio);
    printf("LONGITUD DEL CABELLO (C corto, M mediano, L largo): ");
    scanf(" %c", &longitud_cabello);
    printf("TIPO DE CLIENTE (A adulto, N ninio, M adulto mayor): ");
    scanf(" %c", &tipo_cliente);
    printf("DIA DE LA SEMANA (L, Martes, X miercoles, J, V, S, D): ");
    scanf(" %c", &dia_semana);
    printf("ES URGENTE? (1 si, 0 no):  ");
    scanf("%d", &urgencias);

    //DECLARAMOS VARIABLES PARA EL PROCESOS 
    int corte, peinado, tratamiento, servicio_valido;
    int ninio, adulto_mayor, martes;
    double precio_base, descuento_cliente, descuente_dia;
    double descuento_total, monto_descuento, tarifa;
    int tarifa_centavos, valor_cuota, resto_centavos;
    
    //PROCESOS MATEMATICOS Y LOGICOS
    
    corte = (tipo_servicio == 'C');
    peinado = (tipo_servicio == 'P');
    tratamiento = (tipo_servicio == 'T');
    servicio_valido = (corte||peinado||tratamiento);

    ninio = (tipo_cliente == 'N');
    adulto_mayor = (tipo_cliente == 'M');
    martes = (dia_semana == 'M');

    precio_base = 0;
    descuento_cliente = 0;
    descuente_dia = 0;

    if(corte){
        precio_base = PRECIO_CORTE;
    }
    if (peinado){
        precio_base = PRECIO_PEINADO;
    }
    if(tratamiento){
        precio_base = PRECIO_TRATAMIENTO;
    }

    if (ninio){
        descuento_cliente = DESC_NINIO;
    }
    if(adulto_mayor){
        descuento_cliente = DESC_ADULTO_MAYOR;
    }
    if (martes){
        descuente_dia = DESC_MARTES;
    }
    
    
    descuento_total = descuento_cliente + descuente_dia;
    monto_descuento = precio_base * descuento_total;
    tarifa = precio_base - monto_descuento;

    tarifa_centavos = (int)(tarifa * 100 + 0.5);
    valor_cuota = tarifa_centavos / NUMERO_CUOTAS;
    resto_centavos = tarifa_centavos % NUMERO_CUOTAS;

    //PRESENTAMOS LOS RESULTADOS AL USUARIO
    if (servicio_valido) {
        printf("\nTARIFA A PAGAR:  %.2f\n", tarifa);
        printf("PAGO EN %d CUOTAS DE %.2f\n", NUMERO_CUOTAS, valor_cuota / 100.0);
        printf("RESTO DE LA DIVISION: %d CENTAVOS\n", resto_centavos);
    } else {
        printf("\nSERVICIO NO VALIDO\n");
    }
    if(urgencias){
        printf("URGENCIA: SI\n");
    }else{
        printf("URGENCIA: NO\n");
    }
    return 0;
}
