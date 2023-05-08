//Sandra Kolevska INKI969
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int num = rand() % 100 + 1;
    int guess, tries = 0;

    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;

        if (guess > num) {
            cout << "Lower" << endl;
        } else if (guess < num) {
            cout << "Higher" << endl;
        }

        tries++;
    } while (guess != num);

    cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;

    return 0;
}
