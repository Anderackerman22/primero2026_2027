#include <stdio.h>

int main() {
    //constantes y variables
    const double PI = 3.14159265;
    const char LIMITE_INF = 'A';
    const char LIMITE_SUP = 'Z';
    char y = ' ';
    int es_mayuscula = 0; // En C se usa int (0 o 1) para representar booleanos
    double producto_pi = 0.0;

    printf("Ingrese un caracter por teclado: ");
    scanf(" %c", &y); // Espacio para limpiar el buffer de entrada

    //Evaluación lógica (y >= 'A' && y <= 'Z')
    es_mayuscula = (y >= LIMITE_INF && y <= LIMITE_SUP);

    printf("\n IDENTIFICACION DE TIPOS DE DATOS \n");
    printf("Variable 'y'            -> Tipo de dato: Caracter (char)\n");
    printf("Variable 'es_mayuscula' -> Tipo de dato: Booleano / Entero (bool/int)\n");

    printf("\n RESULTADO DE EVALUACION \n");
    if (es_mayuscula) {
        printf("El caracter '%c' SI es una letra mayuscula.\n", y);
    } else {
        printf("El caracter '%c' NO es una letra mayuscula.\n", y);
    }

    producto_pi = es_mayuscula * PI;

    // Salida de la operación secundaria y mensaje informativo
    printf("\n--- OPERACION SECUNDARIA ---\n");
    printf("Tipo de operacion realizada: Producto escalar del valor booleano (1 o 0) por la constante matematica PI.\n");
    printf("Resultado de (es_mayuscula * PI): %.6f\n", producto_pi);

    return 0;
}