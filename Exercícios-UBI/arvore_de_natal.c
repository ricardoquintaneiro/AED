/* Escreva um programa em C que apresente no ecrã uma árvore de Natal como a que se segue. Para isso
deverá pedir ao utilizador o valor de B que representa o número de asteriscos (*) na base da árvore. O
valor de B deverá ser obrigatoriamente ímpar e maior ou igual 3. Deverá pedir também o valor de L e A
que representam, respectivamente a largura e a altura do tronco da árvore. A largura do tronco L deverá
ser pelo menos 1 asterisco, deverá ser obrigatoriamente impar e não poderá ultrapassar metade de B,
isto é metade do número de asteriscos da base. A altura do tronco A deverá ser pelo menos 2 asteriscos e
também não deverá ultrapassar metade de B. Em caso de valores inválidos o programa deverá apresentar
um erro e voltar a pedi-los.
O exemplo da árvore em baixo tem uma base com B = 13 asteriscos, um tronco com largura L = 3
asteriscos e altura A = 4 asteriscos.
      *
     ***
    *****
   *******
  *********
 ***********
*************
     ***
     ***
     ***
     ***            */

#include <stdio.h>

int main()
{
    int base = 0;
    int largura = 0;
    int altura = 0;
    printf("Escreva o valor da base, ímpar e maior ou igual a 3: ");
    while (1)
    {
        scanf("%d", &base);
        if (base % 2 != 0 && base > 2)
            break;
        else
            printf("ERRO. Insira novamente: ");
    }
    printf("Escreva o valor da largura, ímpar, maior que 0 e menos de metade da base: ");
    while (1)
    {
        scanf("%d", &largura);
        if (largura % 2 != 0 && largura >= 1 && (float)largura / base < 0.5)
            break;
        else
            printf("ERRO. Insira novamente: ");
    }
    printf("Escreva o valor da altura, maior que 1 e menos de metade da base: ");
    while (1)
    {
        scanf("%d", &altura);
        if (altura >= 2 && (float)altura / base < 0.5)
            break;
        else
            printf("ERRO. Insira novamente: ");
    }
    int metade_base = base / 2;
    for (int i = 0; i < metade_base + 1; i++)
    {
        for (int j = 1; j <= base; j++)
        {
            if ((metade_base + 1 >= j - i) && (metade_base + 1 <= j + i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int k = 0; k < altura; k++) {
        for (int l = 1; l <= base; l++)
        {
            if ((l >= (metade_base + 1) - (float)largura/2.0) && (l <= (metade_base + 1) + (float)largura/2.0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}