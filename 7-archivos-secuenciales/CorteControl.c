#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE* demo;
    int cliente,anio, mes, minutos;
    int minutosAnio, clienteAnt;
    demo = fopen("p0-ej6-modif.txt", "r");

    if (demo == NULL){
        printf("Error al abrir el archivo\n");
        return -1;
    }
    fscanf(demo, "%d %d %d %d", &clienteAnt, &anio, &mes, &minutosAnio);
    while (!(feof(demo))){
        fscanf(demo, "%d %d %d %d", &cliente, &anio, &mes, &minutos);
        if(cliente == clienteAnt){
            minutosAnio += minutos;
        }else{
            printf("Cliente %d \t %d minutos\n", clienteAnt, minutosAnio);
            clienteAnt = cliente;
            minutosAnio = minutos;
        }
    }
    printf("Cliente %d \t %d minutos\n", clienteAnt, minutosAnio);
    fclose(demo);
    system("pause");
}