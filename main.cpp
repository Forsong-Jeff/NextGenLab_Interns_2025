#include <iostream>
#include "minValue.cpp"

// Declarations for the 8 functions:
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int modulus(int a, int b);
int power(int a, int b);
int maxValue(int a, int b);
int minValue(int a, int b);

int main() {
    std::cout << "Calculator Initialized\n";
    // each function will be called here once implemented
     int a = 30;
    int b = 20;

    std::cout << "Min of " << a << " and " << b << " is: " << minValue(a, b) << "\n";
    return 0;
}

