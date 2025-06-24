#include <stdio.h>
// Leer un archivo de forma secuencial usando fgetc

int main(){
    int auxiliar; //Para almacenar el texto del archivo, EOF vale -1
    FILE *f; // Acá solamente estoy declarando el archivo, no lo abrí. f es un puntero a FILE

    f = fopen("prueba_1.txt", "r"); // Acá le estoy dando un valor a f, entonces si lo estoy abriendo (modo lectura texto)
    if (f == NULL){
        printf("No se pudo abrir el archivo.");
        return 1; // Salida con error.
    }

    while (auxiliar != EOF){ // Mientras mi variable no sea el fin del archivo (o mejor dicho, hasta que)
        auxiliar = fgetc(f); // La variable va a almacenar lo que esté en el archivo
        printf("%c", auxiliar);
    }
    
// Siempre cerrar el archivo
    if (fclose(f)==0){
        printf("\nEl archivo se cerró correctamente.");
    } else {
        printf("\nError al cerrar el archivo.");
    }

    return 0;
}