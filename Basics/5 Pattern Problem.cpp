#include <iostream>
#include<math.h>
using namespace std;
int main(){
    // print pattern
    int n;
    cin >> n;
    // nested loop
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout<<"*"<<" " ; // or cout<<"* ";
        }
        cout << endl;
    }
    // 1st row(i) = 1 and (j) is column
    // 2nd row <= 5
    // 3rd print * 5 times
    // 4th row = row + 1

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout<<"10 " ;
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i <<" " ;
        }
        cout << endl;
    }

    cout << endl;

    int x;
    cout << "Enter x:" << endl;
    cin >> x;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << x <<" " ;
        }
        cout << endl;
        x++;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            cout << j << " " ;
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j*j << " " ;
        }
        cout << endl;
    }

    cout << endl;

    char a = 'a';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a << " " ;
        }
        cout << endl;
        a++;
    }

    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (char j = 'a'; j <= 'e'; j++) {
            cout << j << " " ;
        }
        cout << endl;
    }
    //or
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a = a+j-1;
            cout << a << " " ;
        }
        cout << endl;
    }

    cout << endl;

    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << count << " " ;
            count++;
        }
        cout << endl;
    }
    //or
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (i-1)*5+j << " " ;
        }
        cout << endl;
    }
}