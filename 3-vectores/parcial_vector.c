#include <stdio.h>
#define N 5 /*ni idea que hice acá, quise marcar una longitud de la palabra clave*/

int vector_cadenas(char **cadena, int longitud, char clave[N]){
/*supongo que si "cadena" es un vector de vectores se declara como char** no?*/
    int i, j, k, pos = -1;
    for (i=0; i<longitud; i++){
        for (j=0; j<cadena[i]; j++){
            for (k=0; k<N; k++){
                if (cadena[i].[j] == clave[k]){ /*acá en el examen puse n en vez de k*/
                    pos = i;
                    printf("La palabra clave está en la posición %i", pos+1);
                } 
            }
        }
    }
    return pos;
}

