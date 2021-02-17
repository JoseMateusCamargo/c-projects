//
// Created by JMC on 15/02/2021.
// Simple check if a number > 0 is odd.
//

#include <stdio.h>

int main() {
    int n, i = 2;
    char primo = 's';
    do {
        printf("\nType a number: ");
        scanf("%d", &n);
        if (n < 0)
            printf("\nError!");
    } while (n < 0);

    if (n < 2)
        primo = 'n';

    while (i <= n / 2 && primo == 's') {
        if (n % i == 0)
            primo = 'n';
        else
            i = i + 1;
    }

    if (primo == 's')
        printf("\n%d Is odd!!!", n);
    else
        printf("\n%d It's not an odd number.", n);

    fflush(stdin);
    getchar();
    return 0;
}