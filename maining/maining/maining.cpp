#include "UIControllerHEAD.h"
int main()
{
    string name = "HUH";
    setlocale(0, "rus");
    UIController uicontroler;
    uicontroler.Print(name);
    vector<string> s{ "1", "1", "1", "1", "1" };
    uicontroler.PrintMas(s);
}