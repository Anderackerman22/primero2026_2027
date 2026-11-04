#include <stdio.h>

int main() {
    //constantes y variables
    double metros, pies, doble;
    const double METRO_PIES = 3.28084;

    printf("     FARMACIA - CONVERSION DE METROS     \n");
    printf("Ingrese la distancia en metros (real): ");
    scanf("%lf", &metros);
    
    //operaciones
    pies = metros * METRO_PIES;
    doble = pies * 2;

    //expresion logica 
    if (pies > 0) {
        printf("\nResultados del calculo:\n");
        printf("%.2f metros equivalen a %.5f pies.\n", metros, pies);
        printf("El doble del resultado es: %.5f pies.\n", doble);
    } else {
        printf("\n[Aviso] La distancia ingresada no es mayor a cero.\n");
    }

    //mensaje de confirmacion de la operacion
    printf("\nCONFIRMACION: Operacion realizada con exito.\n");
    return 0;
}