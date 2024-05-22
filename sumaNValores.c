#include <stdio.h>

int main() {
    int i, N, rana, sumanum = 0;
    printf("¿Cuántas veces quieres que se repita la solicitud del dato?: ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        printf("Introduce un valor: ");
        scanf("%d", &rana);
        sumanum += rana;
        printf("El resultado de la suma parcial hasta este momento es: %d\n", sumanum);
    }
    printf("El valor total de la suma es: %d\n", sumanum);
    return 0;
}
