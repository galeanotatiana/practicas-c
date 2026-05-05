#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*Construir una función recursiva que retorne verdadero si una cadena de caracteres
pasada como parámetro es un palíndromo. Ej. “neuquen” ya que se lee igual de atrás
hacia adelante.
Ejemplos:
palindromo(“neuquen”) => verdadero
palindromo(“palindromo”) => falso*/

bool palindromo(char* palabra, int i, int j){
    if (i>=j){                                  /*compara si los extremos son iguales*/
        return true;                            /*si lo son, es que terminó de recorrer*/
    }
    if (palabra[i]!=palabra[j]){                /*compara si las letras de los extremos son distintas*/
        return false;                           /*si son iguales, sigue buscando coincidencias*/
    }
    return palindromo(palabra, i+1, j-1);      /*en cada llamada recursiva i (que inicia como 0) va aumentando,
                                                j (final de la cadena) va reduciendo hasta llegar a la mitad de la palabra*/
}

void main(){
    char palabra[50];
    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    palindromo(palabra, 0, strlen(palabra)-1);
    if (palindromo(palabra, 0, strlen(palabra) - 1)) {
        printf("Es palindromo\n");
    } else {
        printf("No es palindromo\n");
    }
}