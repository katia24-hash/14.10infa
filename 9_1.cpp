#include <iostream>
#include <vector>
#include <unordered_set>

void removeDuplicates(const std::vector<int>& arr) {
    std::unordered_set<int> seen;
    std::vector<int> result;

    for (int x : arr) {
        if (seen.find(x) == seen.end()) {
            seen.insert(x);
            result.push_back(x);
        }
    }

    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) std::cout << " ";
        std::cout << result[i];
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Введите количество элементов массива: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Введите " << n << " целых чисел через пробел: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Массив без дубликатов: ";
    removeDuplicates(arr);
    return 0;
}