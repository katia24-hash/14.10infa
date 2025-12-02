#include <iostream>

template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    std::cout << "Введите два целых числа (a и b): ";
    std::cin >> a >> b;
    swapValues(a, b);
    std::cout << "После обмена: a = " << a << ", b = " << b << std::endl;

    double x, y;
    std::cout << "Введите два дробных числа (x и y): ";
    std::cin >> x >> y;
    swapValues(x, y);
    std::cout << "После обмена: x = " << x << ", y = " << y << std::endl;

    return 0;
}