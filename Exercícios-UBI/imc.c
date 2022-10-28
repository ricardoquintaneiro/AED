/* O índice de massa corporal (IMC) relaciona a altura com o peso duma pessoa através da fórmula
IMC=peso/altura^2 ; a unidade de peso é o kg (quilograma) e a unidade de altura é o m (metro). A tabela
de classificação é a seguinte:
                 Categoria
     IMC <19     Magreza
19<= IMC <=25    Normal
25<  IMC <=30    Excesso de peso
30<  IMC <=40    Obesidade
         > 40    Obesidade Mórbida

Escreva um algoritmo e depois programa em C que calcule os seguintes indicadores corporais de uma
pessoa:
• IMC
• Categoria
• Peso mínimo (PMI=19 ́* altura^2 ) para que uma pessoa pertença à categoria normal.
• Peso máximo (PMA=25 ́* altura^2 ) para que uma pessoa pertença à categoria normal.
*/

#include <stdio.h>

int main()
{
    float altura, peso, imc;
    char *categoria;
    int escolha = -1;
    do
    {
        printf("0- Sair\n");
        printf("1- Cálculo do IMC e da respectiva categoria\n");
        printf("2- Cálculo do peso e mínimo (PMI) e peso máximo (PMA) para que uma pessoal pertença à categoria normal\n\n");
        scanf("%d", &escolha);
        printf("\n");
        switch (escolha)
        {
        case 0:
            break;
        case 1:
            printf("Input:\n\tIntroduza altura (m): ");
            scanf("\t%f", &altura);
            printf("\tIntroduza peso (kg): ");
            scanf("\t%f", &peso);
            imc = peso / (altura * altura);
            printf("Output:\n\tIMC=%.2f\n", imc);
            if (imc < 19)
                categoria = "Magreza";
            else if (imc <= 25)
                categoria = "Normal";
            else if (imc <= 30)
                categoria = "Excesso de peso";
            else if (imc <= 40)
                categoria = "Obesidade";
            else
                categoria = "Obesidade Mórbida";
            printf("\tCATEGORIA=%s\n", categoria);
            break;
        case 2:
            printf("Input:\n\tIntroduza altura (m): ");
            scanf("\t%f", &altura);
            printf("\tPMI=%.2f\n", 19 * (altura * altura));
            printf("\tPMA=%.2f\n", 25 * (altura * altura));
            break;
        default:
            printf("ERRO: opção inválida.\n");
        }
        printf("\n");
    } while (escolha != 0);
    return 0;
}