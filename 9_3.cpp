#include <iostream>

double power(double a, int n) {
    if (n == 0)
        return 1.0;
    if (n > 0)
        return a * power(a, n - 1);
    else
        return 1.0 / power(a, -n);
}

int main() {
    double a;
    int n;
    
    std::cout << "Введите основание a: ";
    std::cin >> a;
    
    std::cout << "Введите показатель степени n: ";
    std::cin >> n;
    
    std::cout << "Результат a^n: " << power(a, n) << std::endl;
    return 0;
}