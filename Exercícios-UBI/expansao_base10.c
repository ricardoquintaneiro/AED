/* Escreva um programa que leia um número decimal de três dígitos a partir do teclado e que escreva no
ecrã a correspondente expansão na base 10. Por exemplo, o número 937 terá a seguinte saída no ecrã:
937 = 7 * 1 + 3 * 10 + 9 * 100. */

#include <stdio.h>

int main() {
    int n,centenas,dezenas,unidades;
    printf("Escreva um número decimal de três dígitos: "); // AVISO: Falta uma maneira de o verificar!
    scanf("%d",&n);
    centenas = n / 100;
    dezenas = n % 100 / 10;
    unidades = n % 100 % 10;
    printf("%d = %d * 1 + %d * 10 + %d * 100\n", n, unidades, dezenas, centenas);
    return 0;
}