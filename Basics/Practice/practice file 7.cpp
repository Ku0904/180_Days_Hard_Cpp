//First Pattern:
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4 5 6
//
//Second Pattern:
//A
//A B
//A B C
//A B C D
//A B C D E
//
//Third Pattern:
//10
//10 11
//10 11 12
//10 11 12 13
//10 11 12 13 14
//10 11 12 13 14 15
//
//Fourth Pattern:
//A B C D
//A B C
//A B
//A

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;
/*----------------------------1st----------------------------*/
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------2nd--------------------------*/
    for (int i = 1; i <= n; i++) {
        char someChar1 = 'A';
        for (int j = 1; j <= i; j++) {
            cout << someChar1 << " ";
            someChar1++;
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------3rd-------------------------*/
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j+9 << " ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------4th-------------------------*/

    for (int i = 1; i <= n; i++) {
        char someChar2 = 'A';
        for (int j = 1; j <= n-i+1; j++) {
            cout << someChar2 << " ";
            someChar2++;
        }
        cout << endl;
    }
    cout << endl;

}