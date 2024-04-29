#include <iostream>
using namespace std;

void arrFunktion(int arr[], int storlek)
{
    // En for-sata kan innehålla
    // flera variabler
    int counter=0;
    for (int i=0; i<6; i++,counter++){
        arr[i]=arr[i]*(-1);
    }
    cout << counter << endl;
}
int main()
{
    int arr[]={0,1,2,3,4,5};
    arrFunktion(arr, 6);
    // Om man sk skicka en
    // array till en funktion
    // skickar man namnet
    // på funktionen

        for (int i=0; i<6; i++){
        cout << arr[i] << " ";
        }
         cout << endl;
    return 0;
}
