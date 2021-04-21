#include <iostream>

int question8()
{
    using namespace std;

    // Declare
    int input;
    int numbers[20];
    int common1 = 0;
    int common2 = 0;
    int commonnum1 = 0;
    int commonnum2 = 0;
    int mostcommon = 0;
    int commonnum = 0;
    int currentmostcommon = 0;
    int currentmostcommoncount = 0;

    /*
    Check value 1 in array against other values, each match increase common1 by 1
    Set commonnum1 to numbers[i]
    Check value 2 in array against all other values, each match increase common2 by 1
    Set commonnum2 to numbers[i]
    Compare common 1 and common 2, set mostcommon to either common1, common2 or leave blank if both are equal
    Also set commonnum to
    */

    // Main Function
    for (int i = 0; i < 20; i++) {
        cout << "Input value " << i << " : ";
        cin >> input;
        numbers[i] = input;
    }

    // Selects first value
    for (int i = 0; i < 20; i++) {
        // Compares first value against all other values and itself
        for (int j = 0; j < 20; i++) {
            if (numbers[i] == numbers[j]) {
                commonnum += 1;
            }
        }
        if (currentmostcommon == 0) {
            currentmostcommon = numbers[i];
            currentmostcommoncount = commonnum;
        }
    }
    return 0;
}