#include <stdio.h>
#include <stdlib.h>
#include "Fraccion.h"

struct Fraccion {
    int num;
    int den;
};

int calcularMCD(int a, int b) {
    if (b == 0) return a;
    return calcularMCD(b, a % b);
}

void simplificar(Fraccion* f) {
    if (f == NULL || f->den == 0) return;

    if (f->den < 0) {
        f->num = -f->num;
        f->den = -f->den;
    }

    int mcd = calcularMCD(abs(f->num), abs(f->den));
    f->num /= mcd;
    f->den /= mcd;
}

Fraccion* crearFraccion(int num, int den) {
    if (den == 0) {
        printf("Error: Denominador no puede ser 0.\n");
        return NULL;
    }
    
    Fraccion* nueva = (Fraccion*)malloc(sizeof(Fraccion));
    if (nueva != NULL) {
        nueva->num = num;
        nueva->den = den;
        simplificar(nueva);
    }
    return nueva;
}

Fraccion* sumar(Fraccion* f1, Fraccion* f2) {
    if (f1 == NULL || f2 == NULL) return NULL;
    
    int nuevoNum = (f1->num * f2->den) + (f2->num * f1->den);
    int nuevoDen = f1->den * f2->den;
    
    return crearFraccion(nuevoNum, nuevoDen);
}

void imprimir(Fraccion* f) {
    if (f == NULL) return;
    if (f->den == 1) printf("%d\n", f->num);
    else printf("%d/%d\n", f->num, f->den);
}

void destruir(Fraccion* f) {
    if (f != NULL) {
        free(f);
    }
}
