#include <iostream>

int main() {
    
    unsigned u = 10, u2 = 42;
    std::cout << "unsigned u = " << u << " u2 = " << u2 << std::endl;
    std::cout << "u2 - u = " << u2 << " - " << u << " = " << u2 - u << std::endl;
    std::cout << "u - u2 = " << u << " - " << u2 << " = " << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << "int i = " << i << " i2 = " << i2 << std::endl;
    std::cout << "i2 - i = " << i2 << " - " << i << " = " << i2 - i << std::endl;
    std::cout << "i - i2 = " << i << " - " << i2 << " = " << i - i2 << std::endl;
    std::cout << "i - u = " << i << " - " << u << " = " << i - u << std::endl;
    std::cout << "u - i = " << u << " - " << i << " = " << u - i << std::endl;

}
