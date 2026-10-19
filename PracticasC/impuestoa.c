#include <stdio.h>

void main() {
    float IVA = 0.5;
    int num_product = 0;
    float precio = 0.0;
    float total = 0.0;
    float subtotal = 0.0;
    
    /*printf("Por favor ingresa la cantidad de productos: ");
    scanf("%d", &num_product);*/

    printf("Por favor ingresa la cantidad de productos: ");
    scanf("%d", &num_product);

    printf("Por favor ingrese el precio: ");
    scanf("%f", &precio);

    subtotal = num_product * precio;
    total = subtotal + (subtotal * IVA);

    printf("El valor a pagar es %f \n", total);


  
}