#include <iostream>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;

    bool first = true;
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            if (!first) std::cout << " ";
            std::cout << i;
            first = false;
        }
    }
    if (!first) {
        std::cout << std::endl;
    }

    return 0;
}