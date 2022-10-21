/* Pretende-se converter um número binário em
número decimal. */

#include <stdio.h>
#include <math.h>

int main() {
    long long int b;
    int i = 0;
    int d = 0;
    long long int res;
    printf("Escreva um número em binário: ");
    scanf("%lld",&b);
    res = b;
    while (res > 0) {
        d += (res % 10) * pow(2.0,(double) i);
        res /= 10;
        i++;
    }
    printf("O número %lld em decimal é %d.\n", b, d);
    return 0;
}