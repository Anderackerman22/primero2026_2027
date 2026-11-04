#include <stdio.h>

int main(){
    double base;
    double altura;
    double area;
    double perimetro;
    double doble_area; 
    double doble_peri;
    int es_valido;

    printf("Ingrese la base del rectangulo: ");
    scanf("%lf", &base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%lf", &altura);

    es_valido = (base > 0 && altura > 0);

    area = base * altura;
    perimetro = 2 * (base + altura);

    doble_area = area * 2;
    doble_peri = perimetro * 2;

    printf("RESULTADOS PRINCIPALES\n");
    printf("Area del rectangulo: %.2f\n", area);
    printf("Perimetro del rectangulo: %.2f\n", perimetro);

    printf("CALCULOS ADICIONALES\n");
    printf("Doble del area: %2.f\n", doble_area);
    printf("Doble del perimetro: %.2f\n", doble_peri);

    printf("VALIDACION LOGICA\n");
    if(es_valido){
        printf("Expresion logica (base > 0 && altura > 0): VERDADERO (1)\n");

    }else{
        printf("Expresion logica (base >0 && altura > 0): FALSO (0)\n");

    }

    printf("[CONFIRMACION]: Operacion realizada con exito. \n");

    return 0;
}