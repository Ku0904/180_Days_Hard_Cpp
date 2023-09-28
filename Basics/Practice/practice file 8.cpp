//First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//
//        1
//      2 1
//    3 2 1
//  4 3 2 1
//5 4 3 2 1
//
//Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//
//        A
//      B B
//    C C C
//  D D D D
//E E E E E
//
//Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//
//        5
//      5 4
//    5 4 3
//  5 4 3 2
//5 4 3 2 1
//
//Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//
//        E
//      E D
//    E D C
//  E D C B
//E D C B A

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;
/*----------------------------1st----------------------------*/
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------2nd--------------------------*/
    char SomeChar1 = 'A';
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // char
        for (int j = 1; j <= i; j++) {
            cout << SomeChar1 << " ";
        }
        cout << endl;
        SomeChar1++;
    }
    cout << endl;

/*----------------------------3rd-------------------------*/
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // numbers
        for (int j = n; j >= n-i+1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------4th-------------------------*/
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // char
        char SomeChar2 = 'E';
        for (int j = 1; j <= i; j++) {
            cout << SomeChar2 << " ";
            SomeChar2--;
        }
        cout << endl;
    }
    cout << endl;

}