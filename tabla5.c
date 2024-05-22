#include <stdio.h>

int main() {
    int i, N;
    printf("Introduce el valor máximo para la tabla de multiplicar del 5: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }
    return 0;
}
