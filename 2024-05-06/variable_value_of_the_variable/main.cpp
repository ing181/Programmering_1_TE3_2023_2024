
#include <iostream>
using namespace std;
// The variable or the value of the variable.
// Array as input value
void sendArray(float to[], int quantity);
// A value is sent here, not a variable.
int myFunction(int inputValue_1, int inputValue_2);
// A variable is sent here.
void myFunction2(int inputValue_1, int inputValue_2, int &inputValue_3);
int main()
{
    // Arrays, then the array is always sent, not the value.
    float myArray[] = {1.1, 2.2, 3.3};
    sendArray(myArray, 3);

    for(int i = 0; i < 3; i++) {
        cout << myArray[i] << " ";
    }

    cout << endl;
    cout << endl;
    int a = 2;
    int b = 3;
    int c = 4;
    int summa = myFunction(a, b);
    cout << summa << endl;
    cout << endl;
    myFunction2(a, b, c);
    cout << c << endl;
    cout << endl;
    return 0;
}
void sendArray(float to[], int quantity)
{
    int i = 0;

    while(i < quantity) {
        to[i] = 9.9;
        i++;
    }
}
int myFunction(int inputValue_1, int inputValue_2)
{
    return inputValue_1 + inputValue_2;
}
void myFunction2(int inputValue_1, int inputValue_2, int &inputValue_3)
{
    inputValue_3 = (inputValue_1 + inputValue_2);
}
