#include <stdio.h>

int main() {
    //variables y constantes
    int edad_humana, edad_canina;
    const int FACTOR_CANINO = 7;
    int valor_minimo;

    printf("   CALCULO DE EDAD CANINA    \n");
    printf("Ingrese la edad humana: ");
    scanf("%d", &edad_humana);

    //expresion logica
    if (edad_humana > 0) {
        edad_canina = edad_humana * FACTOR_CANINO;

        valor_minimo = edad_humana;
        if (FACTOR_CANINO < valor_minimo) {
            valor_minimo = FACTOR_CANINO;
        }
        if (edad_canina < valor_minimo) {
            valor_minimo = edad_canina;
        }

        printf("\nResultados del calculo:\n");
        printf("%d anios humanos equivalen a %d anios caninos.\n", edad_humana, edad_canina);
        printf("El valor minimo de todas las variables utilizadas es: %d\n", valor_minimo);
    } else {
        printf("\n[Error de validacion] La edad debe ser mayor a cero. No se permiten valores negativos.\n");
    }

    //mensaje de operacion exitosa
    printf("\nCONFIRMACION: Operacion realizada con exito.\n");
    return 0;
}