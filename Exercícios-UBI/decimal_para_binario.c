/* Pretende-se converter um número decimal em
número binário. */

#include <stdio.h>
#include <math.h>

int main() {
    long long int b = 0;
    int i = 0;
    int d;
    int res;
    printf("Escreva um número em decimal: ");
    scanf("%d",&d);
    res = d;
    while (res > 0) {
        b += (res % 2) * pow(10.0,(double) i);
        res /= 2;
        i++;
    }
    printf("O número %d em binário é %lld.\n", d, b);
    return 0;
}