//1st Two numbers are given, print their product
//2nd Two numbers are given a and b, print a-b
//3rd Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.
//4th If we have only 4 bits, How 3 and -6 will be written in 4 bits.
//5th If we have only 5 bits, How 13 and -16 will be written in 5 bits.

#include <iostream>
using namespace std;
int main(){
    /*----------------------------1st----------------------------*/
    int a,b;
    cin >> a >> b;
    cout << a*b << endl;
    /*----------------------------2nd----------------------------*/
    cout << a-b << endl;
    /*----------------------------3rd----------------------------*/
    cout << "6*3" << endl;
    /*----------------------------4th----------------------------*/
    // in 4 bits 3 will be 0011 and -6 will be 1010
    /*----------------------------5th----------------------------*/
    // in 5 bits 13 will be 01101 and -16 will be 10000
}
