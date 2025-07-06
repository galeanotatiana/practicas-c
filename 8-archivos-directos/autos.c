#include <stdio.h>
#define N 3

struct autos {      // Total estructura: 9 bytes
    int cilindrada; // 4 bytes
    char combustible; // 1 byte
    float vel_max; // 4 bytes
};

void ingresar(const char *, int);
void imprimir(const char *, int);
int cant_autos(const char *);

void ingresar(const char *file, int n){
    // variables auxiliares
    int cil;
    char comb;
    float vel;
    struct autos aux;
    FILE *f = fopen(file,"wb");
    if (f==NULL) printf("Error al abrir archivo");
    for (int i=0; i < n; i++){
        fflush(f);
        printf("Ingrese cilindrada motor auto %i: ", i+1);
        scanf("%i",&cil);
        aux.cilindrada = cil;
        getchar();
        printf("\nIngrese combustible N/D auto %i: ", i+1);
        scanf("%c",&comb);
        aux.combustible = comb;
        printf("\nIngrese velocidad maxima auto %i: ", i+1);
        scanf("%f",&vel);
        aux.vel_max = vel;
        fwrite(&aux, sizeof(aux), 1, f);
    }
    fclose(f);
}

void imprimir(const char *file, int n){
    struct autos aux;
    FILE *f = fopen(file, "rb");
    if (f==NULL) printf("Error al abrir el archivo.");
    fseek(f, (n-1)*sizeof(aux), SEEK_SET);
    fread(&aux, sizeof(aux), 1, f);
    printf("\nAuto numero %i\nCilindrada: %i\nCombustible: %c\nVelocidad maxima: %f\n", n, aux.cilindrada, aux.combustible, aux.vel_max);
    fclose(f);
}

int cant_autos(const char *file){
    FILE *f = fopen(file, "rb");
    if (f==NULL) printf("Error al abrir archivo.");
    fseek(f, 0, SEEK_END);                                 // Me sale segmentation fault aca
    int cant = (ftell(f) / sizeof(struct autos));
    fclose(f);
    return cant;
}

int main(){
  const char *nombre_archivo = "autos.dat";
  int cant, pos;
  printf("Ingrese la cantidad de autos a registrar: ");
  scanf("%i",&cant);
  ingresar(nombre_archivo, cant);
  printf("Ingrese numero de auto a leer (1 - %i): ",cant_autos(nombre_archivo));
  scanf("%d",&pos);
  imprimir(nombre_archivo, pos);
  cant_autos(nombre_archivo);
  return 0;  
}