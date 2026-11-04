#include <stdio.h>
#include <math.h>

const int INDICE = 2;

//FUNCiON QUE CALCULA LA RAIZ CUADRADA DEL NUMERO INGRESADO
double raiz_cuadrada(double n)
{
    return pow (n, 1.0 / INDICE);
}

int main (void)
{
    //DECLARACION DE VARIABLES
    double numero;
    double raiz;
    int entero;
    long factorial;

    //SOLICITAMOS AL USUARIO QUE INGRESE EL NUMERO
    printf("Ingrese un numero real positivo: ");
    scanf("%lf", &numero);

    //VALIDACION DE QUE EL NUMERO SEA POSITIVO
    if (numero > 0) {
        //CALCULAMOS LA RAIZ CUADRADA
        raiz = raiz_cuadrada(numero);

        //MOSTRAMOS EL RESULTADO
        printf("La raiz cuadrada de  %.4f es %.4f \n", numero, raiz);

        //RAIZ REDONDEADA A ENTERO
        entero = (int)(raiz + 0.5);

        //APLICAMOS CONDICION PARA EL CALCULO DEL FACTORIAL
        if (fabs(raiz - entero) < 0.0001 && entero >= 1 && entero < 10){
            factorial = 1;
            if (entero >= 2) {factorial = factorial * 2 ;}
            if (entero >= 3) {factorial = factorial * 3 ;}
            if (entero >= 4) {factorial = factorial * 4 ;}
            if (entero >= 5) {factorial = factorial * 5 ;}
            if (entero >= 6) {factorial = factorial * 6 ;}
            if (entero >= 7) {factorial = factorial * 7 ;}
            if (entero >= 8) {factorial = factorial * 8 ;}
            if (entero >= 9) {factorial = factorial * 9 ;}

            printf("El factorial de %d es %ld \n", entero, factorial);
        } else {
            printf("No aplica factorial \n");
        }

    }else{
        printf("Error: el numero debe ser mayor que 0\n");
    }
    return 0;
}