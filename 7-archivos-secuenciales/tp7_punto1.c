/* Crear un programa que permita ingresar cinco cadenas de caracteres
por teclado de manera sucesiva en un archivo de texto “cadenas.txt” */
#include <stdio.h>
int main(){
    char cadena[100];
    FILE *f = fopen("cadenas.txt", "w");
    if (f==NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++){
        printf("Ingrese la cadena número %i: ", i+1);
        fgets(cadena, 100, stdin);
        fprintf(f, "%s", cadena);
    }
    fclose(f);
    return 0;
}