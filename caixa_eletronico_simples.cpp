//
// Created by JMC on 15/02/2021.
// Em um caixa eletronico, o saque deve ser feito com o menor numero de notas possível, existem notas de 1,5,10,20 e 50.
// Além disso, há limitações de horários:
//  - Após 18h: máximo de 500;
//	- Após 22h: máximo de 200;
//	- Após 23h59: máximo de 100; (Até 06h00, após livre).
//

#include <stdio.h>
#include <limits.h>

main() {
    float hora;
    int saque, n50, n20, n10, n5, n1;
    printf("\nDigite a hora: ");
    scanf("%f", &hora);
    printf("\nDigite o valor do saque: ");
    scanf("%d", &saque);
    int maximo;

    if (hora > 18 && hora <= 22)
        maximo = 500;
    else if (hora >= 22 && hora <= 23.59)
        maximo = 200;
    else if (hora >= 0 && hora <= 6)
        maximo = 100;
    else
        maximo = INT_MAX; // sem limite de saque, precisa de <limits.h>
    if (saque > maximo)
        printf("\nValor nao permitido");
    else {
        n50 = saque / 50;
        saque = saque % 50; // % significa o resto da divisão
        n20 = saque / 20;
        saque = saque % 20;
        n10 = saque / 10;
        saque = saque % 10;
        n5 = saque / 5;
        n1 = saque % 5;
    }
    printf("\n%d nota de 50 reais", n50);
    printf("\n%d nota de 20 reais", n20);
    printf("\n%d nota de 10 reais", n10);
    printf("\n%d nota de 5 reais", n5);
    printf("\n%d nota de 1 reais", n1);
    fflush(stdin);
    getchar();
}