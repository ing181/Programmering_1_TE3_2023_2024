#include <iostream>
using namespace std;
int main()
{
    // Utmatning
    // skärmen << "Hello world!" << radbrytning
    cout << "Hello world!" << endl;
    // variabler
    // heltal
    int tal;
    // flyttal (decimaltal)
    float tal2;
    // Regler för namngivning av variabler
    /*
    Otillåtna namn på variabler
    Börja med siffra
    int 2tal
    Använd INTE åäö ÅÄÖ
    Inga mellanslag
    float tal 2
    Viktigt:
    Använd beskrivande namn
    EX:
    age, alder
    name, namn
    kallesAlder
    kalles_alder
    */
    // Inmatning
    // Tangentbordet inmatningsoperator variabel
   // cin >> tal2;

   // cout << "tal2: " << tal2;
    // Aritmetiska operatorer
    // +, -, * och / Fungerar som man tänker sig
    // Gäller flyttal
    // Vid heltal: Modulus operatorn: %
    int t1 = 3;
    int t2 = 2;
    cout << "Heltalsdivision: " << t1 / t2 << endl;
    cout << "Modulus: " << t1 % t2 << endl;


    return 0;
}
