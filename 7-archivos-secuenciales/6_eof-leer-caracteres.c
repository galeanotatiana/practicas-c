/*Leer los caracteres del archivo, creado anteriormente, abierto en modo lectura
de a uno hasta llegar al caracter de fin de archivo (EOF).
Para esto se usa la función: int getc(FILE * puntero); */

#include <stdio.h>
int main(){
    FILE *f = fopen("texto.txt", "r");
    char car;
    if (f==NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    car = getc(f); /*Lee caracter del archivo*/
    while (car != EOF){
        putchar(car); /*Imprime los caracteres del archivo en pantalla*/
        car = getc(f);
    }
    fclose(f);
    return 0;
}