#include <stdio.h>

int main() {
    //variable y constante
    int a;
    const int LIMITE = 10;

    printf("  SISTEMA DE CALCULO Y TABLA DE ROPA     \n");
    printf("Ingrese un numero entero por teclado: ");
    scanf("%d", &a);

    printf("\nIniciando calculo de la tabla hasta el limite %d...\n\n", LIMITE);

    for (int i = 1; i <= LIMITE; i++) {
        int producto = a * i;
        printf("-> %d x %d = %d\n", a, i, producto);

        if (producto > 0) {
            int triple = producto * 3;
            printf("   [Info] El producto es positivo. Su triple es: %d\n", triple);
        }
    }

    printf("\nProceso finalizado con exito.\n");
    return 0;
}