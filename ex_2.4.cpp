#include <iostream>

int main() {
    
    unsigned u = 0, u2 = 0;
    std:: cout << "Enter 2 number: " << std::endl;
    std::cin >> u >> u2;
    std::cout << "unsigned u = " << u << " u2 = " << u2 << std::endl;
    if (u2 > u)
        std::cout << "Correct: u2 - u = " << u2 << " - " << u << " = " << u2 - u << std::endl;
    else std::cout << "No correct: u2 - u = " << u2 << " - " << u << " = " << u2 - u << std::endl;

    int i = 0, i2 = 0;
    std:: cout << "Enter 2 number: " << std::endl;
    std::cin >> i >> i2;
    std::cout << "int i = " << i << " i2 = " << i2 << std::endl;
    if(i2 > i){
        std::cout << "Correct: i2 - i = " << i2 << " - " << i << " = " << i2 - i << std::endl;
        std::cout << "Correct: i - i2 = " << i << " - " << i2 << " = " << i - i2 << std::endl;
        std::cout << "Correct: i - u = " << i << " - " << u << " = " << i - u << std::endl;
    }
    else{
        std::cout << "No correct: u - i = " << u << " - " << i << " = " << u - i << std::endl;
        std::cout << "If u < i that result will be not correct." << std::endl;
    }
}
