#include <iostream>

int main() {
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n";

    int a = 4;
    int b = 3;
    int c = 2;

    int sum = a + b + c;
    int product = a * b * c;

    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}