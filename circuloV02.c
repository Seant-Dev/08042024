#include <stdio.h>
#define PI 3.1416

int main() {
    float radio, area;
    printf("Dame el dato del radio: ");
    scanf("%f", &radio);
    if (radio > 0) {
        area = PI * (radio * radio);
        printf("El resultado del área es: %.4f\n", area);
    } else {
        printf("No se puede calcular el área\n");
    }
    return 0;
}
