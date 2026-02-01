#include <bits/stdc++.h>
using namespace std;

int main () {
    int number, guess;
    srand(time(0));
    number = rand() % 100 + 1;

    int i = 1;

    while (i <= 5) {
        cin >> guess;

        if (number == guess) {
            cout << "🥳 You did this! Correct guess\n";
            break;
        }
        else if (guess < number) {
            cout << "Too low, think high 😊\n";
        }
        else {
            cout << "Too high 😅\n";
        }

        i++;
    }

    return 0;
}
