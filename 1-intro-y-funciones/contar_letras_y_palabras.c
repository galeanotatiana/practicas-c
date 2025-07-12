#include <stdio.h>
#include <string.h>  // Para usar strlen

// Función que cuenta las letras y palabras en un texto
int contarLetrasYPalabras(char texto[], int *cantidad_palabras) {
    int cantidad_letras = 0;
    *cantidad_palabras = 0;
    int longitud = strlen(texto);

    for (int i = 0; i < longitud; i++) {
        // Si el carácter no es un espacio, lo contamos como letra
        if (texto[i] != ' ') {
            cantidad_letras++;
            
            // Contar una palabra si es la primera letra o si el anterior era un espacio
            if (i == 0 || texto[i-1] == ' ') {
                (*cantidad_palabras)++;
            }
        }
    }
    
    return cantidad_letras;
}

int main() {
    char texto[] = "Hola mundo desde C";  // Un ejemplo de texto
    int cantidad_palabras = 0;

    // Llamamos a la función y obtenemos el número de letras
    int cantidad_letras = contarLetrasYPalabras(texto, &cantidad_palabras);

    // Mostramos los resultados
    printf("El texto tiene %d letras.\n", cantidad_letras);
    printf("El texto tiene %d palabras.\n", cantidad_palabras);

    return 0;
}