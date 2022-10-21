#include <stdio.h>

/* Escreva um programa que calcule as horas, os minutos e os
segundos dum dado tempo em segundos. Este tempo em segundos
é entrado via teclado pelo utilizador. */

int main() {
    int t,horas,minutos,segundos;
    printf("Escreva o tempo em segundos: ");
    scanf("%d",&t);
    segundos = t%60;
    minutos = t/60%60;
    horas = t/60/60;
    printf("Horas: %d, Minutos: %d, Segundos: %d\n",horas,minutos,segundos);
    return 0;
}