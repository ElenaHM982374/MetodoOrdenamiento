#include <stdio.h>

// Función que combina dos mitades de un array
void combina(int destino[], int fuente[], int inf, int mitad, int sup) {
    int i_inf, i_sup, i_destino;
    
    i_inf = inf;          // Índice para la primera mitad
    i_destino = inf;      // Índice para el array destino
    i_sup = mitad + 1;    // Índice para la segunda mitad

    // Combinación de las dos mitades
    while (i_inf <= mitad && i_sup <= sup) {
        if (fuente[i_inf] < fuente[i_sup]) {
            destino[i_destino] = fuente[i_inf];
            i_inf++;
        } else {
            destino[i_destino] = fuente[i_sup];
            i_sup++;
        }
        i_destino++;
    }

    // Copia los elementos restantes de la primera mitad (si es que quedaron)
    while (i_inf <= mitad) {
        destino[i_destino++] = fuente[i_inf++];
    }
    
    // Copia los elementos restantes de la segunda mitad (si es que quedaron)
    while (i_sup <= sup) {
        destino[i_destino++] = fuente[i_sup++];
    }
}

int main() {
    int fuente[] = {1, 3, 5, 7, 2, 4, 6, 8};  // Array de ejemplo
    int destino[8];  // Array destino donde se almacenarán los elementos combinados
    int inf = 0;     // Índice inferior
    int mitad = 3;   // Índice de la mitad
    int sup = 7;     // Índice superior

    // Llamada a la función que combina las mitades
    combina(destino, fuente, inf, mitad, sup);
    
    // Imprimir el array resultante después de combinar
    for (int i = 0; i < 8; i++) {
        printf("%d ", destino[i]);
    }
    
    return 0;
}
