#include<stdio.h>
#include<stdbool.h>// librearia para usar variables booleanas

int main() {
    //definicion de variables y constantes
    bool transaccion_exitosa;
    float saldo_cuenta;
    float monto_retiro;
    const double saldo_minimo = 10.0;
    const double limite_retiro = 500.0;
    const double comision = 0.50;
    
    //Datos ingresados por le usuario

    printf("Escriba el saldo de la cuenta \n");
    scanf("%f", &saldo_cuenta);
    printf("Monto a retirar \n");
    scanf("%f", &monto_retiro);

    //uso de la variable booleana 

    transaccion_exitosa = (monto_retiro > 0 && monto_retiro <= limite_retiro && (saldo_cuenta-monto_retiro-comision)>=saldo_minimo);

    //expresion logica

    if (transaccion_exitosa){

        float nuevo_saldo = saldo_cuenta - monto_retiro - comision;
        float mitad = nuevo_saldo / 2;//mitad del resultado pedido en el enunciado
         
        printf("Transaccon exitosa \n");
        printf("Saldo anterior %.2f \n", saldo_cuenta);
        printf("Monto retirado %.2f \n", monto_retiro);
        printf("Comision %.2f \n", comision); 
        printf("Nuevo saldo %.2f (mitad: %.2f)", nuevo_saldo, mitad);

    }else{
        printf("Saldo insuficiente \n");
    }
    
    return 0;

}