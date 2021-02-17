//
// Created by JMC on 15/02/2021.
// Recursive factorial calculator
//

#include <iostream>

using namespace std;

//Factorial function
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of entered number: " << f(num);
    return 0;
}