/* Pretende-se escrever os primeiros N números da
sequência de Fibonacci. A sequência de Fibonacci é a seguinte: 1, 1, 2, 3, 5, 8, 13, 21, ... (a seguir ao
primeiro 1 cada número na sequência é a soma dos dois números anteriores). */

#include <stdio.h>

int main() {
    int n, f1, f2, f3;
    f1 = 0;
    f2 = 1;
    printf("Escreva o N: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        f3 = f2;
        f2 = f2 + f1;
        f1 = f3;
        printf("%d ",f1);
    }
    printf("\n");
    return 0;
}