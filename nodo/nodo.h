#ifndef __NODO_H_
#define __NODO_H_


typedef struct nodo nodo;


struct nodo{
   int valor;
};


nodo *crearnodo(int valor);
int obtenervalor(const nodo*);
void asignarvalor(nodo*, int);
void destruirnodo(nodo *);

#endif
