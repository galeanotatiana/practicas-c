/* Dado un archivo de acceso directo con la siguiente estructura de registro:
  	typedef struct rcliente {
    int id_cli;                // Número de cliente (válido entre 1000 y 9000)
    char ape[40];          // Apellido
    char telef[40];         // Teléfono
    float saldo;             // Saldo del cliente
    int estado;              // Estado de cliente 0=Inactivo, 1=Activo
    } rcliente;
Realizar una función que recibe el nombre del archivo binario (string), el número de cliente (entero) y un entero indicando el estado y modifique el valor del campo estado correspondiente a ese cliente retornando 0 (cero) si la operación fue exitosa y -1 (menos 1) si el número de cliente no corresponde a un cliente válido. El archivo se debe abrir y cerrar en la función.*/

#include <stdio.h>

FILE *f;
typedef struct rcliente {
    int id_cli;                // Número de cliente (válido entre 1000 y 9000)
    char ape[40];          // Apellido
    char telef[40];         // Teléfono
    float saldo;             // Saldo del cliente
    int estado;              // Estado de cliente 0=Inactivo, 1=Activo
    } rcliente;



int funcion(char nombre[], int nro, int est){
    rcliente aux;
    if (nro >= 1000 && nro <= 9000){
        f = fopen(nombre, "ab");
        fseek(f, (nro - 1000) * sizeof(rcliente), SEEK_SET);
        fread(&aux, sizeof(aux), 1, f);
        if(aux.estado != est){
            aux.estado = est;
            fseek(f, -1 * sizeof(rcliente), SEEK_CUR);
            fwrite(&aux, sizeof(aux), 1, f);
            return 0;
        }
    }
    return -1;
}