#include <iostream>

long long power(long long a, int n) {
    if (n == 0) 
        return 1;
    return a * power(a, n - 1);
}

int main() {
    long long a;
    int n;
    
    std::cout << "Введите основание a: ";
    std::cin >> a;
    
    std::cout << "Введите показатель степени n (неотрицательное целое): ";
    std::cin >> n;
    
    std::cout << "Результат a^n: " << power(a, n) << std::endl;
    return 0;
}