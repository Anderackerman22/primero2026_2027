#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, u;
    int residuo1, residuo2;
    bool es_par_n, es_par_u;
    int cubo_n, cubo_u;

    printf("[INICIO] Sistema de analisis de paridad\n");
    printf("Ingrese el primer valor entero (n): ");
    scanf("%d", &n);
    printf("Ingrese el segundo valor entero (u): ");
    scanf("%d", &u);

    residuo1 = n % 2;
    residuo2 = u % 2;

    es_par_n = (residuo1 == 0);
    es_par_u = (residuo2 == 0);

    cubo_n = n*n*n;
    cubo_u = u*u*u;

    printf("\n IDENTIFICACION DE TIPO DE DATOS \n");
    printf("Variable 'n' -> Tipo de dato simple: Entero (int)\n");
    printf("Variable 'u' -> Tipo de dato simple: Entero (int)\n");

    printf("\n RESULTADOS DE PARIDAD \n");
    if(es_par_n){
        printf("El numero n (%d) es: PAR\n", n);
    }else{
        printf("El numero n (%d) es: IMPAR\n", n);
    }

    if (es_par_u){
        printf("El numero u (%d) es: PAR\n", u);

    }else {
        printf("El numero u (%d) es: IMPAR\n", u);
    }

    printf("\n CALCULOS AL CUBO \n");
    printf("El cubo de n (%d * %d * %d) es: %d\n", n, n, n, cubo_n);
    printf("El cubo de u (%d * %d * %d) es: %d\n", u, u, u, cubo_u);

    printf("\n PROCESO FINALIZADO CON EXITO \n");

    return 0;

}