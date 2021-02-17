//
// Created by JMC on 15/02/2021.
// simples calculo de media de 4 objeto, exibe a média do aluno, e a média geral.
//

#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    double ma, mg;
    int i;
    for (i = 1; i <= 3; i++) {
        ma = 0;
        printf("\nDigite as 04 notas: %d\n", i);
        scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
        ma = (n1 + n2 + n3 + n4) / 4;
        printf("\nMedia = %f", ma);
    }

    mg = ma;
    mg /= 3;
    printf("\nMedia geral= %1.4f", mg);
    fflush(stdin);
    getchar();
    return 0;
}