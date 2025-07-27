#include <iostream>
int maxValue(int a, int b){
    return std::max(a,b);
}
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
    int result=maxValue(int a, int b);
    return 0;
}
