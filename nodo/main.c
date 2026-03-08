#include "nodo.h"
#include <stdio.h>
int main(){
   nodo *n;
   n = crearnodo(2);
   printf("El valor del nodo es: %d \n", obtenervalor(n));
   asignarvalor(n, 45);
   printf("El valor del nodo es: %d \n", obtenervalor(n));
   destruirnodo(n);
   (n == NULL) ? printf("El nodo es nulo \n") : printf("El nodo no es nulo \n");
  
   return 0;
}
