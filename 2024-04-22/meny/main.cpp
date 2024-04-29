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
    cout << "Välj 0 för att avsluta" << endl;
    cout << "Välj a" << endl;
    cout << "Välj b" << endl;
    cout << ":>";
    cin >> val;


    switch (val){
    case '0':
    cout << "Välkommen tillbaka!" << endl;
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

