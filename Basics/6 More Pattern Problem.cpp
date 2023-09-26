#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i+1; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= n-i+1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    int spaces = 2*(n-1);
    for (int i = 1; i <= n; i++) {
        // number
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // space
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // number
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
        spaces-=2;
    }
}