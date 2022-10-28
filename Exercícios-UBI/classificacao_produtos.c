/* Escreva um algoritmo e depois um programa em C que identifique e classifique um produto num universo
de 5 produtos possíveis, medindo a concentração de 3 elementos constituintes, A, B e C, de acordo com
as concentrações dadas na seguinte tabela:
            A   B   C
Produto 1  0.1 0.5 0.6
Produto 2  0.1 0.3 0.7
Produto 3  0.2 0.5 0.7
Produto 4  0.2 0.3 0.1
Produto 5  0.2 0.5 0.6
Se as concentrações fornecidas pelo utilizador não corresponderem a nenhum produto da tabela, o
classificador deverá escrever: “Produto desconhecido”; caso contrário, deverá escrever o número do
produto identificado.*/

#include <stdio.h>

int main() {
    float produtos[5][3] = {0.1, 0.5, 0.6, 0.1, 0.3, 0.7, 0.2, 0.5, 0.7,
        0.2, 0.3, 0.1, 0.2, 0.5, 0.6};
    float produto_utilizador[3];
    int igualdade = 0;
    printf("Escreva a concentração do elemento A: ");
    scanf("%f",&produto_utilizador[0]);
    printf("Escreva a concentração do elemento B: ");
    scanf("%f",&produto_utilizador[1]);
    printf("Escreva a concentração do elemento C: ");
    scanf("%f",&produto_utilizador[2]);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (produto_utilizador[j] != produtos[i][j])
                break;
            igualdade += 1;
        }
        if (igualdade == 3) {
            printf("Produto identificado: %d\n", i+1);
            break;
        }
        igualdade = 0;
    }
    if (igualdade == 0)
        printf("Produto desconhecido.\n");
    return 0;
}