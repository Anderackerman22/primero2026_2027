#include <stdio.h>
#include <stdbool.h>
#include <string.h>//libreria para manipular y medir cadenas de texto

//variables y constantes 
const int min_len = 5;
const int max_len = 50;
char correo[100];
int longitud;
int tiene_arroba = 0;
int tiene_punto = 0;
int empieza_arroba = 0;
int termina_arroba = 0;
int cumple_longitud = 0;
bool correo_valido;

int main(){
    //mensaje de bienvenida 
    printf("    SISTEMA DE REGISTRO-GIMNASIO   \n");

    //datos de entrada
    printf("Por favor ingrese el correo electronico \n");
    scanf("%s", &correo);
    
    //longitud de la cadena 
    longitud = strlen(correo);

    //expresion logica
    cumple_longitud = (longitud >= min_len && longitud <= max_len);

    for (int i=0; i < longitud; i++){
        if(correo[i] == '@'){
            tiene_arroba = 1;
        }
        if (correo[i] == '.'){
            tiene_punto = 1;
        }
    }

    empieza_arroba = (longitud > 0 && correo[0] == '@');
    termina_arroba = (longitud > 0 && correo[longitud-1] == '@');

    correo_valido = (cumple_longitud && tiene_arroba && tiene_punto && !empieza_arroba && !termina_arroba);
    
    float mitad_resultado = (float)longitud / 2.0;

    if (correo_valido){
        printf("\n[EXITO] ¡Bienvenido! El correo electronico es VALIDO. \n");
        printf("\nLongitud analizada: %d caracteres (mitad: %.1f)\n", longitud, mitad_resultado);

    } else {
        printf("\n [ERROR] El correo electronico NO es valido. Criterios que fallaron: \n");

        if (!cumple_longitud){
            printf("Longitud incorrecta: Deve tener %d y %d caracteres (actual: %d). \n", min_len, max_len, longitud);

        }
        if (!tiene_arroba){
            printf("Falta de formato: El correo debe contener el caracter '@'. \n");

        }
        if (!tiene_punto){
        printf(" Falta de formato: El correo deber contener al menos un punto ('.'). \n");

        }
        if (empieza_arroba){
            printf("Posicion incorrecta: El correo no puede empezar con '@'. \n");

        }
        if (termina_arroba){
            printf("Posicion incorrecta: El correo no puede terminar con '@'. \n");

        }
        
        printf("Metrica de caracteres analizada -> Total: %d | Mitad: %.1f\n", longitud, mitad_resultado);
    }

    return 0;
}