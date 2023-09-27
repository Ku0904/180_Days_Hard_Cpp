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
    cout << endl;

    for (int i = 1; i <= n; i++) {
        char SomeChar1 = 'A';
        for (int j = 1; j <= n-i+1; j++) {
            cout << SomeChar1 << " ";
            SomeChar1++;
        }
        cout << endl;
    }
    cout << endl;


    for (int i = 1; i <= n; i++) {
        // space
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        // char
        char SomeChar1 = 'A';
        int breakpoint = (2*i-1)/2;
        for (int j = 1; j <= 2*i-1 ; j++) {
            if(j <= breakpoint) {
                cout << SomeChar1;
                SomeChar1++;
            }
            else{
                cout << SomeChar1;
                SomeChar1--;
            }
        }
        // number
        for (int j = 1; j <= n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}