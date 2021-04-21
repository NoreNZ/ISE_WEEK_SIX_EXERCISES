#include <iostream>

int question9()
{

    using namespace std;

    // Declare
    int numbers[5];
    int input;
    int firstnum;

    // Main Function
    for (int i = 0; i < 5; i++) {
        cout << "Input number for value " << i << " in array: " << endl;
        cin >> input;
        numbers[i] = input;
    }
    firstnum = numbers[0];
    for (int i = 0; i < 5; i++) {
        if (i < 4) {
            numbers[i + 1] = numbers[i];
        }
    }
    numbers[4] = firstnum;

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << ", ";
    }

    return 0;
}