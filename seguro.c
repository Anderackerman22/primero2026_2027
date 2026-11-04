#include <stdio.h>
#include <stdbool.h>
#include <math.h> 
#include <string.h>

int main(){
    //Constantes y variables 
    const double tasa_base = 0.05;
    const double recargo_joven = 0.20;
    const double desc_experiencia = 0.10;
    const int edad_joven = 25;
    const int anios_experiencia = 5;
    int edad = 0;
    int experiencia = 0;
    double valor_auto = 0.0;
    double seguro_base = 0.0;
    double recargo = 0.0;
    double descuento = 0.0;
    double cobertura_costo = 0.0;
    double precio_final = 0.0;
    double log_precio = 0.0;
    char tipo_cobertura = 'B';

    printf("Ingrese la edad del conductor: ");
    scanf("%d", &edad);
    printf("Ingrese los anios de experiencia: ");
    scanf("%d", &experiencia);
    printf("Ingrese el valor del auto: ");
    scanf("%lf", &valor_auto);
    printf("Escriba el tipo de cobertura ('B' basica, 'C' completa, 'P' premium)\n: ");
    scanf(" %c", &tipo_cobertura);

    seguro_base = valor_auto * tasa_base;

    if (edad <= edad_joven){
        recargo = seguro_base * recargo_joven;
    }else {
        recargo = 0.0;
    }

    if (experiencia >= anios_experiencia){
        descuento = seguro_base * desc_experiencia;
    }else{
        descuento = 0.0;
    }

    if (tipo_cobertura == 'C' || tipo_cobertura == 'c'){
        cobertura_costo = 50.0;
    }else if (tipo_cobertura == 'P' || tipo_cobertura == 'p'){
        cobertura_costo = 100.0;

    }else {
        cobertura_costo = 0.0;
    }

    precio_final = seguro_base + recargo - descuento + cobertura_costo;
    log_precio = log10(precio_final);

    printf("\nDETALLE DE SEGURO DE AUTO\n");
    printf("Seguro base: %.2f\n", seguro_base);
    printf("Recargo Joven: %.2f\n", recargo);
    printf("Descuento experiencia: %.2f\n", desc_experiencia);
    printf("Costo de cobertura: %.2f\n", cobertura_costo);
    printf("Precio final: %.2f\n", precio_final);
    printf("Log10 (Precio final): %.4f\n", log_precio);

    return 0;
}