#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pelicula.h"

#define MAX_DIRECTORES 10

struct Pelicula {
    char* titulo;
    char* genero;
    char* directores[MAX_DIRECTORES];
    int numDirectores;
};

char* copiarCadena(const char* origen) {
    if (origen == NULL) return NULL;
    char* destino = (char*)malloc(strlen(origen) + 1);
    if (destino) {
        strcpy(destino, origen);
    }
    return destino;
}

Pelicula* crearPelicula(const char* titulo, const char* genero) {
    Pelicula* p = (Pelicula*)malloc(sizeof(Pelicula));
    if (!p) return NULL;

    p->titulo = copiarCadena(titulo);
    p->genero = copiarCadena(genero);
    p->numDirectores = 0;
    
    for (int i = 0; i < MAX_DIRECTORES; i++) 
    p->directores[i] = NULL;
    return p;
}

void cambiarGenero(Pelicula* p, const char* nuevoGenero) {
    if (!p) return;
    free(p->genero);
    p->genero = copiarCadena(nuevoGenero);
}

void agregarDirector(Pelicula* p, const char* nombreDirector) {
    if (p && p->numDirectores < MAX_DIRECTORES) {
        p->directores[p->numDirectores] = copiarCadena(nombreDirector);
        p->numDirectores++;
    } else {
        printf("Error: Límite de directores alcanzado.\n");
    }
}

void imprimir(Pelicula* p) {
    if (!p) return;
    printf("Película: %s [%s]\n", p->titulo, p->genero);
    printf("Directores: ");
    for (int i = 0; i < p->numDirectores; i++) {
        printf("%s%s", p->directores[i], (i < p->numDirectores - 1) ? ", " : "");
    }
    printf("\n");
}

void destruir(Pelicula* p) {
    if (!p) return;
    
    free(p->titulo);
    free(p->genero);
    for (int i = 0; i < p->numDirectores; i++) {
        free(p->directores[i]);
    }
    
    free(p);
}
