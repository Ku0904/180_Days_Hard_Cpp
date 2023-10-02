//1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
//
//2: Find the factorial of a number n using a while loop and do a while loop.
//
//3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
//
//4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)
//
//5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
//
//6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;
/*----------------------------1st----------------------------*/
    cout << "with while" << endl;
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }

    cout << "with do while" << endl;
    do {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    } while (i <= n * 2);
/*----------------------------2nd--------------------------*/
    cout << "with while" << endl;
    int a = 1;
    int factorial1 = 1;
    while (a <= n) {
        factorial1 = factorial1 * a;
        a++;
    }
    cout << factorial1 << endl;

    cout << "with do while" << endl;
    int b = 1;
    int factorial2 = 1;
    do {
        factorial2 = factorial2 * b;
        b++;
    } while (b <= n);
    cout << factorial2 << endl;
/*----------------------------3rd-------------------------*/
    for (int j = 1; j <= n; j++) {
        if (j % 3 != 0 && j % 5 != 0) {
            cout << j << endl;
        } else {
            continue;
        }
    }
/*----------------------------4th-------------------------*/
    int month;
    cout << "Enter the month: " << endl;
    cin >> month;
    switch (month) {
        case 1:
            cout << "jan" << endl;
            break;
        case 2:
            cout << "feb" << endl;
            break;
        case 3:
            cout << "mar" << endl;
            break;
        case 4:
            cout << "apr" << endl;
            break;
        case 5:
            cout << "may" << endl;
            break;
        case 6:
            cout << "jun" << endl;
            break;
        case 7:
            cout << "jul" << endl;
            break;
        case 8:
            cout << "aug" << endl;
            break;
        case 9:
            cout << "sep" << endl;
            break;
        case 10:
            cout << "nov" << endl;
            break;
        case 11:
            cout << "oct" << endl;
            break;
        case 12:
            cout << "dec" << endl;
            break;
        default:
            cout << "invalid number" << endl;
    }
/*----------------------------5th-------------------------*/
    cout << "with while" << endl;
    char somechar1 = 'A';
    while (somechar1 <= 'Z') {
        cout << somechar1 << endl;
        somechar1++;
    }
    char somechar2 = 'a';
    while (somechar2 <= 'z') {
        cout << somechar2 << endl;
        somechar2++;
    }
/*----------------------------6th-------------------------*/
    int initialNumber = 2;
    int flag = 0;
    while (initialNumber < n) {
        if (n % initialNumber == 0) {
            flag = 1;
            break;
        }
        initialNumber++;
    }
    if (flag == 0) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    // or

    int x;
    cin >> x;
    if (x == 2 || x == 3) {
        cout << "prime number" << endl;
    }
    while (true) {
            if (x % 2 != 0 && x % 3 != 0) {
                cout << "Prime Number" << endl;
                break;
            }
            else{
                cout << "Not Prime" << endl;
                break;
            }
    }
}