#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(){
    //Constantes y variables 
    const double precio_gb = 0.50;
    const double precio_mbps = 1.0;
    const double desc_empresa = 0.15;
    const double exceso_gb = 1.5;
    const int gb_incluidos = 100;

    double gb_consumidos = 0.0;
    int velocidad = 0;
    char tipo_cliente = 'R';

    double costo_base = 0.0;
    double costo_exceso = 0.0;
    double subtotal = 0.0;
    double descuento_monto = 0.0;
    double costo_total = 0.0;
    double log_costo = 0.0;
    int contador_operaciones = 0;

    printf("Ingrese los GB consumidos: ");
    scanf(" %lf", &gb_consumidos);
    contador_operaciones++;

    printf("Ingrese la valocidad contrata (Mbps): ");
    scanf(" %d", &velocidad);
    contador_operaciones++;

    printf("Ingrese el tipo de cliente ('R' residencial, 'E' empresa): ");
    scanf(" %c", &tipo_cliente);
    contador_operaciones++;

    costo_base = (gb_consumidos * precio_gb) + (velocidad * precio_mbps);
    contador_operaciones += 2;

    if (gb_consumidos > gb_incluidos){
        costo_exceso = (gb_consumidos - gb_incluidos) * exceso_gb;
        contador_operaciones += 2;


    }else {
        costo_exceso = 0.0;
    }

    subtotal = costo_base + costo_exceso;
    contador_operaciones++;

    if(tipo_cliente == 'E' || tipo_cliente == 'e'){
        descuento_monto = subtotal * desc_empresa;
        contador_operaciones++;
    }else{
        descuento_monto = 0.0;
    }

    costo_total = subtotal - descuento_monto;
    contador_operaciones++;

    log_costo = log10(costo_total);
    contador_operaciones += 2;

    printf("\n DETALLE DE INTERNET \n");
    printf("Costo Base: %.2f\n", costo_base);
    printf("Costo por exceso: %.2f\n", costo_exceso);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Descuento Empresa: %.2f\n", descuento_monto);
    printf("Costo total mensual: %.2f\n", costo_total);
    printf("Log10(Costo Total): %.2f\n", log_costo);
    printf("Operaciones contadas: %d\n", contador_operaciones);

    return 0;

}