#include <stdio.h>

// Función de QuickSort
void clasi_rap(int datos[], int inf, int sup) {
    int i, j, tmp, elem_de_divi;

    if (sup > inf) {
        // Seleccionar el pivote como el último elemento
        elem_de_divi = datos[sup];
        i = inf - 1;
        j = sup;

        while (1) {
            // Encuentra el primer elemento mayor que el pivote desde la izquierda
            while (datos[++i] < elem_de_divi);

            // Encuentra el primer elemento menor que el pivote desde la derecha
            while (j > inf && datos[--j] > elem_de_divi);

            // Si los índices se cruzan, salimos del ciclo
            if (i >= j)
                break;

            // Intercambia los elementos en las posiciones i y j
            tmp = datos[i];
            datos[i] = datos[j];
            datos[j] = tmp;
        }

        // Coloca el pivote en su lugar (i es su posición correcta)
        tmp = datos[i];
        datos[i] = datos[sup];
        datos[sup] = tmp;

        // Llamadas recursivas para ordenar las dos mitades
        clasi_rap(datos, inf, i - 1);  // Ordena la mitad izquierda
        clasi_rap(datos, i + 1, sup);  // Ordena la mitad derecha
    }
}

// Función principal
int main() {
    // Array de prueba
    int datos[] = {33, 21, 45, 6, 9, 31, 40};
    int tam = sizeof(datos) / sizeof(datos[0]);  // Calcula el tamaño del array

    // Llamada a la función de QuickSort
    clasi_rap(datos, 0, tam - 1);

    // Imprime el array ordenado
    for (int i = 0; i < tam; i++) {
        printf("%d ", datos[i]);
    }

    return 0;
}
