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
}
