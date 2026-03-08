#include "fraccion.h"
#include <stdio.h>

int main() {
    
    Fraccion* f1 = crearFraccion(2, 4); 
    Fraccion* f2 = crearFraccion(3, 6); 
    
    printf("Fraccion 1: ");
    imprimir(f1);
    
    printf("Fraccion 2: ");
    imprimir(f2);
    
    Fraccion* suma = sumar(f1, f2);
    printf("Suma: ");
    imprimir(suma);
    
    destruir(f1);
    destruir(f2);
    destruir(suma);
    
    return 0;
}
       4 Liberar memoria
    */

    return 0;
}
