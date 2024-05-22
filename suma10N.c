#include <stdio.h>

int main() {
    int i, rana, sumanum = 0;
    for (i = 0; i < 10; i++) {
        printf("Introduce un valor: ");
        scanf("%d", &rana);
        sumanum += rana;
        printf("El resultado de la suma parcial hasta este momento es: %d\n", sumanum);
    }
    printf("El valor total de la suma es: %d\n", sumanum);
    return 0;
}
