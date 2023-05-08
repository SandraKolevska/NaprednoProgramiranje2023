//Sandra Kolevska INKI969
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
   const char *face; // define pointer face
   const char *suit; // define pointer suit
}; // end struct card

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] );
void shuffle( Card * const wDeck );
void deal( const Card * const wDeck );

int main( void )
{
   Card deck[ CARDS ]; // define array of Cards

   // sto se pravi vo ovoj red ? //se pravi dinamicka alokacija na nizata *face
   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};

   // sto se pravi vo ovoj red ? se pravi dinamicka alokacija na nizata *suit
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

   srand( time( NULL ) ); // sto e ovaa naredba ?//go broi vremeto od pocetokot // Ovaa narebda e generator na slucaen broj so vrednosta na argumentot predadena na nego, vo ovaj slucaj 'time(null)'

   fillDeck( deck, face, suit ); 
   shuffle( deck ); 
   deal( deck ); 
} // end main

// place strings into Card structures
void fillDeck( Card * const wDeck, const char * wFace[],
   const char * wSuit[] )
{
   size_t i;
   
   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      wDeck[ i ].face = wFace[ i % FACES ];
      wDeck[ i ].suit = wSuit[ i / FACES ];
   } // end for
} // end function fillDeck

// shuffle cards
void shuffle( Card * const wDeck )
{
   size_t i; // sto e ovaa promenliva ?// ni broi kolku pati ni vrti for loopot za da gi izbroi kartite
   size_t j; // sto e ovaa promenliva i vo koi vrednosti se dvizi ? vidi kod // ni kazuva na koja karta sme i dvizi od 0 do 51
   Card temp; // define temporary structure for swapping Cards

   // loop thr
   for ( i = 0; i < CARDS; ++i ) {
      j = rand() % CARDS; // 
      temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   } // end for
} // end function shuffle

// deal cards
void deal( const Card * const wDeck )
{
   size_t i; // counter

   // loop through wDeck
   for ( i = 0; i < CARDS; ++i ) {
      printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
         ( i + 1 ) % 4 ? "  " : "\n" );
   } // end for
} // end function deal
/*Ovaa programa simulira shpil karti za igranje. Programata ja definira stukturata na kartata i site pokazuvaci koi pokazuvaat kon kartata.
Potoa, programata sozdava niza od strukturi na karti za da go pretstavi shilot karti.
Programata ima tri funkcii: fillDeck(), shuffle() ? deal().
Funkcijata fillDeck() go ispolnuva shpilot so 52 unikatni kombinacii.
Funkcijata shuffle() po slucaen izbor go mesha shpilot karti so zamena na parovi karti po slucaen broj pati.
Funkcijata deal() go otpecatuva izmeshaniot shpil karti, prikazuvajkji ja sekoja karta.
Funkcijata main() na programata gi povikuva ovie tri funkcii so cel da kreira, izmesha i razdeli shpilot karti.*/
