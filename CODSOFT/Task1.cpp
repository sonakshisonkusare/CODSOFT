#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randum_num,guess;
    srand(time(0));

    randum_num = rand() % 100 + 1;
    guess = 0;

    cout << "Guess the number:"<<endl;

    do {
        cin >> guess;

        if (guess > randum_num) {
            cout << "Higher Number! Try again"<<endl;
        } else if (guess < randum_num) {
            cout << "least number! Try again"<<endl;
        }
    } while (guess != randum_num);

    cout << "Guessed the right number" << randum_num <<endl;

    return 0;
}