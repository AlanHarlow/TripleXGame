#include <iostream>
void PrintIntroduction(int);
bool PlayGame(int);

int main() {
    int LevelDifficulty = 1;

    while (true) {

        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete) {
            ++LevelDifficulty;
        }
        
    }
    return 0;
}

bool PlayGame(int Difficulty) {
    PrintIntroduction(Difficulty);
    
    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeProduct = CodeA * CodeB * CodeC;
    const int CodeSum = CodeA + CodeB + CodeC;

    // Print sum and product to terminal
    std::cout << "\nThere are three numbers in the code" << std::endl;
    std::cout << "+ The code adds up to: " << CodeSum << std::endl;
    std::cout << "+ The code multiplies to: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    // Totals of guess used for testing for correct answer
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You win!" << std::endl;
        return true;
    }
    else {
        std::cout << "You lose!" << std::endl;
        return false;
    }
}

void PrintIntroduction(int Difficulty) {
    // Printng welcome message to the terminal
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nEnter the correct code to continue..." << std::endl;
}