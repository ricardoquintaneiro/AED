/* Pretende-se determinar se um determinado
número inteiro é capicua. Um número é capícua se for o mesmo número lido da esquerda para a direita ou
da direita para a esquerda. Por exemplo: 202. */

#include <stdio.h>
#include <math.h>

int main() {
    int a, b=0, res=0, i=0;
    printf("Escreva um número inteiro: ");
    scanf("%d",&a);
    res = a;
    while (res > 0) {
        b =  (b * 10) + (res % 10);
        res /= 10;
        i++;
    }
    if (b == a)
        printf("O número é uma capicua.\n");
    else
        printf("O número NÃO é uma capicua.\n");
    return 0;
}