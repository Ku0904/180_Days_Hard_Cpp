#include <iostream>
using namespace std;
int main(){
//print a to z
    for (char i = 'a'; i <= 'z' ; i = i+1) {
        cout << i << endl;
    }
//print 10 to 1
    for (int i = 10; i >= 1 ; i = i -1) {
        cout << i << endl;
    }
// print a table
    int n;
    cout << "Enter the number n" << endl;
    cin >> n;
    for (int i = 1; i <= 10 ; i = i + 1) {
        cout << n << "*" << i << "=" << n*i << endl;
    }
    for (int i = n; i <= 10*n ; i = i + n) {
        cout << i << endl;
    }
//calculate power of a number
    int pow;
    int num = n;
    cout << "Enter the power of the number" << endl;
    cin >> pow;
    for (int i = 1; i < pow ; i = i + 1) {
        num = num * n;
    }
    cout << num << endl;
//sum of natural number
    int sum = 0;
    for (int i = 1; i <= n ; i = i + 1) {
        sum = i + sum;
    }
    cout << sum << endl;
//factorial
    int fact = 1;
    for (int i = 1; i <= n ; i = i + 1) {
        fact = i*fact;
    }
    cout << fact << endl;
//prime number
    for (int i = 2; i < n; i = i + 1) {
        if( i%2 == 0 || i%3 == 0 ){
            cout << i << " is not prime" << endl;
        }
        else{
            cout << i << " is prime" << endl;
        }
    }
//sum of array
//    void getSum(int a[], int n) {
//        int sum = 0;
//        for(int i = 0; i<n ;i=i+1){
//            sum += a[i];
//        }
//        return sum;
//    }
    return 0; // for the program to end
}

