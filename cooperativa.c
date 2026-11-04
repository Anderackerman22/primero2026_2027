#include <stdio.h>

int main() {
    double pies, metros;
    const double PIE_METRO = 0.3048;

    printf("   COOPERATIVA - SISTEMA DE CONVERSION   \n");
    printf("Ingrese la altura en pies (real): ");
    scanf("%lf", &pies);

    metros = pies * PIE_METRO;

    if (metros > 0) {
        printf("\n%.2f pies equivalen a %.4f metros\n", pies, metros);

        int entero_metros = (int)metros;
        if (entero_metros % 2 == 0) {
            printf("La parte entera del resultado (%d) es PAR.\n", entero_metros);
        } else {
            printf("La parte entera del resultado (%d) es IMPAR.\n", entero_metros);
        }
    } else {
        printf("\nLa altura ingresada no es mayor a cero.\n");
    }

    printf("\nEjecucion del algoritmo finalizada con exito.\n");
    return 0;
}