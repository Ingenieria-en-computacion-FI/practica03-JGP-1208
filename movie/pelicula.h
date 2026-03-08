#ifndef __PELICULA_H__#ifndef PELICULA_H
#define PELICULA_H

typedef struct Pelicula Pelicula;

Pelicula* crearPelicula(const char* titulo, const char* genero);
void imprimir(Pelicula* p);
void cambiarGenero(Pelicula* p, const char* nuevoGenero);
void agregarDirector(Pelicula* p, const char* nombreDirector);
void destruir(Pelicula* p);

#endif
