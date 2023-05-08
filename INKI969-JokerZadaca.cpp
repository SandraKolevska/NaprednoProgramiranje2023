//Sandra Kolevska INKI969
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const int deck_size = 54;
const int suit_size = 13;
const int num_players = 4;

string suits[4] = {"Srce", "Lokum", "Detelina", "List"};
string ranks[suit_size] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
string joker = "Joker";

void shuffleDeck(string deck[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        string temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

int main() {
    string deck[deck_size];
    int index = 0;

    string playerHands[num_players][suit_size];

    int numCardsDealt = 0;

    for (int i = 0; i < suit_size; i++) {
        for (int j = 0; j < 4; j++) {
            deck[index] = ranks[i] + suits[j];
            index++;
        }
    }
    deck[52] = joker;
    deck[53] = joker;

    srand(time(NULL));
         cout << "Unshuffled Deck:" << endl;
    for (int i = 0; i < deck_size; i++) {
        cout << deck[i] << endl;
    }

    shuffleDeck(deck, deck_size);

    cout << "\nShuffled Deck:" << endl;
    for (int i = 0; i < deck_size; i++) {
        cout << deck[i] << endl;
    }

    for (int i = 0; i < num_players; i++) {
        for (int j = 0; j < suit_size; j++) {
            playerHands[i][j] = deck[numCardsDealt];
            numCardsDealt++;
        }
    }

    for (int i = 0; i < num_players; i++) {
        cout << "\nPlayer " << i+1 << " Hand:" << endl;
        for (int j = 0; j < suit_size; j++) {
            cout << playerHands[i][j] << endl;
        }
        cout << endl;
    }
    return 0;

}
