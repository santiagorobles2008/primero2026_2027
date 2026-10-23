#include <stdio.h>

int main() {
    int MAYOR = 18;
    int edad = 19;
    float sueldo, impuesto = 0.0;
    char* salida = "Eres menor de edad";

    if (edad >= MAYOR) {
        salida = "Eres mayor de edad y ganas: 700 ";
    }
    
    printf( salida);

}