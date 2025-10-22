#include <iostream>
#include <string>
using namespace std;
//prompt for videographer hub
int main()
{
    string Name;
    int LengthOfproject;
    string Camera;
    string EditingSoftware;
    cout << "Hello, production artist!\n";
    cout << "\n";
    //collecting information for possible collaborators
    cout << "Enter your name, your ideal video project length, your ideal camera, and your favorite editing software.\n";
    cout << "\n";
    cout << "Please seperate answers with a space.";
    cout << "\n" << endl;

    cin >> Name >> LengthOfproject;
    cin >> Camera >> EditingSoftware;

    cout << "\n";
    cout << "Name: " << Name << " "
        << endl;
    //Length of project will determine suggested battery packs needed
    cout << "Preffered length of project: " << LengthOfproject << endl;
    cout << "My camera: " << Camera << endl;
    cout << "My go-to editing software: " << EditingSoftware << endl;
    //Taking length of project time given and estimating extra battery packs needed for camera.
    int quotient = LengthOfproject / 30;
    cout << "\n";
    cout << "Side tip! Amount of extra battery packs needed for your ideal project: " << quotient << endl;
    return 0;
}
