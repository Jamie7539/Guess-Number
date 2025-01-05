#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    char playAgain = 'y';

    while (playAgain == 'y') {
        std::srand(static_cast<unsigned>(std::time(0)));
        int numberToGuess = std::rand() % 100 + 1;

        std::cout << "Guess a number between 1 and 100" << std::endl;

        int userGuess = 0;
        int attempts = 0;

        while (userGuess != numberToGuess) {
            std::cout << "Enter your guess: ";
            std::cin >> userGuess;
            attempts++;

            if (userGuess < numberToGuess) {
                std::cout << "Too low! Try again." << std::endl;
            } else if (userGuess > numberToGuess) {
                std::cout << "Too high! Try again." << std::endl;
            } else {
                std::cout << "You guessed the number!" << std::endl;
                std::cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << std::endl;
            }
        }

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    }

    return 0;
}
