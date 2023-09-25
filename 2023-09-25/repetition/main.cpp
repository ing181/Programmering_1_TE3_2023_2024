#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    system("chcp 1252");
    //float f;
   // cout << "Hello world!" << endl;
    // plus +, minus -,  gånger *, delat med /
    int heltal = 6;
    float decimaltal = 6;
    // division med heltal
    int tal = (heltal / 4);
    float tal1 = (decimaltal / 4);
    cout << tal << endl;
    cout << tal1 << endl;
/*
Jämförelseoperatorer
mindre än <
mindre än eller lika med <=
lika med ==
större än >
större än eller lika med >=
*/
    // utvärdering av (1>2)
    // antingn true, returnerar 1
    // eller false, returnerar 0
    cout << "Mata in ett heltal: ";
    int t;
    cin >> t;
   if (t>2){
        cout << "Större än 2" << endl;
   } else {
        cout << "INTE större än 2" << endl;
   }


    return 0;
}
