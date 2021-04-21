#include <iostream>

int question7()
{
    using namespace std;

    // Declare
    int input;
    int numbers[10];

    // Main Function
    for (int i = 0; i < 10; i++) {
        cout << "Input value " << i << " : " << endl;
        cin >> input;
        numbers[i] = input;
    }
    for (int i = 9; i >= 0; i--) {
        if (i != 0) {
            cout << numbers[i] << ", ";
        }
        else {
            cout << numbers[i] << endl;
        }

    }
    return 0;
}