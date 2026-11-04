#include <stdio.h>
#include <stdbool.h>

int main(){
    const double IVA = 0.15;
    double precio, subtotal, monto_iva, total, bono;
    int cantidad;
    bool datos_validos;

    printf("Ingrese el precio del producto: ");
    scanf("%lf", &precio);
    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);

    datos_validos = (precio > 0 && cantidad > 0);

    if (datos_validos){
        subtotal = precio * cantidad;
        monto_iva = subtotal * IVA;
        total = subtotal + monto_iva;
        bono = total * 1.5; 

        printf("   DESGLOSE DE COMPRAS    \n");
        printf("Subtotal: %.2f\n",subtotal);
        printf("IVA (15%%): %.2f\n", monto_iva);
        printf("Total a pagar: %.2f\n", total);
        printf("Bono (Total * 1.5): %.2f\n", bono);
        printf("Transaccion Exitosa\n");
    } else{
        printf("Transaccion rechazada. El precio y la cantidad deben ser mayores a 0\n");

    }

    return 0;
}