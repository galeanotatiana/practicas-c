/*Escribir una función que reciba tres cadenas de caracteres y muestre por pantalla el resultado
de concatenar las tres primeras letras de las cadenas. 
Además, la función deberá retornar un 0 si las dos primeras cadenas son iguales,
un 2 si las últimas dos cadenas son iguales, 
un 3 si todas las cadenas son iguales,
y un 4 si todas las cadenas fueran distintas. */

#include <stdio.h>
#include <string.h> /*para usar strcat para concatenar*/

int trescadenas(char c1[], char c2[], char c3[]){
    char aux1[4] = {0}; 
    char aux2[4] = {0}; 
    char aux3[4] = {0}; 
    char concatenado[10] = {0};
    int valor;

    /*auxiliares para guardar solo las primeras 3 letras de cada uno*/
    for (int i=0; i<3; i++){
        aux1[i] = c1[i]; /*se copian los primeros tres caracteres de la primera cadena al aux 1*/
    }
    for (int i=0; i<3; i++){
        aux2[i] = c2[i]; /*se copian los primeros tres caracteres de la segunda cadena al aux 2*/
    }
    for (int i=0; i<3; i++){
        aux3[i] = c3[i]; /*se copian los primeros tres caracteres de la tercera cadena al aux 3*/
    }

    /*concatenar*/
    strcpy(concatenado, aux1);
    strcat(concatenado, aux2);
    strcat(concatenado, aux3);
    printf("%s", concatenado);

    /*retornar*/
    if (c1 == c2){
        valor = 0;
    }
    if (c2 == c2){
        valor = 2;
    }
    if (c1 == c2 && c2 == c3){
        valor = 3;
    }
    else {
        valor = 4;
    }
    return valor;
}

int main(){
    char palabra[] = "hola";
    char palabra2[] = "como";
    char palabra3[] = "estas";
    trescadenas(palabra, palabra2, palabra3);
    return 0;
}