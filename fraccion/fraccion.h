#ifndef FRACCION_H
#define FRACCION_H

typedef struct Fraccion Fraccion;

Fraccion* crearFraccion(int num, int den);
void simplificar(Fraccion* f);
Fraccion* sumar(Fraccion* f1, Fraccion* f2);
void imprimir(Fraccion* f);
void destruir(Fraccion* f);

#endif
