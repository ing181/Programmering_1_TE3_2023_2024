#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    system("chcp 1252");
    //float f;
   // cout << "Hello world!" << endl;
    // plus +, minus -,  g�nger *, delat med /
    int heltal = 6;
    float decimaltal = 6;
    // division med heltal
    int tal = (heltal / 4);
    float tal1 = (decimaltal / 4);
    cout << tal << endl;
    cout << tal1 << endl;
/*
J�mf�relseoperatorer
mindre �n <
mindre �n eller lika med <=
lika med ==
st�rre �n >
st�rre �n eller lika med >=
*/
    // utv�rdering av (1>2)
    // antingn true, returnerar 1
    // eller false, returnerar 0
    cout << "Mata in ett heltal: ";
    int t;
    cin >> t;
   if (t>2){
        cout << "St�rre �n 2" << endl;
   } else {
        cout << "INTE st�rre �n 2" << endl;
   }


    return 0;
}
