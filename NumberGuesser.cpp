#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {

    srand(time(0));
    int randomNum = rand() % 101;
    int guess = -1;

    while (guess != randomNum) {
        cout << "Type a number: ";
        cin >> guess;
        if (guess < randomNum) {
            cout << "Larger.\n";
        }
        else if (guess > randomNum) {
            cout << "Smaller.\n";
        }
        else {
            cout << "Correct!";
        }
    }

    return 0;

}