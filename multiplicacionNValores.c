#include <stdio.h>

int main() {
    int i, N;
    float valor, producto = 1.0;
    printf("¿Cuántos valores quieres multiplicar?: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("Introduce un valor: ");
        scanf("%f", &valor);
        producto *= valor;
    }
    printf("El resultado de la multiplicación es: %.4f\n", producto);
    return 0;
}
