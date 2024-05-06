#include <iostream>
using namespace std;
// Om statiska variabler i funktioner
int minStatiskaFunktion();
int minEjStatiskaFunktion();
int main()
{
    cout << "Från minStatiskaFunktion:   ";

    for(int i = 0; i < 10; i++) {
        cout << minStatiskaFunktion() << " ";
    }

    cout << endl;
    cout << "Från minEjStatiskaFunktion: ";

    for(int i = 0; i < 10; i++) {
        cout << minEjStatiskaFunktion() << " ";
    }

    cout << endl;
    return 0;
}
int minStatiskaFunktion()
{
    // här får i värdet 0
    static int i = 0;
    // i ökar med 1
    i++;
    // variabeln i finns kvar. Funktionen
    // minns värdet på i;
    return i;
}

int minEjStatiskaFunktion()
{
    // här får i värdet 0
    int i = 0;
    // i ökar med 1
    i++;
    // variabeln i finns kvar. Funktionen
    // minns värdet på i;
    return i;
}
