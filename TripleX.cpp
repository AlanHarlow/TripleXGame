#include <iostream>
#include <ctime>

void PrintIntroduction(int);
void PrintLevelInfo(int);
bool PlayGame(int);

int main() {
    srand(time(NULL)); // Sets random number seed based off time.

    int LevelDifficulty = 1;
    const int MaxLevel = 5;

    PrintIntroduction(MaxLevel);

    while(LevelDifficulty <= MaxLevel) {

        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if(bLevelComplete) {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "Great, you got the files. Now get out of there Agent!" << std::endl;
    return 0;
}

bool PlayGame(int Difficulty) {
    PrintLevelInfo(Difficulty);
    
    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeProduct = CodeA * CodeB * CodeC;
    const int CodeSum = CodeA + CodeB + CodeC;

    // Print sum and product to terminal
    std::cout << "+ The code adds up to: " << CodeSum << std::endl;
    std::cout << "* The code multiplies to: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    // Totals of guess used for testing for correct answer
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYou got in!" << std::endl;
        return true;
    }
    else{
        std::cout << "\nNot the correct code. The code has changed, try again." << std::endl;
        return false;
    }
}

void PrintIntroduction(int MaxLevel) {
    // Printng welcome message to the terminal
    std::cout << "\n\nYou are a secret agent and are attempting to steal files from a mainframe.\n";
    std::cout << "There are " << MaxLevel << " levels of security that you have to get through.\n";
    std::cout << "Enter the three numbers that make up the code, enter a space between each number.\n";
    std::cout << "The numbers will be between 1 and 9.\n";
}

void PrintLevelInfo(int Difficulty) {
    std::cout << "\n\nAttempting to access security level " << Difficulty << std::endl;
}