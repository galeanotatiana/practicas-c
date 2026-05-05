#include <stdio.h>
#include <stdlib.h>

int main(){
int *ptr;
ptr = (int*)malloc(5 * sizeof(int));

printf("Dirección de memoria asignada: %p\n", (void*)ptr);
printf("Memoria asignada: %d bytes\n", 5 * sizeof(int));

if (ptr == NULL) {
    fprintf(stderr, "Error al asignar memoria\n");
    return 1;    
}

free(ptr);
printf("Cantidad de memoria de ptr después de liberar: %d bytes\n", sizeof(ptr));
return 0;
}