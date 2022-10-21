/* Pretende-se determinar se um determinado
número inteiro positivo é primo. Um número é primo se só for divisível por ele próprio e pela unidade. Por
exemplo: 13. Não deverão ser aceites números negativos. Nesse caso a aplicação deverá pedir números
até que seja introduzido um número válido. */

#include <stdio.h>

int main() {
    int a = -1;
    int divisores = 0;
    while (a < 0) {
        printf("Escreva um número inteiro: ");
        scanf("%d",&a);
    }
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) divisores++;
    }
    if (divisores == 2)
        printf("%d é um número primo.\n", a);
    else
        printf("%d NÃO é um número primo.\n", a);
    return 0;
}