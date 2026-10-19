#include <stdio.h>

void main() {

//Presentar Variables y constantes
int CONVERSION_GB_MB = 1024;
int cant_doc = 0;
float tam_doc = 0.0;
int cant_img = 0;
float tam_img = 0.0;
int cant_vid = 0;
float tam_vid = 0.0;
int cant_prgm = 0;
float tam_prgm = 0.0;
float gb_disco = 0.0;

//Variables para los procesos matematicos
float espacio_doc = 0.0;
float espacio_img = 0.0;
float espacio_vid = 0.0;
float espacio_prgm = 0.0;
float espacio_total_mb = 0.0;
float espacio_total_gb = 0.0;
float porcentaje_almacenamiento = 0.0;

//Solicitamos al usuario la cantidad y tamaño de cada archivo
printf("Por favor ingresa la cantidad de documentos:");
scanf("%d", &cant_doc);
printf("Por favor ingresa el tamaño de los documentos:");
scanf("%f", &tam_doc);

printf("Por favor ingresa la cantidad de imagenes:");
scanf("%d", &cant_img);
printf("Por favor ingresa el tamaño de las imagenes:");
scanf("%f", &tam_img);

printf("Por favor ingresa la cantidad de videos:");
scanf("%d", &cant_vid);
printf("Por favor ingresa el tamaño de los videos:");
scanf("%f", &tam_vid);

printf("Por favor ingresa la cantidad de programas:");
scanf("%d", &cant_prgm);
printf("Por favor ingresa el tamaño de los programas:");
scanf("%f", &tam_prgm);

printf("Por favor ingresa la capacidad del disco en GB:");
scanf("%f", &gb_disco);

//Realizamos procesos matematicos para obtener el espacio de los archivos en GB y el porcentaje de almacenamiento
espacio_doc = cant_doc * tam_doc;
espacio_img = cant_img * tam_img;
espacio_vid = cant_vid * tam_vid;
espacio_prgm = cant_prgm * tam_prgm;
espacio_total_mb = espacio_doc + espacio_img + espacio_vid + espacio_prgm;
espacio_total_gb = espacio_total_mb / CONVERSION_GB_MB;
porcentaje_almacenamiento = (espacio_total_gb / gb_disco) * 100;

//Presentamos los resultados al ususuario
printf("1. El espacio total ocupado por los documentos es: %f MB \n", espacio_doc);
printf("2. El espacio total ocupado por las imagenes es: %f MB \n", espacio_img);
printf("3. El espacio total ocupado por los videos es: %f MB \n", espacio_vid);
printf("4. El espacio total ocupado por los programas es: %f MB \n", espacio_prgm);
printf("5. El espacio total ocupado por todos los archivos calculados en MB es: %f MB \n", espacio_total_mb);
printf("6. El espacio total ocupado por todos los archivos calculados en GB es: %f GB \n", espacio_total_gb);
printf("7. El porcentaje de almacenamiento ocupado es: %f \n", porcentaje_almacenamiento);


}