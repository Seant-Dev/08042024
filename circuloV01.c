#include <stdio.h>
#define PI 3.1416

int main() {
    float radio, area;
    printf("Dame el dato del radio: ");
    scanf("%f", &radio);
    area = PI * (radio * radio);
    printf("El resultado del área es: %.4f\n", area);
    return 0;
}
