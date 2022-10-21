#include <stdio.h>

/* Escreva um programa que determine se um número inteiro é par ou ímpar utilizando o operador condicional.*/

int main() {
    int a;
    printf("Escreva um número inteiro: ");
    scanf("%d",&a);
    printf("O número %d é %s.\n", a, a % 2 == 0 ? "par" : "ímpar");
    return 0;
}