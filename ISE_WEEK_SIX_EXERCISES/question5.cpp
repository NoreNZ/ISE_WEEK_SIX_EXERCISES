#include <iostream>

int question5()
{
    using namespace std;
    int input;

    cout << "Input size of array" << endl;
    cin >> input;
    //int array[input];

    for (int i = 0; i < (input + 1); i++)
    {
        cout << "Input value for [" << i << "] :";
        cin >> input;
        //array[i] = input;
    }


    return 0;
}