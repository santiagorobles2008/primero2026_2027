#include <stdio.h>
int main () {

    //DECLARAMOS CONSTANTES

    const float P_ATMOSFERICA = 101325.0;

    const float DENSIDAD_AGUA = 1000.0;

    const float GRAVEDA = 9.80665;



    //PROCESOS MATEMATICOS 

    float profundidad;

    float presion_hidro;

    float presion_pasc;

    float presion_atmos;


    //PEDIMOS AL USUARIO QUE INGRESE LOS DATOS

    printf("Ingrese la profundidad del agua (en metros): ");

    scanf("%f", &profundidad); 



    //PROCESOS MATEMATICOS

    presion_hidro = DENSIDAD_AGUA * GRAVEDA * profundidad;

    presion_pasc = P_ATMOSFERICA + presion_atmos;

    presion_atmos = presion_pasc / P_ATMOSFERICA;




    //PRESENTAMOS RESULTADOS

    printf("RESULTADOS DE LA PRESION");

    printf("Profundidad ingresada:  %.2f m\n", profundidad);

    printf("Presion hidrostatica:   %.2f Pa\n",presion_hidro);

    printf("Presion total en Pascales:  %.2f Pa\n", presion_pasc);

    printf("Presion total en Atmosferas:%.2f atm\n", presion_atmos);


    return 0;

}
