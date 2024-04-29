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
   cout << "Hur många personer vill du ha i din struct?" << endl;
   cout << "(10 personer får plats) :> ";
   cin >> antal;

   for (int i=0; i<antal; i++){
     cout << "Förnamn person nr. " << i+1 << ":> ";
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
    cout << "Sök person" << endl;
    cout << "Vill du söka på Förnamn, välj f" << endl;
    cout << "Vill du söka på Efternamn, välj e" << endl;
    cout << "Vill du söka på Telefonnummer, välj t" << endl;
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
cout << "Välj förnamn du vill söka på :> ";
cin >> sok;

int i=0;
 while (i < antal){
    if (sok == p[i].fnamn)
    {
        cout << "Den sökta personen är" << endl;
        cout << "Förnamn: " << p[i].fnamn << endl;
        cout << "Efternamn: " << p[i].enamn << endl;
        cout << "Telefonnummer: " << p[i].tfn << endl;
        meny(p,antal);

    }
    cout << "Personen du söker hittas inte" << endl;
    meny(p,antal);


 antal++;
 }


}
