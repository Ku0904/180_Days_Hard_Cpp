//First Pattern:
//
//4 4 4 4 4 4
//4 4 4 4 4 4
//4 4 4 4 4 4
//4 4 4 4 4 4
//4 4 4 4 4 4
//
//Second Pattern:
//
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//1 4 9 16 25
//
//
//Third Pattern:
//
//1 8 27 64 125 216
//1 8 27 64 125 216
//1 8 27 64 125 216
//1 8 27 64 125 216
//1 8 27 64 125 216
//
//Fourth Pattern:
//
//F G H I J K
//F G H I J K
//F G H I J K
//F G H I J K
//F G H I J K


#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number n: " <<endl;
    cin >> n;
/*----------------------------1st----------------------------*/
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << 4 << " " ;
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------2nd--------------------------*/
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j*j << " " ;
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------3rd-------------------------*/
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j*j*j << " " ;
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------4d-------------------------*/

    for (int i = 1; i <= n; i++) {
        char f = 'f';
        for (int j = 1; j <= n; j++) {
            cout << f << " ";
            f++;
        }
        cout << endl;
    }
}
