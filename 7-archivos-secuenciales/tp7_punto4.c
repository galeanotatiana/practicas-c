/*Se efectúa una encuesta para conocer el nivel de ocupación de los pobladores de una
ciudad. Los encuestados contestaron los siguientes ítems:  
- Sexo (1 varón; 2 mujer)  
- Edad  
- Estado civil (1 soltero; 2 casado; 3 otros)  
- Trabaja (0 no; 1 sí)  
- Estudia (0 no; 1 sí)
* a) Generar un archivo con todos los datos validados */
#include <stdio.h>
void encuesta(int cantidadPersonas, FILE*f){
    for (int i=0; i<cantidadPersonas; i++){
        int genero=0, edad=0, estado=0, trabaja=-4, estudia=-4;
        while (genero!=1 && genero!=2){
            printf("Ingrese el sexo de la persona numero %i\n1 = Hombre, 2 = Mujer: ", i+1);
            scanf("%i", &genero);
        }
        printf("\nIngrese la edad de la persona numero %i: ", i+1);
        scanf("%i", &edad);
        while(estado!=1 && estado!=2 && estado!=3){
            printf("\nIngrese el estado civil de la persona numero %i\n1 = Soltero, 2 = Casado, 3 = Otro: ",i+1);
            scanf("%i", &estado);
        }
        while(trabaja!=0 && trabaja!=1){
            printf("\nLa persona numero %i trabaja? 0 = no, 1 = si: ",i+1);
            scanf("%i",&trabaja);
        }
        while(estudia!=0 && estudia!=1){
            printf("\nLa persona numero %i estudia? 0 = no, 1 = si: ",i+1);
            scanf("%i",&estudia);
        }
        fprintf(f, "%i %i %i %i %i\n", genero, edad, estado, trabaja, estudia);
    }
}

/* b) Utilizando el archivo imprimir un reporte de la cantidad de:
varones , mujeres, menores de 18 años que trabajan, solteros, casados, encuestados que trabajan y estudian, mujeres que trabajan */
void reporte(int cantidadPersonas, FILE*f){
    int genero, edad, estado, trabaja, estudia;
    int hombres=0, mujeres=0, men_tr=0, solteros=0, casados=0, tr_es=0, muj_tr=0;
    while (fscanf(f, "%d %d %d %d %d", &genero, &edad, &estado, &trabaja, &estudia) == 5){
        if (genero==1) hombres++;
            else mujeres++;
        if (edad<18 && trabaja==1) men_tr++;
        if (estado==1) solteros++;
        else if (estado==2) casados++;
        if (trabaja==1 && estudia==1) tr_es++;
        if (genero==2 && trabaja==1) muj_tr++;
    }
    printf("Hombres: %i\nMujeres: %i\nMenores de 18 que trabajan: %i\nSolteros: %i\nCasados: %i, Estudian y trabajan: %i\nMujeres que trabajan: %i\n",hombres, mujeres, men_tr, solteros, casados, tr_es, muj_tr);
}  

int main(){
    FILE *f;
    int encuestados = 3;
    f = fopen("encuestados.txt","w");
    if (f==NULL){
        printf("Error al abrir archivo.\n");
        return 1;
    }
    encuesta(encuestados, f);
    fclose(f);
    f = fopen("encuestados.txt","r");
    if (f==NULL){
        printf("Error al abrir archivo.\n");
        return 1;
    }
    reporte(encuestados, f);
    fclose(f);
    return 0;
}
