/* Escreva um programa em C que apresente no ecrã a tabuada de N. Para isso deverá pedir ao utilizador o
valor de N que deverá ser obrigatoriamente maior ou igual 1 e menor ou igual a 10. A tabuada
apresentada é o exemplo para N = 2.
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20
*/

#include <stdio.h>

int main()
{
    int numero = 0;
    printf("Escreva um valor de N maior ou igual 1 e menor ou igual a 10: ");
    while (numero < 1 || numero > 10)
        scanf("%d", &numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}