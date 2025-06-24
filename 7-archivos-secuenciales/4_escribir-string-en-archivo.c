#include <stdio.h>
// Pedir un texto por teclado y escribirlo en un archivo de texto
int main(){
    char aux[100];
    FILE *f = fopen("prueba4.txt", "w");
    if (f == NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    printf("Ingrese una cadena de texto: ");
    fgets(aux, 100, stdin); // stdin es la entrada estandar: el teclado

    fprintf(f, "%s", aux);

    fclose(f);
    return 0;
}