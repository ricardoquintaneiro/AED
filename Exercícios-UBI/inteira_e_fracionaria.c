/* Escreva um programa que determine a parte inteira e a parte fraccionária dum número real. */

#include <stdio.h>

int main() {
    double real;
    printf("Escreva um número real: ");
    scanf("%lf",&real);
    int inteira = (int) real;
    double frac = real - inteira;
    printf("Parte inteira: %d\nParte fracionária: %lf\n",inteira,frac);
    return 0;
}