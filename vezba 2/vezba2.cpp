//Sandra Kolevska INKI969
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
const int DECK_SIZE = 54;
const int SUIT_SIZE = 13;
string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
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
string deck[DECK_SIZE];
int index = 0;

for (int i = 0; i < 4; i++) {
for (int j = 0; j < SUIT_SIZE; j++) {
deck[index] = ranks[j] + " of " + suits[i];
index++;
}
}

deck[52] = joker;
deck[53] = joker;
srand(time(NULL));

cout << "Unshuffled Deck:" << endl;
for (int i = 0; i < DECK_SIZE; i++) {
cout << deck[i] << endl;
}
cout << "Shuffled Deck:" << endl;
for (int i = 0; i < DECK_SIZE; i++) {
shuffleDeck(deck, DECK_SIZE);
cout<<deck[i]<<endl;
}
}
/*Kodot e implementacija na meshanje na shpil na karti shto se sostojat od 52 standardni karti za igranje i dva dzokeri.
Zapocnuva so inicijaliziranje na shpilot na karti, vklucuvajki gi i redovite na kartite. Potoa dodava dva dzokeri na shpilot.
Funkcijata Shuffledeck () potoa se koristi za da se izmesha shpilot na karti. 
Ovaa funkcija go koristi generatorot na slucaen broj za da se izberat dva slucajni indeksi vo shpilot i da gi zameni nivnite pozicii.
Ovoj proces se povtoruva nekolku pati za da se osigura deka shpilot e dobro izmeshan.
Izmeshaniot shpil e otpecaten vo konzola*/
