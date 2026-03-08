#include "nodo.h"
#include <stdlib.h>
#include <stdio.h>


nodo* crearnodo(int valor){
   nodo *n = (nodo*)malloc(sizeof(nodo));
   n -> valor = valor;
   return  n;
}


int obtenervalor(const nodo *n){
   return n -> valor;
}


void asignarvalor(nodo *n, int v){
   if(!n) return;
   n -> valor = v;
}


void destruirnodo(nodo *n){
   if(!n) return;
   free(n);
   n = NULL;
}
