#include <iostream>

int question6()
{
    using namespace std;

    // Declare
    int numbers[20];
    int input;
    int even = 0;
    int odd = 0;
    int sum = 0;
    int smallest = 0;
    int largest = 0;
    double average = 0;

    for (int i = 0; i < 20; i++)
    {
        cout << "input number " << i << ": " << endl;
        cin >> input;
        numbers[i] = input;
    }
    // Calculate Sum
    for (int i = 0; i < 20; i++)
    {
        sum += numbers[i];
    }
    // Calculate even or odd
    for (int i = 0; i < 20; i++)
    {
        if (numbers[i] % 2)
        {
            even += 1;
        }
        else odd += 1;
    }
    // Set smallest and largest values
    if (smallest == 0) {
        smallest = numbers[0];
    }
    if (largest == 0) {
        largest = numbers[0];
    }
    // Compare array values to smallest and largest
    for (int i = 0; i < 20; i++)
    {
        if (smallest > numbers[i]) {
            smallest = numbers[i];
        }
        if (largest < numbers[i]) {
            largest = numbers[i];
        }
    }
    // Calculate Average
    average = sum / 20;

    // Output results
    cout << "Sum of values entered = " << sum << endl;
    cout << "Number of even values entered = " << even << endl;
    cout << "Number of odd values entered = " << odd << endl;
    cout << "Smallest value entered = " << smallest << endl;
    cout << "Largest value entered = " << largest << endl;
    cout << "The average of the values entered is = " << average << endl;
    return 0;
}