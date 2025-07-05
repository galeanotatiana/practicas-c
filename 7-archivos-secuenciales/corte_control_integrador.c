/* movimientos.txt: %d %d %d
cajero: Número identificador del cajero (un entero).
operacion: Tipo de operación realizada, que puede ser 1 (depósito) o 2 (extracción).
monto: Valor de la transacción en pesos (un número entero).*/
#include <stdio.h>
/*Además, debe crear un archivo binario llamado cajeros.dat que almacene un 
listado de cajeros en la estructura “cajero” con los siguientes campos:*/
struct cajero { 
    int cajero;                              // Número del cajero
    char direccion[100];              // Dirección del cajero
    int cantidad_movimientos;   // Cantidad de movimientos realizados
};

/*Para cada cajero, calcular el saldo total de sus movimientos
(considerando "depósito" como positivo y "extracción" como negativo)
e imprimirlo en pantalla utilizando la técnica de corte de control.
Actualizar el archivo cajeros.dat incrementando el campo cantidad_movimientos del cajero correspondiente, basado en la cantidad de transacciones registradas en movimientos.txt.
Eliminar la cantidad de movimientos del último cajero.
*/