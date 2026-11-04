#include<stdio.h>
int main() {
//Constantes
const double descuento_contado = 0.10;
const double interes_financiamiento = 0.18;
const double iva = 0.15;
//Variables
float ancho = 0.0;
float largo = 0.0;
float precio_m2 = 0.0;

printf("Por favor, ingrese el largo del terrero: \n");
scanf("%f", &largo);

printf("Por favor, ingrese el ancho del terreno: \n");
scanf("%f", &ancho);

printf("Por favor, ingrese el precio_m2 del terreno: \n");
scanf("%f", &precio_m2);
//operandos 
float area = largo * ancho;
float precio_base = area * precio_m2;
float precio_contado = precio_base * (1 - descuento_contado);
float precio_financiado = precio_base * (1 + interes_financiamiento);
float precio_contado_iva = precio_contado * (1 + iva);
float precio_financiado_iva = precio_financiado * (1 + iva);
//resultados 

printf("El area del terreno es %.2f \n", area);
printf("El precio base es %.2f \n", precio_base);
printf("El precio contado es %.2f \n", precio_contado);
printf("El precio financiado es %.2f \n", precio_financiado);
printf("El precio contado iva es %.2f \n", precio_contado_iva);
printf("El precio financiado iva es %.2f \n", precio_financiado_iva);
//condicion 
if(precio_contado_iva < precio_financiado_iva) {
    printf("El precio contado es menor que el precio financiado\n");

} else {
    printf("El precio contado no es menor que el precio financiado\n");
        
}
return 0;
}


