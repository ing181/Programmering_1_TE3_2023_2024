#include <iostream>
using namespace std;
void menu();
void funktionA();
void funktionB();


int main()
{
    system("chcp 1252");
    menu();
    return 0;
}
void menu()
{
    char val;
    do{
    cout << "V�lj 0 f�r att avsluta" << endl;
    cout << "V�lj a" << endl;
    cout << "V�lj b" << endl;
    cout << ":>";
    cin >> val;


    switch (val){
    case '0':
    cout << "V�lkommen tillbaka!" << endl;
    break;
    case 'a':
    funktionA();
    break;
    case 'b':
    funktionB();
    break;
    default:
    cout << "Felaktigt val!" << endl;
    }

    } while (val != '0');

}
void funktionA()
{
   // cout << "Du valde \'a\'" << endl;
   funktionB();

}
void funktionB()
{
    //cout << "Du valde \'b\'" << endl;
    funktionA();

}

