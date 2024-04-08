#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <random>

using namespace std;

int getRandomNumber() {

	 // Använder random device för att seeda Mersenne Twister engine
	random_device rd;
	mt19937 mt(rd());

	// Genererar ett random nummer mellan 1 och 10
	uniform_int_distribution<int> distribution(1, 10);
	int randomNumber = distribution(mt);

	return randomNumber;
}

void printMessage(string message) {

	cout << message;

}

int calculateSum(int num1, int num2) {

	return num1 + num2;

}

// that swaps the values of two integers using references.
void swapNumbers(int &num1, int &num2)
{
    int tmp=num1;
    num1=num2;
    num2=tmp;
}
// that returns the average of an integer array.
double calculateAverage(int arr[], int storlek) {
    double summa=0;
    for (int i=0; i<storlek; i++){
        summa=summa+arr[i];
    }
    double average = summa / storlek;
    return average;
}

// that reverses the order of an array without using additional arrays for storage.
void reverseArray(int arr[], int size) {
     int tmp;
	for (int i=0, j=4; i<2; i++, j--)
    {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;

    }
}

int main() {

	string name = "Calle";
	string message = name + " is learning C++ functions, loops, and more!\n";
	printMessage(message); // skickar meddelandet till printMessage som skriver ut det

	int num1 = getRandomNumber(); // genererar 1 random siffra
	cout << num1 << "\n";
	int num2 = getRandomNumber(); // genererar ytterligare en random siffra
	cout << num2 << "\n";

	int total = calculateSum(num1, num2);
	cout << total << "\n"; // Skriver ut summan av de två talen num1 och num2

	for (int i = 0; i < 5; i++) {

		int num3 = getRandomNumber();
		cout << num3 << " Iteration: " << (i + 1) << "\n";

	}

	int a=3;
	int b=2;
	cout << "a=" << a << " b=" << b << endl;
	swapNumbers(a,b);
	cout << "a=" << a << " b=" << b << endl;

	int arr[]={0,1,2,3,4};
	cout << "Medel: " << calculateAverage(arr, 5) << endl;

	for (int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseArray(arr, 5);
    for (int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
