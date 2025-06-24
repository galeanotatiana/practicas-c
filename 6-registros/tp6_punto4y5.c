#include <stdio.h>
#include <string.h>

/* Crear un registro que permita almacenar información relacionada con un músico.
Cada músico cuenta con un nombre, una edad, un género músical e información sobre sus discos.
Cada disco, posee un título, un año de lanzamiento y su cantidad de canciones. */
struct disco {
    char titulo[20];
    int lanzamiento, cantidad;
};

struct musico {
    char nombre[50];
    int edad, cantidadAlbumes;
    char genero[10];
    struct disco albumes[10]; /*hasta 10 discos?*/
};

/* Utilizando el registro del punto anterior, crear las siguientes funciones:
Una función que permita la carga de un vector de 20 músicos.*/

void cargar_artistas(struct musico artistas[], int cantidad){
    int i, j;
    for (i=0; i<cantidad; i++){
        printf("Ingrese el nombre del artista %i: ", i+1);
        scanf(" %49[^\n]", artistas[i].nombre); /*El scanf guarda los primeros 49 caracteres que no sean enter*/

        printf("\n Ingrese el genero musical del artista %i: ", i+1);
        scanf(" %9[^\n]", artistas[i].genero);

        printf("\n Ingrese la edad del artista %i: ", i+1);
        scanf("%i", &artistas[i].edad);
        getchar();

        printf("\n Ingrese la cantidad de discos del artista %i: \n", i+1);
        scanf("%i", &artistas[i].albumes);
        getchar();
        for (int j=0; j<artistas[i].cantidadAlbumes; j++){
            printf("\nIngrese el titulo del disco numero %i: \n", j+1);
            scanf(" %19[^\n]", artistas[i].albumes[j].titulo);

            printf("\nIngrese el año de lanzamiento del disco numero %i: \n", j+1);
            scanf("%i", &artistas[i].albumes[j].lanzamiento);
            getchar();

            printf("\nIngrese la cantidad de canciones del disco numero %i: \n", j+1);
            scanf("%i", &artistas[i].albumes[j].cantidad);
            getchar();
        }
    }
}

/*Una función que reciba el vector de músicos y retorne el nombre del músico con mayor cantidad de discos.*/
char* mas_discos(struct musico artistas[], int cantidad){
    int mayor = -1;
    int pos = -1;
    for (int i=0; i<cantidad; i++){ /*Recorro todo el vector de estructuras*/
            if (artistas[i].cantidadAlbumes > mayor){
                mayor = artistas[i].cantidadAlbumes;
                pos = i;
            }
        }
    return artistas[pos].nombre;
}

/* Una función que reciba el vector de músicos, una edad y retorne el promedio
de discos para los músicos menores a la edad recibida.*/
int musicos_mas_jovenes(struct musico artistas[], int cantidad, int edad){
    int acumulador = 0, contador = 0;
    for (int i=0; i<cantidad; i++){ /*Recorro todos los artistas*/
        if (artistas[i].edad < edad){
            contador ++;
            acumulador += artistas[i].cantidadAlbumes;
        }
    }
    if (contador == 0){   /*Controlar division por cero*/
        return 0;
    } else{
    int promedio = acumulador / contador;
    return promedio;
    }
}

/*Una función que reciba el vector de músicos, un año e imprima por pantalla el nombre de los discos 
cuyo año de lanzamiento sea posterior al recibido cómo parámetro. Además, se debe incluir
el nombre del artista, el género y la cantidad de canciones del disco.*/

void lanzamientoPost(struct musico artistas[], int cantidad, int anio){
    for (int i=0; i<cantidad; i++){ /*Recorro todos los artistas*/
        for (int j=0; j<artistas[i].cantidadAlbumes; j++){ /*Recorro los albumes de cada uno*/
        if (artistas[i].albumes[j].lanzamiento > anio){
            printf("\nArtista: %s, album: %s, año: %i, genero: %s, canciones: %i.\n", artistas[i].nombre, artistas[i].albumes[j].titulo, artistas[i].albumes[j].lanzamiento, artistas[i].genero, artistas[i].albumes[j].cantidad);
        }
    }
}
}