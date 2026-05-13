#include "../headers/validaciones.h"

bool esDigito(const char *c) {
    if (strlen(c) > 1 && (c[0] == '-')) {
        c++;
    }

    for (int i = 0; c[i] != '\0'; i++) {
        if (!isdigit(c[i])) {
            return false;
        }
    }

    return true;
}

bool esDigitoPositivo(const char *c) {
    if (strlen(c) > 1 && c[0] == '-') {
        return false;
    }

    for (int i = 0; c[i] != '\0'; i++) {
        if (!isdigit(c[i])) {
            return false;
        }
    }

    return true;
}

bool noEsCero(const char *c) {
    bool esCero = false;

    while (c[0] != '\0' && !esCero) {

        if (c[0] != '0') {
            esCero = true;
        }

        c++;
    }

    return esCero;
}

bool esFlotante(const char *c){
    bool puntoEncontrado = false;

    if( strlen(c)>1 && (c[0] == '-') ) {
        c++;
    }
    for (int i = 0; c[i] != '\0'; i++) {
        if(c[i] == '.'){
            if(puntoEncontrado){
                return false;
            }
            puntoEncontrado = true;
        }
        else if (!isdigit(c[i])) {
            return false; 
        }
    }
    return true;
}

bool esFlotantePositivo(const char *c) {
    bool puntoEncontrado = false;
    bool tieneDigitoDistintoDeCero = false;

    if (strlen(c) == 0 || (c[0] == '-')) {
        return false;
    }

    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] == '.') {
            if (puntoEncontrado) {
                return false;
            }
            puntoEncontrado = true;
        } 
        else if (isdigit(c[i])) {
            if (c[i] != '0') {
                tieneDigitoDistintoDeCero = true;
            }
        } 
        else {
            return false;
        }
    }

    return tieneDigitoDistintoDeCero;
}

bool esAlfabetico(const char *c) {
    for (int i = 0; c[i] != '\0'; i++) {
        if(!isalpha(c[i]) && c[i] != ' ') {
            return false;
        }
    }
    return true;
}

bool tieneContenido(char *string) {
    int i = 0;
    bool encontroCaracter = false;

    while (!encontroCaracter && string[i] != '\0') {
        if (string[i] != ' ') {
            encontroCaracter = true;
        }
        i++;
    }

    return encontroCaracter;
}

bool masDeUnCaracter(char *string) {
    return string && string[0] != '\0' && string[1] != '\0';
}

bool soloHyL(char *senial) {
    bool bandera = true, resultado = true;
    int i = 0;
    while (bandera && (senial[i] != '\0')) {
        if ((senial[i] == 'L' || senial[i] == 'l') || (senial[i] == 'H' || senial[i] == 'h')) {
            i++;
        } else {
            resultado = false;
            bandera = false;
        }
    }
    return resultado;
}

bool verificarSenial(char *senial) {
    bool resultado = true;

    if (!tieneContenido(senial) || !soloHyL(senial)) {
        resultado = false;
    } 

    return resultado;
}

char* ingresoStrings(char *mensaje) {
    char palabra[101];
    bool valido = false;
    char *pp = NULL;

    while (!valido) {
        printf("%s", mensaje);

        if (fgets(palabra, sizeof(palabra), stdin) != NULL) {
            char *punteroEnter = strchr(palabra, '\n');

            if (punteroEnter != NULL) {
                *punteroEnter = '\0';
                valido = true;
            } else {
                printf("Error: Se supero el limite de 100 caracteres. Intente de nuevo.\n");

                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }
        }
    }

    pp = (char*)malloc((strlen(palabra) + 1) * sizeof(char));

    if (pp != NULL) {
        strcpy(pp, palabra);
    } else {
        printf("Error al solicitar memoria.");
    }
    
    return pp;
}

char* ingresoStringsTam(char *mensaje, int tam) {
    char palabra[tam + 1];
    bool valido = false;
    char *pp = NULL;

    while (!valido) {
        printf("%s", mensaje);

        if (fgets(palabra, sizeof(palabra), stdin) != NULL) {
            char *punteroEnter = strchr(palabra, '\n');

            if (punteroEnter != NULL) {
                *punteroEnter = '\0';
                valido = true;
            } else {
                printf("Error: Se supero el limite de %d caracteres. Intente de nuevo.\n", tam -1);

                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }
        }
    }

    pp = (char*)malloc((strlen(palabra) + 1) * sizeof(char));

    if (pp != NULL) {
        strcpy(pp, palabra);
    } else {
        printf("Error al solicitar memoria.");
    }
    
    return pp;
}

int ingresoDatosNumericos(char *mensajeError){
    bool chequeo = false;
    char * c;
    int num;
    while (!chequeo){
        c = ingresoStrings("");
        chequeo = (esDigito(c) && tieneContenido(c));
        if(!chequeo){
            printf("%s\n-> ", mensajeError);
            free(c);
            c = NULL;
        }
    }
    chequeo = false;
    num = atoi(c);
    free(c);
    return num;
}

