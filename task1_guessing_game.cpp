#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the correct number!" << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
