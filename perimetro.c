#include <stdio.h>

int main() {
    //varibales
    double lado1, lado2, lado3, perimetro;
    int resto;

    printf("  EMPRESA DE TRANSPORTE - TRIANGULO      \n");
    printf("Ingrese el lado 1 (real): ");
    scanf("%lf", &lado1);
    printf("Ingrese el lado 2 (real): ");
    scanf("%lf", &lado2);
    printf("Ingrese el lado 3 (real): ");
    scanf("%lf", &lado3);

    //evaluacion logica
    if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
        perimetro = lado1 + lado2 + lado3;
        resto = (int)perimetro % 5;

        printf("\nResultados del calculo:\n");
        printf("El perimetro del triangulo es: %.2f\n", perimetro);
        printf("El resto de la division adicional (perimetro %% 5) es: %d\n", resto);
    } else {
        printf("\n[Error] Todos los lados deben ser mayores a cero.\n");
    }

    printf("\nCONFIRMACION: Operacion realizada con exito.\n");
    return 0;
}