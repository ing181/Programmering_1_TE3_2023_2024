#include <iostream>
using namespace std;
struct Person{
    string fnamn;
    string enamn;
};


int main()
{
    // int tal;
    Person myPerson;
    myPerson.enamn = "Siv";
    myPerson.fnamn = "Karlsson";
    cout << myPerson.fnamn << " " << myPerson.enamn;

    return 0;
}
