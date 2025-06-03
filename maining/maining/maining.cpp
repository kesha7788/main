#include <iostream>
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