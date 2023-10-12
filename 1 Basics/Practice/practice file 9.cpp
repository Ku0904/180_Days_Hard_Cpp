//First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//
//      *
//    *  *
//   *  *  *
// *  *  *  *
//*  *  *  *  *
//
//Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//
//        1
//      1 2 3
//    1 2 3 4 5
//  1 2 3 4 5 6 7
//1 2 3 4 5 6 7 8 9
//
//Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//
//        A
//      A B A
//    A B C B A
//  A B C D C B A
//A B C D E D C B A
//
//Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//
//      *
//    *  *
//   *  *  *
//  *  *  *  *
//*  *  *  *  *
//*  *  *  *  *
//  *  *  *  *
//   *  *  *
//     *  *
//      *

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;
/*----------------------------1st----------------------------*/
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = n - i; j >= 1; j--) {
            cout << " ";
        }
        // * printing
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // space
        for (int j = n - i; j >= 1; j--) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------2nd--------------------------*/
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = n - i; j >= 1; j--) {
            cout << "  ";
        }
        // numbers
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << j << " ";
        }
        // space
        for (int j = n - i; j >= 1; j--) {
            cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------3rd-------------------------*/
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = n - i; j >= 1; j--) {
            cout << "  ";
        }
        // char 2i-1
        for (char j = 'A'; j <= 'A'+i-1; j++) {
            cout << j << " ";
        }
        for (char j = 'A'+i-2; j >= 'A'; j--) {
            cout << j << " ";
        }
        // space
        for (int j = n - i; j >= 1; j--) {
            cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------4th-------------------------*/
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = n - i; j >= 1; j--) {
            cout << " ";
        }
        // * printing
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // space
        for (int j = n - i; j >= 1; j--) {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= i-1; j++) {
            cout << " ";
        }
        // * printing
        for (int j = n-i+1; j >= 1; j--) {
            cout << "* ";
        }
        // space
        for (int j = 1; j <= i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <=n ; i++) {
        // space
        for (int j = n-i; j >=1 ; j--) {
            cout << " ";
        }
        // * printing
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // space
        for (int j = n-i; j >=1 ; j--) {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <=n ; i++) {
        // space
        for (int j = 1 ; j <= i-1; j++) {
            cout << " ";
        }
        // * printing
        for (int j = n-i+1; j >= 1; j--) {
            cout << "* ";
        }
        // space
        for (int j = 1 ; j <= i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}