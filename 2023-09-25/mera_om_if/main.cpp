#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    int tal;
    cout << "Mata in ett heltal: ";
    cin >> tal;
    // N�stlade if-satser
    if (tal > 10) {
       cout << "St�rre �n 10" << endl;
         if (tal==10) {
            cout << "Lika med 10" << endl;
         }
    }
    else {
       cout << "Mindre �n eller lika med 10" << endl;
       if (tal==10) {
          cout << "Lika med 10" << endl;
       } else {
          cout << "Mindre �n 10" << endl;
        }

    }

    return 0;
}
