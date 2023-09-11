#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    
    srand(static_cast<unsigned int>(time(nullptr)));

    int secretNumber = rand() % 100 + 1;
    
    int guess;
    int attempts=0;

    
    do {
        cout << "Enter your Number from (1-100): ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "your no. is too low renter no." << endl;
        } else if (guess > secretNumber) {
            cout << "your no. is too high renter no." << endl;
        } else {
            cout << "You guess the right no."<< endl;
            cout <<secretNumber;
        }
    } while (guess != secretNumber);

    return 0;
}
