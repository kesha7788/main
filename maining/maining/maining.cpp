<<<<<<< HEAD
﻿#include <iostream>
#include "UIControllerHEAD.h"
#include "InputController.h"
int main()
{
    /*string name = "HUH";
    setlocale(0, "rus");
    UIController uicontroler;
    uicontroler.Print(name);
    vector<string> s{ "1", "1", "1", "1", "1" };
    uicontroler.PrintMas(s);*/

    InputController inputcontroller;
    string k;
    string d = inputcontroller.SaveInput(k, "Name: ");

    vector<string> list{ "stas", "oleg", "masha" };
    int f = inputcontroller.ChooseInput(list);
    cout << d;

}
=======
﻿#include "links.h"
void clearInputBuffer();
void RandomCart();
void RandomNum();
using namespace std;
int main()
{
    /*string name = "HUH";
    UIController uicontroler;
    uicontroler.Print(name);
    vector<string> s{ "1", "1", "1", "1", "1" };
    uicontroler.PrintMas(s);
    cout << endl;
    InputController inputcontroller;
    inputcontroller.*/
    srand(time(0));
    setlocale(0, "rus");
    string Enter, help;
    help = "1.Help - Shows functions\n\
2.Exit - Exits the program \n\
3.Clear - Clear console \n\
4.Secret - Don't check it \n\
5.Calculator - Counting simple math examples \n\
6.Discriminant - finds the discriminant and its roots \n\
7.RandomCart - Gives a random card \n\
8.RandNum - Gives a random number \n";
    cout << "Available functions: " << endl << help << endl;
    // else if (Enter == "" || Enter == "" || Enter == "" || Enter == "") {}
    while (true) {
        cout << "Enter: ";
        cin >> Enter;
        cout << endl;
        if (Enter == "Help" || Enter == "help" || Enter == "HELP" || Enter == "1") { cout << "Help: " << endl << help << endl; }
        else if (Enter == "Exit" || Enter == "exit" || Enter == "EXIT" || Enter == "2") { break; }
        else if (Enter == "Clear" || Enter == "clear" || Enter == "CLEAR" || Enter == "3") { system("cls"); }
        else if (Enter == "Secret" || Enter == "secret" || Enter == "SECRET" || Enter == "4") { Secret(); }
        else if (Enter == "Calculator" || Enter == "calculator" || Enter == "CALCULATOR" || Enter == "5") { Calculator(); }
        else if (Enter == "Discriminant" || Enter == "discriminant" || Enter == "DISCRIMINANT" || Enter == "6") { Discriminant(); }
        else if (Enter == "RandCart" || Enter == "randcart" || Enter == "RANDCART" || Enter == "7") { RandomCart(); }
        else if (Enter == "RandNum" || Enter == "randnum" || Enter == "RANDNUM" || Enter == "8") { RandomNum(); }


        else { cout << "This function is not yet available!" << endl << "Try the available features: " << endl << help << endl; }
    };

    return 0;
}


void clearInputBuffer() {
#undef max
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
#define max(a, b) (((a) > (b)) ? (a) : (b))
}
void RandomCart() {
    string language; int a;
    system("cls");
    cout << "RandCart: " << endl;
    cout << "Select language: English or Russian ";
    cin >> language;
    cout << "Write how many cards you want to be shown: ";
    cin >> a;

    const vector<string> ranks = { };
    const vector<string> suits = { };

    if (language == "English" || language == "english" || language == "Eng" || language == "1") {
        const vector<string> ranks = { "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
        const vector<string> suits = { "Spades", "Hearts", "Diamonds", "Clubs" };
    }
    else if (language == "Russian" || language == "russian" || language == "Rus" || language == "2") {
        const vector<string> ranks = { "6", "7", "8", "9", "10", "Валет", "Дама", "Король", "Туз" };
        const vector<string> suits = { "Пики", "Черви", "Буби", "Треф" };
    }
    
    vector<pair<int, int>> deck;
    for (int r = 0; r < ranks.size(); ++r) {
        for (int s = 0; s < suits.size(); ++s) {
            deck.emplace_back(r, s);
        }
    }

    if (a > 36) { cout << "There are only 36 cards in the deck!" << endl << endl; }
    else {
        random_shuffle(deck.begin(), deck.end());

        for (int i = 0; i < a; ++i) {
            int rankIndex = deck[i].first;
            int suitIndex = deck[i].second;

            cout << i + 1 << ". " << ranks[rankIndex] << " " << suits[suitIndex] << endl << endl;
        }
    }
    cout << "Press Enter to return to the menu...";
    clearInputBuffer();
    cin.get();
    system("cls");
}
void RandomNum() {
    system("cls");
    cout << "RandNum: " << endl;
    cout << "if you want to clear the console write: Clear" << endl;
    cout << "If you want to exit RandNum mode then write: Exit" << endl;
    cout << "Example: 1 10 (RandNum: 1 - 10)" << endl << endl;

    clearInputBuffer();
    string RandomNum_input;

    while (true) {
        cout << "Enter the numbers: ";
        getline(cin, RandomNum_input);

        if (RandomNum_input == "Exit" || RandomNum_input == "exit" || RandomNum_input == "EXIT") { system("cls"); break; }
        else if (RandomNum_input == "Clear" || RandomNum_input == "clear" || RandomNum_input == "CLEAR") { system("cls"); }
        else {
            int a = 0, b = 0;
            istringstream ss(RandomNum_input);

            if (ss >> a >> b) { if (a > b) { swap(a, b); } int randomNumber = rand() % (b - a + 1) + a; cout << "RandNum: " << randomNumber << endl << endl; }
            else { cout << "Incorrect operation!" << endl << endl; }
        }

    }
}

>>>>>>> 25ae5be67fdd4c67a37195b59bdb9495043d1dc0
