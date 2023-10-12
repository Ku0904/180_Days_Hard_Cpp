#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // * printing
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // * printing
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {;
        char someChar1 = 'A';
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // * printing
        for (int j = 1; j <= i; j++) {
            cout << someChar1 << " ";
            someChar1++;
        }
        //or
        //for (char j = 'A'; j <= 'A'+i-1 ; j++) {
        //cout << j << " ";
        //}
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        // * printing
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}