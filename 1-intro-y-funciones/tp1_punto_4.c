// Crear una función que reciba como argumento un texto,  y una variable extra que se complete con la cantidad de palabras.
// Que retorne cuántas letras tiene el texto. Además, la función debe almacenar la cantidad de palabras en el texto.

#include <stdio.h>
#include <string.h>
int contarLetrasYPalabras(char texto[], int *cantidad_palabras){
    int cantidad_letras = 0;
    *cantidad_palabras = 0;
    int longitud = strlen(texto);
    int i = 0;
    for (i = 0; i < longitud; i++){
        //Se recorre el texto. Si el caracter no es un espacio, se cuenta como letra.
        if (texto[i] != ' '){
            cantidad_letras++;
        }
        //Contar una palabra si es la primera letra o si el anterior era un espacio.
        if (i=0 || texto[i-1]==' '){
            (*cantidad_palabras)++;
        }
    }
    return cantidad_letras;
}

// Programa principal para probar la función
int main(){
    char texto[] = "Hola mundo";
    int cantidad_palabras = 0;

    int cantidad_letras = contarLetrasYPalabras(texto, &cantidad_palabras);

    printf("El texto tiene %i letras.\n", cantidad_letras);
    printf("El texto tiene %i palabras.\n", cantidad_palabras);

    return 0;
}