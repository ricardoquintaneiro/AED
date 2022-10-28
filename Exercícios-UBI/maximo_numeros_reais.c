/* Escreva um programa que calcule o máximo de dois valores reais usando operador condicional. */

#include <stdio.h>

int main() {
    float a, b;
    printf("Escreva um número real: ");
    scanf("%f",&a);
    printf("Escreva outro número real: ");
    scanf("%f",&b);
    printf("O máximo: %f\n", a >= b ? a : b);
    return 0;
}