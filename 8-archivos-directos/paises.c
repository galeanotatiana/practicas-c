#include <stdio.h>

struct lugar {
    char ciudad[20];
    char pais[20];
};

int main(){
    struct lugar lugares[3] = {
        {"Buenos Aires", "Argentina"},
        {"Paris", "Francia"},
        {"Santiago", "Chile"}
    };
    FILE *f = fopen("paises.dat", "wb+");
    if (f == NULL) {
        printf("Error al abrir archivo");
        return 1;
    }

    fwrite(lugares, sizeof(struct lugar), 3, f);
    rewind(f);
    
    
    printf ("POSICION - CARACTER\n");
    do {
        int car = fgetc(f);
        long pos = ftell(f);
        if (car != EOF){
            printf("%ld - %c\n", pos, car);
        } else {
            printf("%ld - EOF\n", pos);
        }
    } while (!feof(f));
    
    long pos = ftell(f);
    printf("El cursor está en el byte: %ld\n", pos);
    rewind(f);

    fseek(f, 20, SEEK_SET);
    pos = ftell(f);
    printf("\nAvanzo 20 bytes desde el inicio del archivo.");
    printf("\nAhora el cursor está en el byte: %ld\n", pos);

    fseek(f, -40, SEEK_END);
    pos = ftell(f);
    printf("\nRetrocedo 40 bytes desde el final del archivo.");
    printf("\nAhora el cursor está en el byte: %ld\n", pos);

    fseek(f, 10, SEEK_CUR);
    pos = ftell(f);
    printf("\nAvanzo 10 bytes desde donde estaba.");
    printf("\nAhora el cursor está en el byte: %ld\n", pos);
    return 0;
}