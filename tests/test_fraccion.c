#include <stdio.h>
#include "../fraccion/fraccion.h"

int main()
{

    Fraccion* f1 = crearFraccion(2,4);
    Fraccion* f2 = crearFraccion(1,2);

    Fraccion* r = sumar(f1,f2);

    if(r == NULL)
        return 1;

    imprimir(r);

    destruir(f1);
    destruir(f2);
    destruir(r);

    printf("Fraccion OK\n");

    return 0;
}
