#include <iostream>

template <typename T>
T myMin(const T& a, const T& b) {
    return (a < b) ? a : b;
}

int main() {
    std::cout << myMin(5, 10) << "\n";
    std::cout << myMin(3.2, 2.8) << "\n";
    std::cout << myMin('b', 'a') << "\n";
    return 0;
}