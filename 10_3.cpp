#include <iostream>

template<typename T>
T sumArray(const T* arr, int size) {
    T sum = T();
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int N1 = 5;
    int arr[N1];
    std::cout << "Введите " << N1 << " целых чисел: ";
    for (int i = 0; i < N1; ++i) {
        std::cin >> arr[i];
    }
    std::cout << "Сумма целых чисел: " << sumArray(arr, N1) << std::endl;
    
    const int N2 = 3;
    double arrD[N2];
    std::cout << "Введите " << N2 << " дробных чисел: ";
    for (int i = 0; i < N2; ++i) {
        std::cin >> arrD[i];
    }
    std::cout << "Сумма дробных чисел: " << sumArray(arrD, N2) << std::endl;

    return 0;
}