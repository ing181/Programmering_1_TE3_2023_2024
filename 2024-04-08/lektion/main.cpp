#include <iostream>

using namespace std;
void funktion(int tal)
{
    tal = tal + 3;
    cout << "(funktionen) tal=" << tal << endl;
}
int main()
{
    int tal = 6;
    cout << "(main) tal="<<tal << endl;
    funktion(tal);
    // Om referensparametrar anv�nds
    // p�verkas variabeln tal i main av
    // funktionen. T�nk "samma variabel"
    cout << "(main) tal="<<tal << endl;
    return 0;
}

