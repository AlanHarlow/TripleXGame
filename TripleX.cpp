#include <iostream>

int main() {
    // Printng welcome message to the terminal
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n";

    // Declare 3 number code
    const int numOne = 4;
    const int numTwo = 3;
    const int numThree = 2;

    const int product = numOne * numTwo * numThree;
    const int sum = numOne + numTwo + numThree;

    // Print sum and product to terminal
    std::cout << product << std::endl;
    std::cout << sum << std::endl;

    return 0;
}