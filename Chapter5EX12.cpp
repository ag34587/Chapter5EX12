
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int number;
    double seed;
    seed = time(0);
    srand(seed);

   
    number = rand() % 100 + 1;
    int guess;

    
    while (true) {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high. Try again." << endl;
        }
        else if (guess < number) {
            cout << "Too low. Try again." << endl;
        }
        else {
            cout << "Congratulations. You figured out my number." << endl;
            break;
        }
    }

    return 0;
}


