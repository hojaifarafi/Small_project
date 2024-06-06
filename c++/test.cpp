#include <iostream>
#include <cuchar>

int main() {
    char32_t c = U'ক';
    std::cout << "The character is: " << static_cast<char>(c) << std::endl;
    return 0;
}
