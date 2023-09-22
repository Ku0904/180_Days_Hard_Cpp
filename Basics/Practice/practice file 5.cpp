//1st Print number from 280 to 250 with the help of for loop.
//2nd Print char from ‘A’ to ‘Z’ with the help of a for loop.
//3rd Print char from ‘Z’ to ‘A’ with the help of a for loop.
//4th There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
//5th Print Sum of square of first n natural number.
//6th Print Sum of cube of first n natural number
//7th Print n’th Fibonacci number.

#include <iostream>
using namespace std;
int main () {
    /*----------------------------1st----------------------------*/
    for (int i = 280; i <=250 ; i = i + 1) {
        cout << i << endl;
    }
    /*----------------------------2nd----------------------------*/
    for (char i = 'a'; i <= 'z' ; i = i+1) {
        cout << i << endl;
    }
    /*----------------------------3rd----------------------------*/
    for (char i = 'z'; i >= 'a' ; i = i-1) {
        cout << i << endl;
    }
    /*----------------------------4th----------------------------*/
    for (int i = 220; i <= 730 ; i = i +7) {
        cout << i << endl;
    }
    /*----------------------------5th----------------------------*/
    int n , sum = 0;
    cout << "Enter the number n" << endl;
    cin >> n;
    cout << (n*(n + 1)*((2*n) + 1))/6 <<endl;
    // or
    for (int i = 1; i <= n ; i = i + 1){
        sum = (i*i) + sum;
    }
    cout << sum << endl;
    /*----------------------------6th----------------------------*/
    cout << ((n*n)*((n + 1)*(n + 1))/4) << endl;
    // or
    for (int i = 1; i <= n ; i = i + 1){
        sum = (i*i*i) + sum;
    }
    cout << sum << endl;
    /*----------------------------7th----------------------------*/
    // 0,1,0+1=1,1+1=2,2+1=3,3+2=5,...
    int t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i = i + 1) {
        if(i == 1) {
            cout << t1 << ", ";
        }
        else if(i == 2) {
            cout << t2 << ", ";
        }
        else{
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << ", ";
        }
    }
}

