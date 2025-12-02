#include <iostream>

int countChars(const char* str) {
    int count = 0;
    while (str[count] != '\0') {
        ++count;
    }
    return count;
}

int main() {
    char input[1000];
    
    std::cout << "Введите строку: ";
    std::cin.getline(input, sizeof(input));

    int length = countChars(input);
    std::cout << "Количество символов: " << length << std::endl;

    return 0;
}