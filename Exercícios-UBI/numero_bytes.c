/* Escreva um programa que escreva no écrã o número de bytes ocupados em memória por um carácter
(char), um número inteiro (int), um número real (float), e um número real de precisão dupla (double). */

#include <stdio.h>

int main() {
    printf("Nº de bytes de char: %ld\n", sizeof(char));
    printf("Nº de bytes de int: %ld\n", sizeof(int));
    printf("Nº de bytes de float: %ld\n", sizeof(float));
    printf("Nº de bytes de double: %ld\n", sizeof(double));
    return 0;
}