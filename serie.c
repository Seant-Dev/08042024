#include <stdio.h>

int main() {
    int i, N, suma = 0;
    printf("Introduce el valor máximo de la serie: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        suma += i;
    }
    printf("El resultado de la suma de la serie es: %d\n", suma);
    return 0;
}
