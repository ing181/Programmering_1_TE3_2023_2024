// Ta med biblioteket "iostream"
// som gör det möjligt att, bl. a.
// få utskrift från programmet till
// skärmen.
#include <iostream>
// De bibliotek vi använder tillhör
// namnrymden std
using namespace std;

int main()
{
   // "system" betyder
   // kör det som finns mellan
   // ("") i operativsystemet
   // om vi ändrar till
   // teckenkodning 1252 funkar det med sv. tecken
   // chcp "Change Codepage" (teckenkodning)
   system("chcp 1252");
// skärmen(cout) utmatningsoperator(<<)
// "text" << radbrytning(endl)
    cout << "ÅÄÖ åäö!" << endl;
    return 0;
}
