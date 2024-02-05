#include <iostream>
using namespace std;
int main()
{
     // Windows comand promt klarar endast
     // Engelska tecken
     // Du kan säga till Windows att använda ett
     // annat sätt att representera tecken
     // Överst i main
     system("chcp 1252");
     // Change Code Page till 1252
     // Ett sätt att visa tecken som klarar
     // Sv. tecken

    // Utmatning
    // skärmen << "Hello world!" << radbrytning
    cout << "ÅÅÄÖÅ äöå" << endl;
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
   // cout << "Heltalsdivision: " << t1 / t2 << endl;
   // cout << "Modulus: " << t1 % t2 << endl;
    system("notepad.exe");

    return 0;
}
