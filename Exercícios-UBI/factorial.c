/* Pretende-se determinar o valor do factorial de um
número inteiro inserido pelo utilizador. */

#include <stdio.h>

long long int factorial (long long int n) {
    if (n > 1)
        return n * factorial(n-1);
    return 1;
}

int main() {
    long long int a, f;
    printf("Escreva um número inteiro: ");
    scanf("%lld",&a);
    f = factorial(a);
    printf("Factorial de %lld = %lld\n", a, f);
    return 0;
}