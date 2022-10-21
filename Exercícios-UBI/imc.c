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
Exemplo de funcionamento do programa:
Input:
    Introduza altura (m):
    1.68
    Introduza peso (kg):
    55
Output:
    IMC=19.49
    CATEGORIA=Normal
    PMI=53.63
    PMA=70.56
*/

#include <stdio.h>

int main() {
    float altura, peso, imc;
    char *categoria;
    printf("Input:\n\tIntroduza altura (m):\n");
    scanf("\t%f",&altura);
    printf("\tIntroduza peso (kg):\n");
    scanf("\t%f",&peso);
    imc = peso/(altura*altura);
    printf("Output:\n\tIMC=%f\n", imc);
    if (imc < 19)
        categoria = "Magreza";
    else if (imc <=25)
        categoria = "Normal";
    else if (imc <=30)
        categoria = "Excesso de peso";
    else if (imc <=40)
        categoria = "Obesidade";
    else
        categoria = "Obesidade Mórbida";
    printf("\tCATEGORIA=%s\n",categoria);
    printf("\tPMI=%f\n",19*(altura*altura));
    printf("\tPMA=%f\n",25*(altura*altura));
    return 0;
}