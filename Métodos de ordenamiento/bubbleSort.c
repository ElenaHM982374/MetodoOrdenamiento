#include <stdio.h>
#include <stdlib.h> // Para rand() y srand()
#include <time.h>   // Para la función time()

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Intercambiamos arr[j] y arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n = 300; 
    int arr[n];
    
    // Inicializamos la semilla para números aleatorios
    srand(time(0));

    // Generamos números aleatorios y los imprimimos
    printf("Números generados aleatoriamente:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000; // Números aleatorios entre 0 y 999
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ordenamos el arreglo
    bubbleSort(arr, n);

    // Imprimimos el arreglo ordenado
    printf("\nArreglo ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}