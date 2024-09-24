#include <stdio.h>
#include <conio.h>

int main(){
    int calificaciones[5];
    int suma = 0;
    float promedio;

    // Entrada de calificaciones
    for (int i = 0; i < 5; i++) {
        printf("Calificación %d: ", i + 1);
        scanf("%d", &calificaciones[i]);
        suma += calificaciones[i]; // Acumula la suma
    }

    // Muestra las calificaciones
    for (int i = 0; i < 5; i++) {
        printf("Calificación %d: %d\n", i + 1, calificaciones[i]);
    }

    // Calcula y muestra la suma y el promedio
    promedio = suma / 5.0; // Se divide por 5.0 para obtener un float
    printf("Suma de las calificaciones: %d\n", suma);
    printf("Promedio de las calificaciones: %.2f\n", promedio);

    getch();
    return 0;
}