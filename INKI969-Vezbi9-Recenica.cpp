#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int lowercase = 0, uppercase = 0, digits = 0, special_chars = 0, length = sentence.length();

    for (int i = 0; i < length; i++) {
        char c = sentence[i];
        if (islower(c))
            lowercase++;
        else if (isupper(c))
            uppercase++;
        else if (isdigit(c))
            digits++;
        else
            special_chars++;
    }

    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special_chars << endl;
    cout << "Length of string: " << length << endl;

    return 0;
}