int ingresoDatosNumericosPositivos(char *mensajeError) {
    bool chequeo = false;
    char * c;
    int num;

    while (!chequeo){
        c = ingresoStrings("");
        chequeo = (esDigitoPositivo(c) && tieneContenido(c));
        if (!chequeo) {
            printf("%s", mensajeError);
            free(c);
            c = NULL;
        }
    }

    chequeo = false;
    num = atoi(c);
    
    return num;
}

int ingresoDatosNumericosNoCero(char *mensajeError) {
    bool chequeo = false;
    char * c;
    int num;

    while (!chequeo) {
        c = ingresoStrings("");
        chequeo = (esDigitoPositivo(c) && tieneContenido(c) && noEsCero(c));

        if (!chequeo) {
            limpiarPantalla();
            printf("%s\n > ", mensajeError);
            free(c);
            c = NULL;
        }
    }

    chequeo = false;
    num = atoi(c);
    return num;
}

double ingresoDatosFloat(char *mensajeError) {
    bool chequeo = false;
    char *c;
    double num;

    while (!chequeo) {
        c = ingresoStrings("");
        reemplazarComasPorPuntos(c);
        chequeo = esFlotante(c) && tieneContenido(c);
        if (!chequeo) {
            limpiarPantalla();
            printf("%s", mensajeError);
            free(c);
        }
    }

    num = atof(c);
    free(c);
    return num;
}

double ingresoDatosFloatPositivos(char *mensajeError) {
    bool chequeo = false;
    char *c;
    double num;

    while (!chequeo) {
        c = ingresoStrings("");
        reemplazarComasPorPuntos(c);
        chequeo = esFlotantePositivo(c) && tieneContenido(c);
        if (!chequeo) {
            limpiarPantalla();
            printf("%s", mensajeError);
            free(c);
        }
    }

    num = atof(c);
    free(c);
    return num;
}

char* trim(char* string) {
    int inicio = 0;
    int fin = strlen(string) - 1;

    while (string[inicio] == ' ') {
        inicio++;
    }

    while (string[fin] == ' ') {
        fin--;
    }
    
    int i;
    for (i = 0; inicio <= fin; i++, inicio++) {
        string[i] = string[inicio];
    }

    string[i] = '\0';

    return string;

}

void sacarEspacios(char* string) {
    int i = 0, j = 0;

    while (string[i] != '\0') {
        if (string[i] != ' ') {
            string[j] = string[i];
            j++;
        }
        i++;
    }

    string[j] = '\0';

}

void todoAMayusculas(char* string) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = toupper((unsigned char)string[i]);
    }
}

bool preguntarContinuar() {
    char seleccion;
    
    while (true) {
        printf("\nDesea continuar? (s/n): ");
        
        if (scanf(" %c", &seleccion) != 1) continue;

        // Limpiar el buffer por si escribieron más de una letra (ej: "si")
        while (getchar() != '\n');

        seleccion = tolower(seleccion); // Convertir a minúscula

        if (seleccion == 's' || seleccion == 'n') {
            return (seleccion == 's');
        }

        printf("Entrada no valida. Use 's' para si o 'n' para no.\n");
    }
}

void limpiarPantalla() {
    printf("\033[H\033[J");
}

char* removerCerosIzquierda(char *string) {
    int i = 0;
    int j = 0;

    while (string[i] == '0' && string[i + 1] != '\0') {
        i++;
    }

    if (i == 0) {
        return string;
    }
    
    while (string[i] != '\0') {
        string[j++] = string[i++];
    }
    string[j] = '\0';

    return string;
}

bool NumeroMaxBits(char *string){

    long valor = strtol(string, NULL, 10);
    long max31 = (1L << 30) - 1;   
    long min31 = -(1L << 30);      

    if (valor > max31 || valor < min31) {
        return false; 
    }
    return true; 

}

void reemplazarComasPorPuntos(char *c) {
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] == ',') {
            c[i] = '.';
        }
    }
}

void mostrarComparacion(int respuesta){
    if(respuesta == 1){
        printf("por lo cual la lista 1 es MAYOR a la lista 2\n");
    }
    else if(respuesta == 2){
        printf("por lo cual la lista 1 es MENOR a la lista 2\n");
    }
    else{
        printf("ambas listas son iguales\n");
    }
}

Lista l_cargar(int cantidad) {
    Lista lista = l_crear();
    int num, guia = 0;
    TipoElemento nodo;

    while(!l_es_llena(lista) && guia < cantidad){
        printf("  | CLAVE NODO %d | ->\t", guia+1);
        num = ingresoDatosNumericos("Ingrese una clave valida!");
        nodo = te_crear(num);
        l_agregar(lista, nodo);
        guia++;
    }

    return lista;
}

Lista l_cargar_azar(int cantidad) {
    Lista lista = l_crear();
    int num, guia = 0;
    TipoElemento nodo;
    srand(time(NULL));

    while (!l_es_llena(lista) && guia < cantidad) {
        num = rand() % 151;
        nodo = te_crear(num);
        l_agregar(lista, nodo);
        guia++;
    } 

    return lista;
}