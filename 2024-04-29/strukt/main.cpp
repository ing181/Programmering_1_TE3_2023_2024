#include <iostream>
using namespace std;
struct Person
{
    string fnamn;
    string enamn;
    string tfn;
};
void sokFornamn(Person p[], int antal);
void meny(Person p[], int antal);
//void sokFornamn(Person p[]);
int main()
{

   system("chcp 1252");
   //Person myPerson;
   Person minaPersoner[10];
   int antal=0;
   cout << "Hur m�nga personer vill du ha i din struct?" << endl;
   cout << "(10 personer f�r plats) :> ";
   cin >> antal;

   for (int i=0; i<antal; i++){
     cout << "F�rnamn person nr. " << i+1 << ":> ";
     cin >> minaPersoner[i].fnamn;
     cout << "Efternamn person nr. " << i+1 << ":> ";
     cin >> minaPersoner[i].enamn;
     cout << "Telefonnummer person nr. " << i+1 << ":> ";
     cin >> minaPersoner[i].tfn;


   }
    meny(minaPersoner, antal);


    return 0;
}
void meny(Person p[], int antal)
{
    char val;
    cout << "S�k person" << endl;
    cout << "Vill du s�ka p� F�rnamn, v�lj f" << endl;
    cout << "Vill du s�ka p� Efternamn, v�lj e" << endl;
    cout << "Vill du s�ka p� Telefonnummer, v�lj t" << endl;
    cout << ":> ";

    cin >>  val;

    switch(val){
    case 'f':
    sokFornamn(p,antal);
    break;
    default:
    cout << "Ogiltigt val!" << endl;
     meny(p,antal);
    }


}
void sokFornamn(Person p[],int antal){
string sok;
cout << "V�lj f�rnamn du vill s�ka p� :> ";
cin >> sok;

int i=0;
 while (i < antal){
    if (sok == p[i].fnamn)
    {
        cout << "Den s�kta personen �r" << endl;
        cout << "F�rnamn: " << p[i].fnamn << endl;
        cout << "Efternamn: " << p[i].enamn << endl;
        cout << "Telefonnummer: " << p[i].tfn << endl;
        meny(p,antal);

    }
    cout << "Personen du s�ker hittas inte" << endl;
    meny(p,antal);


 antal++;
 }


}
