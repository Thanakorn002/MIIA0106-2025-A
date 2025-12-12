#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));                 
    int secret = rand() % 100 + 1;  
    int guess;

    cout << "Guess the number (1-100)\n";

    while (true) {
        cout << "Your guess: ";
        cin >> guess;

        if (guess == secret) {
            cout << "Correct!\n";
            break;                 
        }
        else if (guess > secret) {
            cout << "Too high\n";
        }
        else {
            cout << "Too low\n";
        }
    }
}
