#include <iostream>
using namespace std;
void arrayFunktion(int arr[]);
void unary(double &value);
int main()
{
    int vektor[] = {1,2,3,4,5};
    arrayFunktion(vektor);
    for (int i=0; i<5; i++ ){
        cout << vektor[i] << " ";
    }
    double varde = 2.56;
    unary(varde);
    cout << endl;
    cout << "varde = " << varde;

    return 0;
}
void arrayFunktion(int arr[])
{
    for (int i=0; i<5; i++ ){
        arr[i]=arr[i] * (-1);
    }

}
void unary(double &value)
{
 value = value * (-1);
}
