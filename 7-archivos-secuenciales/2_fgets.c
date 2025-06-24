// Abrir un archivo de texto de forma secuencial usando fgets
#include <stdio.h>

int main(){
    char aux[100]; // Maximo 100 caracteres
    FILE *f; // Declarar puntero a FILE

    f = fopen("prueba_2.txt", "r");
    if (f==NULL){
        printf("Error al abrir el archivo");
        return 1;
    }

    while (fgets(aux,100,f) != NULL){ //fgets devuelve NULL cuando ya no lee nada nuevo
        printf("%s", aux);
    }

    fclose(f);
    return 0;
}