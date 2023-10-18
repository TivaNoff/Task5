#include <iostream>

double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    if (n % 2 == 0) {
        double half_pow = myPow(x, n / 2);
        return half_pow * half_pow;
    }
    else {
        double half_pow = myPow(x, n / 2);
        return half_pow * half_pow * x;
    }
}

int main() {
    double x = 2;
    int n = 10;
    double result = myPow(x, n);
    std::cout << "Result: " << result << std::endl;

    x = 2.1;
    n = 3;
    result = myPow(x, n);
    std::cout << "Result: " << result << std::endl;

    x = 2;
    n = -2;
    result = myPow(x, n);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
