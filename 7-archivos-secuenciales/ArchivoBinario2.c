#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Empleado {
  char nombre[20];
  int edad;
  float sueldo;
};

int menu();
void altasArchivo();
void busquedasArchivo();
struct Empleado* ingresoEmpleado();
int cantidadBytes(FILE*);

int main () {
    int opcion;
    do{
      opcion = menu();
      if (opcion== 1) altasArchivo();
      else if (opcion == 2)busquedasArchivo();     
    }while(opcion != 0);
    
    return 0;
}

int menu(){
  int opcion;
  printf("- - - M e n u - - - \n");
  printf("1 - Altas\n");
  printf("2 - Busquedas\n");
  printf("0 - Salir\n");
  do{
    scanf("%d", &opcion);
    if((opcion<0)||(opcion>2)) printf("Error. Seleccione una de las opciones del menu\n");
  }while((opcion<0)||(opcion>2));
  return opcion;
}

void altasArchivo(){
    FILE *femp;

    struct Empleado *emp;
    emp = ingresoEmpleado();

    femp = fopen("empleados.bin", "ab");
    if(femp == NULL) {
      femp = fopen("empleados.bin", "wb");
      if(femp == NULL){
        printf("Error al abrir el archivo \n");
        return;};
    };
    fwrite (emp, sizeof(struct Empleado), 1, femp);
    printf("Registro almacenado correctamente.\n");
    fclose(femp);
    return;
}

void busquedasArchivo(){
    FILE *femp;

    struct Empleado *emp;
    emp = malloc(sizeof(struct Empleado));

    femp = fopen("empleados.bin", "rb");
    if(femp == NULL) {
      printf("Error al abrir el archivo \n");
      return;
    };
    int nroRegistro;
    int cantRegistros = cantidadBytes(femp) / sizeof(struct Empleado);

    printf("Ingrese el numero de registro: ");
    scanf("%d", &nroRegistro);
    if(nroRegistro < cantRegistros){
      fseek(femp, nroRegistro * sizeof(struct Empleado), SEEK_SET);
      fread(emp, sizeof(struct Empleado), 1, femp);
      printf("Nombre: %s \n", emp->nombre);
      printf("Edad: %d \n", emp->edad);
      printf("Sueldo: %f \n", emp->sueldo);
      }
    else{printf("Error: No se pudo localizar el registro.\n");};
    fclose(femp);
    return;
}

struct Empleado* ingresoEmpleado(){
  struct Empleado *emp;
  emp = malloc(sizeof(struct Empleado));
  printf("Ingrese los datos del empleado:\n");
  printf("Nombre: ");
  scanf("%s", emp->nombre);
  printf("Edad: ");
  scanf("%d", &(emp->edad));
  printf("Sueldo: ");
  scanf("%f", &(emp->sueldo));
  return emp;
}

int cantidadBytes(FILE* arch){
  fseek(arch, 0, SEEK_END);
  int cantidad = ftell(arch);
  return cantidad;
}