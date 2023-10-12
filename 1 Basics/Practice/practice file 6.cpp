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
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;
/*----------------------------1st----------------------------*/
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << 4 << " ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------2nd--------------------------*/
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j * j << " ";
        }
        cout << endl;
    }
    cout << endl;

/*----------------------------3rd-------------------------*/
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j * j * j << " ";
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
    cout << endl;

    // more practice
    //1st count the number of lines in outer loop (count the rows)
    //2nd for inner loop focus on col and connect them somehow to rows
    //3rd print * inside the inner for loop
    //4th optional observe symmetry

    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= count; j++) {
            cout << "* ";
        }
        cout << endl;
        count++;
    }
    cout << endl;

    int someNumber1 = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= someNumber1; j++) {
            cout << j << " ";
        }
        cout << endl;
        someNumber1++;
    }
    cout << endl;

    int someNumber2 = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= someNumber2; j++) {
            cout << someNumber2 << " ";
        }
        cout << endl;
        someNumber2++;
    }
    cout << endl;

    int someNumber3 = n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= someNumber3; j++) {
            cout << "*" << " ";
        }
        cout << endl;
        someNumber3--;
    }
    cout << endl;

    int someNumber4 = n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= someNumber4; j++) {
            cout << j << " ";
        }
        cout << endl;
        someNumber4--;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        //space
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        //star
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        //space
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        //space
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        //star
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << "*";
        }
        //space
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        //space
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        //star
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        //space
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        //space
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        //star
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << "*";
        }
        //space
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    int someNumber5 = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= someNumber5; j++) {
            cout << "* ";
        }
        cout << endl;
        someNumber5++;
    }
    int someNumber6 = n - 1;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= someNumber6; j++) {
            cout << "* ";
        }
        cout << endl;
        someNumber6--;
    }
    cout << endl;

    int someNumber7 = 1;
    int someNumber8 = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= someNumber7; j++) {
            if (someNumber8 % 2 == 0) {
                cout << 0 << " ";
            } else {
                cout << 1 << " ";
            }
            someNumber8++;
        }
        cout << endl;
        someNumber7++;
    }
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}
