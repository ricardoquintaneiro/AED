#include <stdio.h>

/* Escreva um programa que converta um valor real em graus Fahreneit num valor em graus Celsius. */

int main() {
    float c, f;
    printf("Escreva a temperatura em Fahreneit: ");
    scanf("%f",&f);
    c = 5*(f-32)/9;
    printf("Temperatura em Celsius: %f\n", c);
    return 0;
}