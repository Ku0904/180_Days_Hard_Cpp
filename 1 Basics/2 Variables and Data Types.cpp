// Variables and Data types
// int, float ,double , string, char and Boolean
#include <iostream>
#include <limits>
using namespace std;
int main () {
// when naming a variable it should not start from a number example 123XYZ cannot be a name
// variables get stored in 32 bits they get stored from the end
    int VariableName1 = 5;
    long int VariableName2 = 999;
    char VariableName3 = 'a'; // all the characters from ASCII table it converts these characters to numbers we can only store single character
    float VariableName4 = 1.3;
    double VariableName5 = 1.3;
    bool VariableName6 = true; // false/0 or true/1

    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of bool : " << sizeof(bool) << endl;
    cout << "Int Min " << numeric_limits<int>::min() << endl;
    cout << "Int Max " << numeric_limits<int>::max() << endl;
    cout << "Unsigned Int  Min " << numeric_limits<unsigned int>::min() << endl;
    cout << "Unsigned Int Max " << numeric_limits<unsigned int>::max() << endl;
    cout << "Long Int Min " << numeric_limits<long int>::min() << endl;
    cout << "Long Int Max " << numeric_limits<long int>::max() << endl;
    cout << "Unsigned Long Int Min " << numeric_limits<unsigned  long int>::min() <<endl;
    cout << "Unsigned Long Int Max " << numeric_limits<unsigned  long int>::max() << endl;
    return 0;
// representing negative numbers as 2's complement in binary systems simplifies arithmetic operations, allows for a clear representation of the sign, and facilitates overflow detection
// first find binary of that -ve number which will be binary or +ve number then reverse the 0 and 1 that will be 1s complement too then add 1 in it to make it 2s compliment
}