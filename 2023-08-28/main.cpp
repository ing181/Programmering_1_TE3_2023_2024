#include <iostream>

using namespace std;

int main()
{
     system("chcp 1252"); // Sv. tecken
    // Matematiska operatorer
    // + - * / %
    // % modulusoperatorn
    // parenteser fungerar enligt
    // matematiska regler
    cout << (2+4*2) << endl;
    // returnerer resten vid
    // heltalsdivision
    cout << (7 % 3) << endl;// 1
    int heltal1;
    int heltal2;
    // inmatningsoperatorn ">>"
    // tangentbordet "cin"
    cout << "Mata in heltal 1: ";
    cin >> heltal1;
    cout << "Mata in heltal 2: ";
    cin >> heltal2;
    // Skapa och anv�nda
    // variabel i samma sats
    // Tilldelningsoperatorn "="
    // tilldelar det som finns till
    // v�nster om = v�rdet av det
    // som finns till h�ger.
    int summa = heltal1 + heltal2;
    cout << "Summan blir: " << summa << endl;

    return 0;
}
