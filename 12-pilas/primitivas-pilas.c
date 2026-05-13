#include <stdio.h>
#include <stdlib.h>

/* El codigo de este programa es sacado de un libro de estructuras de datos.
No es el mismo formato que usamos en clases, es a modo de ejemplo.
La pila se implementa como una lista simplemente enlazada. */

/* FUNCIONES BÁSICAS:
CREAR PILA - AÑADIR ELEMENTO - ELIMINAR ELEMENTO - VERIFICAR SI LA PILA ESTA VACIA - MOSTRAR PRIMER ELEMENTO */

typedef float TipoElemento;
typedef struct UnNodo{
    TipoElemento e;
    struct UnNodo *sig;
} Nodo;
typedef Nodo Pila;

int p_es_vacia(Pila *p){ /* Indica ccuando la pila estará vacia (cuando p valga NULL) */
    return p == NULL;
}

int VaciaP(Pila** p){ /* Crea la pila vacia poniendo la pila p a NULL */
    *p = NULL;
}

/*Añade un elemento a la pila. Para hacerlo se añade un nuevo nodo que contienne el elemento que
se quiere insertar y ponerlo como primero de la lista enlazada.*/
void p_apilar(Pila** p, TipoElemento e){
    Nodo * NuevoNodo;
    NuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    NuevoNodo -> e = e;
    NuevoNodo -> sig = (*p);
    *p = NuevoNodo;
}

TipoElemento PrimeroP(Pila *p){ /*Retorna el campo almacenado en el primer nodo de la lista enlazada*/
    TipoElemento Aux;
    if (p_es_vacia(p)){ /*Se comprueba que la lista no esté vacía*/
        printf("Se intenta sacr un elemento en pila vacia.");
        exit(1);
    }
    Aux = p->e;
    return Aux;
}

void p_desapilar(Pila** p){ /*Elimina el ultimo elemento que entró en la lista*/
    Pila *NuevoNodo;
    if (p_es_vacia(*p)){
        printf("Se intenta sacar un elemento en pila vacia");
        exit(1);
    }
    NuevoNodo = (*p);
    (*p) = NuevoNodo -> sig;
    free(NuevoNodo);
}