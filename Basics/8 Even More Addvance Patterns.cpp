#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        // * printing
        for (int j = 1; j <=2*i-1 ; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // palindrome symmetry from both sides
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        // number printing
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i-1; j >= 1; j--) {
            cout << j;
        }
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= i-1; j++) {
            cout << " ";
        }
        // * printing
        for (int j = 2*n-2*i+1 ; j >= 1 ; j--) {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        // * printing
        for (int j = n-i+1; j >=1 ; j--) {
            cout << "*";
        }
        // space
        for (int j = 2 ; j <= 2*i-1 ; j++) {
            cout << " ";
        }
        // * printing
        for (int j = n-i+1; j >=1 ; j--) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        // * printing
        for (int j = 1; j <= i ; j++) {
            cout << "*";
        }
        // space
        for (int j = 1 ; j <= 2*n-2*i ; j++) {
            cout << " ";
        }
        // * printing
        for (int j = 1; j <= i ; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        // space
        for (int j = n-i; j >=1 ; j--) {
            cout << " ";
        }
        // * printing total 2n in a col
        for (int j = 1 ; j <= i ; j++) {
            cout << "* ";
        }
        // space
        for (int j = n-i; j >=1 ; j--) {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        // space
        for (int j = 1; j <= i-1 ; j++) {
            cout << " ";
        }
        // * printing total 2n in a col
        for (int j = n-i+1 ; j >= 1 ; j--) {
            cout << "* ";
        }
        // space
        for (int j = 1; j <= i-1 ; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}