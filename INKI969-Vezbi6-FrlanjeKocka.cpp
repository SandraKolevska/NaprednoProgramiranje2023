//Sandra Kolevska INKI969
#include <iostream>
#include <time.h>
#include <cstdlib>
//#include <windows.h>
using namespace std;
void one();
void two();
void three();
void four();
void five();
void six();
//Deklariranje na koristeni funkcii
int main()
{
    short unsigned int score = 0;
    short unsigned int compScore = 0;
    short unsigned int num = 0;
    short unsigned int num2 = 0;
    short unsigned int compNum = 0;
    short unsigned int compNum2 = 0;
    short unsigned int sum = 0;
    short unsigned int compSum = 0;
    char letter;
//Declare Variables
    srand(time(NULL));
    while (letter != 'q')
    {
        cout << "Your Score: " << score << endl;
        cout << "computer's Score: " << compScore << endl << endl;
        cout << "Press r to roll or q to quit: ";
        cin >> letter;
        num = 1 + rand()%6;
        num2 = 1 + rand() %6;
        compNum = 1 + rand() %6;
        compNum2 = 1 + rand() %6;
//sto se sluciva so redovite 32 do 36 i koi se vrednostite na promenlivite ?
//se vnesuva bukva koja sto treba da e r za da se svrti kockata i q za da zavrsime so frlanje na kocka.
//ni dava random brojka na kocka, i ja deli so 6 za da ni dava brojki od 0 do 5 za toa da se reshi se dodava +1
//Promenlivite num i num2 se vrednostite od frlanjeto na dvete kocki na korisnikot, dodeka compNum i compNum2 se vrednostite od frlanjeto na kocka na kompjuterot
   sum = num + num2;
        compSum = compNum + compNum2;

//Sobiranje na vrednostite

        if (letter == 'q')
            break;
        if (letter != 'r')
        {
            system("cls");
            continue;
        }

        switch (num)
        {
            case 1:
                one();
                break;
            case 2:
                two();
                break;
            case 3:
                three();
                break;
            case 4:
                four();
                break;
            case 5:
                five();
                break;
            case 6:
                six();
                break;
            default: 
        //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ?
        //Vo ovoj slucaj ne se neophodni, poradi toa shto kockata moze da bide od 1 do 6
        //funkcijata na 71 i 72 e dokolku ni eden od 6te slucaevi ne e tochen, da ispechati Error...
cout << "Error...";
                cout << "Error...";
                break;
        }  //kraj na switch case-ot za prviot broj

        switch (num2)
        {
            case 1:
                one();
                break;
            case 2:
             two();
                break;
            case 3:
                three();
                break;
            case 4:
                four();
                break;
            case 5:
                five();
                break;
            case 6:
                six();
                break;
           default:// //dali 71 i 72 se neophodni i koja im e funkcijata vo kodot ?
            // Nitu vo ovoj slucaj ne se neophodni. Default ni e ako ni edna od 1-6 ne ni e tocno da ispecati error. Kodot mozi da raboti bez default.
                cout << "Error...";
                break;
        } //kraj na switch case-ot za vtoriot broj

        cout << endl << "Yours: " << num << ", " << num2 << endl;
        cout << "Computer's: " << compNum << ", " << compNum2 << "\n\n";

//Display dice and numbers

        if (sum > compSum)
        {
            cout << "You won!!" << endl << endl;
            score++;
        }
        else
        {
            compScore++;
            cout << "you lost..." << endl << endl;
        }

//shto rabotat naredbite 119 i 120 ?

        system("pause");// komanda koja se koristi za da go pauzira prozorecot na konzolata, se ceka pred da se iskluci programata
        system("cls");// so ova komanda ni se cisti rabotnata povrsina


    }
    return 0;
}
void one()
{
    cout << "-----" << endl;
    cout << "|   |" << endl;
    cout << "| O |" << endl;
    cout << "|   |" << endl;
    cout << "-----" << endl;
}
void two()
{
    cout << "-----" << endl;
    cout << "| O |" << endl;
    cout << "|   |" << endl;
    cout << "| O |" << endl;
    cout << "-----" << endl;
}
void three()
{
    cout << "-----" << endl;
    cout << "| O |" << endl;
    cout << "| O |" << endl;
    cout << "| O |" << endl;
    cout << "-----" << endl;
}
void four()
{
    cout << "-----" << endl;
    cout << "|O O|" << endl;
    cout << "|   |" << endl;
    cout << "|O O|" << endl;
    cout << "-----" << endl;
}
void five()
{
    cout << "-----" << endl;
    cout << "|O O|" << endl;
    cout << "| O |" << endl;
    cout << "|O O|" << endl;
    cout << "-----" << endl;
}
void six()
{
    cout << "-----" << endl;
    cout << "|O O|" << endl;
    cout << "|O O|" << endl;
    cout << "|O O|" << endl;
    cout << "-----" << endl;
}
/*Ova e programa koja simulira trkalanje kocki. Od korisnikot se bara da pritisne 'r' za da gi frli kockite ili 'q' za da se otkaze.
Koga korisnikot kje pritisne 'r', se frlaat dve kocki i se presmetuva zbirot na broevite na kockite.
Potoa programata frla dve kocki za kompjuterot, go presmetuva zbirot na broevite na tie kocki i gi prikazuva rezultatite.
Potoa programata odreduva dali korisnikot ili kompjuterot pobedile vo krugot i soodvetno go azurira rezultatot.
Programata prodolzuva dodeka korisnikot ne pritisne 'q' za da se otkaze.
Programata koristi funkcii za prikazuvanje na kockite. Ima shest funkcii, po edna za sekoj mozen broj od matricata. Ovie funkcii pecatat pretstava na soodvetniot broj na matrica.
Programata, isto taka koristi izjava za prekinuvac za da odredi koja funkcija za da ja povika vrz osnova na brojot frlen na kockata.
Ako rotiraniot broj ne e pomegju 1 i 6, se prikazuva poraka za greshka.
Programata ja koristi funkcijata „srand“ za da go zasadi generatorot na slucaen izbor, koj se koristi za generiranje na broevite na kockite.
Funkcijata „time“ se koristi za generiranje vrz osnova na tekovnoto vreme.
Programata usto taka ja koristi funkcijata „system“ za da ja ispecati konzolata i da ja pauzira programata pred da izlezeme.*/
