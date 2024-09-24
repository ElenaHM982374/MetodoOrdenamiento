#include  <stdio.h>
#include  <conio.h> 

int main(){
    int numeros[5] = {11, 32, 23, 46, 88};
    int calificaciones[5];

   // int tamanio = sizeof (numeros) / sizeof(numeros[0]);
    // printf("tamaño del arreglo: %d \n", tamanio);

    for(int i = 0; i <5; i ++){
    printf("calificacion %d:", i+1);
    scanf("%d", &calificaciones [i]);
    }
    

    for(int i = 0; i <5; i ++){
    printf("calificacion [%d]: %d \n ", i+1, calificaciones[i]);
    }
    //* printf("%d",numeros[3]);

    //*printf("Valor cambiado en la posicion 4: %d", numeros[3]);
    //*numeros[3] = 55;

    //*printf("Valor cambiado en la posicion 4: %d", numeros[3]);

    getch();

    return 0;

}