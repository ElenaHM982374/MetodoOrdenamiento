#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 8, 3, 6, 11, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mayor = arr[0];


for (int i = 1; i < n; i++) {
    if (arr[i] > mayor) {
        mayor = arr[i];
    }
}

printf("El numero mayor es: %d\n", mayor);
return 0;
}