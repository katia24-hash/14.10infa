#include <iostream>
#include <string>

char toLowerCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool isEqualIgnoreCase(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (size_t i = 0; i < s1.length(); ++i) {
        if (toLowerCase(s1[i]) != toLowerCase(s2[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string a, b;
    
    std::cout << "Введите первую строку: ";
    std::getline(std::cin, a);
    
    std::cout << "Введите вторую строку: ";
    std::getline(std::cin, b);

    if (isEqualIgnoreCase(a, b)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    
    return 0;
}