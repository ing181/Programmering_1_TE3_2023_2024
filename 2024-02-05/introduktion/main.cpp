#include <iostream>
using namespace std;
int main()
{
     // Windows comand promt klarar endast
     // Engelska tecken
     // Du kan s�ga till Windows att anv�nda ett
     // annat s�tt att representera tecken
     // �verst i main
     system("chcp 1252");
     // Change Code Page till 1252
     // Ett s�tt att visa tecken som klarar
     // Sv. tecken

    // Utmatning
    // sk�rmen << "Hello world!" << radbrytning
    cout << "����� ���" << endl;
    // variabler
    // heltal
    int tal;
    // flyttal (decimaltal)
    float tal2;
    // Regler f�r namngivning av variabler
    /*
    Otill�tna namn p� variabler
    B�rja med siffra
    int 2tal
    Anv�nd INTE ��� ���
    Inga mellanslag
    float tal 2
    Viktigt:
    Anv�nd beskrivande namn
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
    // +, -, * och / Fungerar som man t�nker sig
    // G�ller flyttal
    // Vid heltal: Modulus operatorn: %
    int t1 = 3;
    int t2 = 2;
   // cout << "Heltalsdivision: " << t1 / t2 << endl;
   // cout << "Modulus: " << t1 % t2 << endl;
    system("notepad.exe");

    return 0;
}
