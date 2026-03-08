#include <stdio.h>
#include "pelicula.h"

int main() {
    printf("--- Iniciando Prueba de TAD Pelicula ---\n\n");

    Pelicula* peli = crearPelicula("Back To The Future", "Ciencia Ficcion");
    if (peli == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    agregarDirector(peli, "Christopher Loyd");
    cambiarGenero(peli, "Aventura");

    imprimir(peli);

    destruir(peli);
    peli = NULL;

    return 0;
}
