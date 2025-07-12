/*Crear un registro que permita almacenar información relacionada con un músico.
Cada músico cuenta con un nombre, una edad, un género músical e información sobre sus discos.
Cada disco, posee un título, un año de lanzamiento y su cantidad de canciones.
*/

#include <stdio.h>

struct album {
    char titulo[50];
    int lanzamiento, cantidad;
};

struct musico {
    char nombre[20], genero[10];
    int edad, albumes;
    struct album disco[10]; 
};

/* Utilizando el registro del punto anterior, crear las siguientes funciones:
Una función que permita la carga de un vector de 20 músicos. */

void ingresar_musicos(struct musico artista[], int n){
    for (int i = 0; i < n; i++){
        printf("Ingrese el nombre del artista %i: \n", i+1);
        scanf(" %[^\n]", artista[i].nombre);

        printf("\nIngrese el genero musical del artista %i: \n", i+1);
        scanf(" %[^\n]", artista[i].genero);

        printf("\nIngrese la edad del artista %i: \n", i+1);
        scanf("%i", &artista[i].edad);
        getchar();

        printf("\nIngrese la cantidad de discos del artista %i: \n", i+1);
        scanf("%i", &artista[i].albumes);
        getchar();

        for (int j = 0; j < artista[i].albumes; j++){

            printf("\nIngrese el titulo del disco numero %i: \n", j+1);
            scanf(" %[^\n]", artista[i].disco[j].titulo);

            printf("\nIngrese el año de lanzamiento del disco numero %i: \n", j+1);
            scanf("%i", &artista[i].disco[j].lanzamiento);
            getchar();

            printf("\nIngrese la cantidad de canciones del disco numero %i: \n", j+1);
            scanf("%i", &artista[i].disco[j].cantidad);
            getchar();
        }
    }
}

/*Una función que reciba el vector de músicos y retorne el nombre del músico con mayor cantidad de discos.*/
char* ordenar_mas_discos(struct musico artista[], int n){
    int maximo = 0, indice = 0;
    if (n == 0){
        printf("Error.\n");
        return NULL;
    }
    for (int i = 1; i < n; i++){
        if (artista[i].albumes > maximo){
            maximo = artista[i].albumes;
            indice = i;
        }
    }

    printf("El músico con más discos es: %s", artista[indice].nombre);
    return artista[indice].nombre;
}

/* Una función que reciba el vector de músicos, una edad y retorne el promedio de discos para los músicos menores a la edad recibida.*/
/*Recorrer el vector de músicos y contar cuántos músicos tienen una edad menor a la recibida.
Contar cuántos discos tienen esos músicos.
Calcular el promedio de discos de estos músicos.
Promedio = Total de discos de los músicos // total de músicos (ej: 250 albumes dividido 20 musicos)
*/

int musico_menor_que (struct musico artista[], int n, int edad){
    int contador_musicos = 0; // Inicializo un contador de cuantos músicos tienen una edad menor a la recibida
    int contador_discos = 0;  // Inicializo un contador del total de discos
    for (int i = 0; i < n; i++){
        if (artista[i].edad < edad){
            contador_musicos += 1; // Aumenta el contador cada vez que un músico es menor a la edad recibida como parametro
            contador_discos += artista[i].albumes;
        }
    }

    if (contador_musicos == 0) {
        printf("No hay músicos menores de %i años.\n", edad);
        return 0; 
    }

    int promedio = contador_discos / contador_musicos;
    printf("El promedio de de discos es: %i", promedio);
    return promedio;
};

/* Una función que reciba el vector de músicos, un año e imprima por pantalla el nombre de los discos cuyo año de lanzamiento sea
posterior al recibido cómo parámetro. Además, se debe incluir el nombre del artista, el género y la cantidad de canciones del disco.*/

void discos_despues_de (struct musico artista[], int n, int year){
    printf("Los discos posteriores a %i son:\n", year);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < artista[i].albumes; j++){
            if (artista[i].disco[j].lanzamiento > year){
                printf("Disco: %s, artista: %s, año: %i, genero: %s, canciones: %i \n", artista[i].disco[j].titulo, artista[i].nombre, 
                artista[i].disco[j].lanzamiento, artista[i].genero, artista[i].disco[j].cantidad);
            }
        }
    }
};

int main(){
    int n = 2; // Cantidad de artistas a cargar

    struct musico artista[n];
    ingresar_musicos(artista, n);
    ordenar_mas_discos(artista, n);

    int edad;
    printf("Ingrese una edad: ");
    scanf("%i", &edad);
    musico_menor_que(artista, n, edad);

    int year;
    printf("Ingrese un año: ");
    scanf("%4i", &year);
    discos_despues_de(artista, n, year);
    return 0;
}