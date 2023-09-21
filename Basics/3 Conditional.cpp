// = for assignment operators
// ==,!=,>,<,<=,>= comparison operators
// there is a data loss when conversion of data type happen we call this (Type Conversion)
#include <iostream>
#include <string>
using namespace std;
int main (){
    int a,b;
    cout << "Enter your Numbers: ";
    cin >> a >> b;
    cout << a+b << endl;

    int SomeNumber = 22;
    char SomeCharacter = 'd';
    SomeCharacter = SomeNumber; // the Character in ASCII table will 22 value will be assigned
    cout << SomeCharacter << endl;

    int x = 5;
    string y = "5";
    if ( to_string(x) == y ){ // condition should be true/1 to execute
        cout << "both are same" << endl;
    }
    else{
        cout << "both are not same" << endl;
    }

    for (int i = 0; i <= 4; i += 1) { // i = i + 1
        cout << "CodeArmy\n" << endl;
    }

    int num;
    cout << "Enter the Number: ";
    cin >> num;
    for (int i = 1; i <= num; i = i + 1) {
        if (i%2==0){
            cout<<i<<" \n";
        }
        else{

        }
    }
    /*--------------------HW--------------------*/
    int age;
    cout << "Enter the age \n";
    cin >> age;
    if(age > 18){
        cout << "Adult" << endl;
    }
    else if (age == 18){
        cout << "Bruhman" << endl;
    }
    else {
        cout << "Teenager" << endl;
    }
}