#include <iostream>
#include <string>

template <typename T>
bool contains(const T* arr, int size, const T& value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) return true;
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << std::boolalpha << contains(arr, 5, 3) << "\n";

    std::string words[] = {"cat", "dog", "bird"};
    std::cout << std::boolalpha << contains(words, 3, std::string("fish")) << "\n";

    return 0;
}