// Ta med biblioteket "iostream"
// som g�r det m�jligt att, bl. a.
// f� utskrift fr�n programmet till
// sk�rmen.
#include <iostream>
// De bibliotek vi anv�nder tillh�r
// namnrymden std
using namespace std;

int main()
{
   // "system" betyder
   // k�r det som finns mellan
   // ("") i operativsystemet
   // om vi �ndrar till
   // teckenkodning 1252 funkar det med sv. tecken
   // chcp "Change Codepage" (teckenkodning)
   system("chcp 1252");
// sk�rmen(cout) utmatningsoperator(<<)
// "text" << radbrytning(endl)
    cout << "��� ���!" << endl;
    return 0;
}
