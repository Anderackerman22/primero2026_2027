#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){
    //Varibles y constantes 
    const double desc_lunes = 0.10;
    const double desc_grupo = 0.15;
    const double IVA = 0.15;
    const double propina = 0.10;
    const int min_grupo = 6;

    double consumo = 0.0;
    char dia_semana = 'L';
    int cant_personas = 0;

    double desc_lunes_monto = 0.0;
    double desc_grupo_monto = 0.0;
    double subtotal = 0.0;
    double monto_iva = 0.0;
    double monto_propina = 0.0;
    double total_pagar = 0.0;
    double log_total = 0.0;

    printf("Ingrese el valor del consumo: ");
    scanf("%lf", &consumo);
    printf("Ingresa el dia de la semana ('L', 'M', 'X', 'J', 'V', 'S', 'D'): ");
    scanf(" %c", &dia_semana);
    printf("Ingrese la cantidad de personas: ");
    scanf("%d", &cant_personas);

    //evaluacion logica para el descuento 
    if (dia_semana == 'L' || dia_semana == 'l'){
        desc_lunes_monto = consumo * desc_lunes;
    }else {
        desc_lunes_monto = 0.0;

    }
    if (cant_personas >= min_grupo){
        desc_grupo_monto = consumo * desc_grupo;
    }else {
        desc_grupo_monto = 0.0;
    }

    subtotal = consumo - desc_lunes_monto - desc_grupo_monto;
    monto_iva = subtotal * IVA; 
    monto_propina = subtotal * propina;
    total_pagar = subtotal + monto_iva + monto_propina;
    log_total = log10(total_pagar);

    printf("\n DESGLOSE DE DATOS \n");
    printf("Consumo base: $%.2f\n", consumo);
    printf("Descuento por Lunes: $%.2f\n", desc_lunes_monto);
    printf("Descuento por grupo: $%.2f\n", desc_grupo_monto);
    printf("Subtotal descuentos: $%.2f\n", subtotal);
    printf("IVA (15%%): $%.2f\n", monto_iva);
    printf("Propina (10%%): $%.2f\n", monto_propina);
    printf("Total a pagar: $%.2f\n", total_pagar);
    printf("Log10(Total Pagar): %.4f\n", log_total);

    printf("\n RESUMEN DE DATOS \n");
    printf("Consumo registrado: %.2f\n", consumo);
    printf("Dia de la semana: %c\n", dia_semana);
    printf("Cantidad de personas: %d\n", cant_personas);

    return 0;


}