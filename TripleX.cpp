#include <iostream>
#include <ctime>

void PrintIntroduction(int);
bool PlayGame(int);

int main() {
    srand(time(NULL)); // Sets random number seed based off time.

    int LevelDifficulty = 1;
    const int MaxLevel = 5;

    while(LevelDifficulty <= MaxLevel) {

        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if(bLevelComplete) {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "Great work, you got all the codes." << std::endl;
    return 0;
}

bool PlayGame(int Difficulty) {
    PrintIntroduction(Difficulty);
    
    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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

    if(GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You got in, moving to the next level." << std::endl;
        return true;
    }
    else{
        std::cout << "Not correct, attempting the level again." << std::endl;
        return false;
    }
}

void PrintIntroduction(int Difficulty) {
    // Printng welcome message to the terminal
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nEnter the correct code to continue..." << std::endl;
}