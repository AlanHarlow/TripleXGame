#include <iostream>

int main() {
    // Printng welcome message to the terminal
    std::cout << "You are a secret agent breaking into a secure server room..." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeProduct = CodeA * CodeB * CodeC;
    const int CodeSum = CodeA + CodeB + CodeC;

    // Print sum and product to terminal
    std::endl;
    std::cout << "There are three numbers in the code" << std::endl;
    std::cout << "The code multiplies to: " << CodeProduct << std::endl;
    std::cout << "The code adds up to: " << CodeSum << std::endl;

    return 0;
}