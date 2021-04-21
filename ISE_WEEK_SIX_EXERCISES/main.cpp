#include <iostream>

// Declare other functions to call later
int question4(), question5(), question6(), question7(), question8(), question9();
//, question7(), question8(), question9();
//, question10(), question11(), question12(), question13(), question14(), question15(), question16(), question17(), question18(), question19(), question20();

int main() {
    using namespace std;
    int question = 0;
    enum question { q4 = 4, q5, q6, q7, q8, q9 };
    do {
        cout << "Which programme would you like to run? 0 to end " << endl;
        cout << "Question 4" << endl;
        cout << "Question 5        Averaging Program" << endl;
        cout << "Question 6        20 integers" << endl;
        cout << "Question 7        10 numbers from user" << endl;
        cout << "Question 8        Occuring elements" << endl;
        cout << "Question 9        5 integer array" << endl;
        cout << "Question 10" << endl;
        cout << "Question 11" << endl;
        cout << "Question 12" << endl;
        cout << "Question 13" << endl;
        cout << "Question 14" << endl;
        cout << "Question 15" << endl;
        cout << "Question 16" << endl;
        cout << "Question 17" << endl;
        cout << "Question 18" << endl;
        cout << "Question 19" << endl;
        cout << "Question 20" << endl;
        cin >> question;

        switch (question) {
        case 4:
            question4();
            break;
        case 5:
            question5();
            break;
        case 6:
            question6();
            break;
        case 7:
            question7();
            break;
        case 8:
            question8();
            break;
        case 9:
            question9();
            break;
        }
        cout << endl;
        cout << endl;
    } while (question != 0);
    return(0);
}