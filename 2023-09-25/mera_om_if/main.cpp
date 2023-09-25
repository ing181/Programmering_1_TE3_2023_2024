#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    int tal;
    cout << "Mata in ett heltal: ";
    cin >> tal;
    // Nästlade if-satser
    if (tal > 10) {
       cout << "Större än 10" << endl;
         if (tal==10) {
            cout << "Lika med 10" << endl;
         }
    }
    else {
       cout << "Mindre än eller lika med 10" << endl;
       if (tal==10) {
          cout << "Lika med 10" << endl;
       } else {
          cout << "Mindre än 10" << endl;
        }

    }

    return 0;
}
