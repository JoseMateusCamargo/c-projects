//
// Created by JMC on 15/02/2021.
// Simple factorial calculator
//

#include <stdio.h>
#include <math.h> // to use abs()

int main() {
    int n, i = 2, fat = 1;
    printf("\nFactorial of: ");
    scanf("%d", &n);
    n = abs(n);

    while (i <= n) {
        fat = fat * i;
        i = i + 1;
    }

    printf("Result = %d", fat);
    getchar();
    return 0;
}