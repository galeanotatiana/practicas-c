#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>
#include <time.h>
#include "../../listas/headers/listas.h"

#ifndef VALIDACIONES_H
#define VALIDACIONES_H

/* VALIDACIÓN DE STRINGS NUMERICOS */

//Retorna TRUE si el string representa solo números enteros.
bool esDigito(const char * cadena);

//Retorna TRUE si el string representa solo a un número entero positivo.
bool esDigitoPositivo(const char *cadena);

//Retorna TRUE si el string representa un numero distinto de cero.
bool noEsCero(const char * cadena);

bool esFlotante(const char *c);

bool esFlotantePositivo(const char *c);

/* VALIDACIÓN DE STRINGS */

//Retorna TRUE si el string representa solo valores alfabeticos.
bool esAlfabetico(const char *c);

//Retorna TRUE si el string contiene al menos un caracter.
bool tieneContenido(char *cadena);

//Retorna TRUE si el string contiene mas de un caracter.
bool masDeUnCaracter(char *cadena);

//Retorna TRUE si el string solo contiene "H" y "L".
bool soloHyL(char *senial);

//Retorna TRUE si el string esta conformado por "H" y "L".
bool verificarSenial(char *senial);

/* FUNCIONES DE INGRESOS */

//Facilita el ingreso de strings con tamaño 100.
char* ingresoStrings(char *mensaje);

//Facilita el ingreso de strings con tamaño dinamico.
char* ingresoStringsTam(char *mensaje, int tamano);

// Facilita el ingreso y la validacion de valores numericos.
int ingresoDatosNumericos(char * mensajeError); 

//Facilita el ingreso y la validacion de valores numericos positivos >= 0.
int ingresoDatosNumericosPositivos(char *mensajeError);

//Facilita el inrgeso y la validación de valores númericos positivos > 0.
int ingresoDatosNumericosNoCero(char *mensajeError);

//Facilita el ingreso y la validacion de valores float.
double ingresoDatosFloat(char *mensajeError); 

 // Facilita el ingreso y la validacion de valores float positivos >= 0.
double ingresoDatosFloatPositivos(char *mensajeError);

/* UTILIDADES */

//Elimina los espacios al extremo de un string.
char* trim(char* string);

//Elimina todos los espacios de un string.
void sacarEspacios(char* string);

//Convierte un string a mayusculas.
void todoAMayusculas(char* string);

//Pregunta si desea continuar
bool preguntarContinuar();

//Limpia la pantalla
void limpiarPantalla();

//Devuelve un string sin los ceros a la izquierda
char* removerCerosIzquierda(char *string);

//retorna falso si el numero tiene mas de 31 bits o true si tiene menos
bool NumeroMaxBits(char *string);

void reemplazarComasPorPuntos(char *c);

void mostrarComparacion(int respuesta); 


/* LISTAS */

//Facilita la carga por teclado de la lista según lacantidad recibidad.
Lista l_cargar(int cantidad);

//Genera valores aleatorios entre 0 y 150.
Lista l_cargar_azar(int cantidad);

#endif