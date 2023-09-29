//1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.
//
//2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
//
//3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).
//
//4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
//
//5: What will be the result below according to the precedence table.
//
//2*3-48==5/4*6
//6<<2-4*8/2
//5>4<3/2-8%4+5
//14-8+92>>2+70

#include <iostream>
using namespace std;
int main() {
/*----------------------------1st----------------------------*/
    int temp;
    cout << "Enter the temperature : " << endl;
    cin >> temp;
    if (temp > 70 && temp < 90){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
/*----------------------------2nd--------------------------*/
    int n;
    cout << "Enter the n : " << endl;
    cin >> n;
    if (n%2==0 && n > 0){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
/*----------------------------3rd-------------------------*/
    int age;
    cout << "Enter the age : " << endl;
    cin >> age;
    if (age >= 13 && age <= 19){
        cout << "yes teenager" << endl;
    }
    else{
        cout << "not a teenager" << endl;
    }
/*----------------------------4th-------------------------*/
    int a,b,c;
    cout << "Enter the a,b,c : " << endl;
    cin >> a >> b >> c;
    if (a < b || a < c ){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
/*----------------------------5th-------------------------*/
// 2*3-48==5/4*6 -> 6-48==5/4*6 -> 6-48==1*6(1 because 5/4 both are int) -> 6-48==6 -> -42==6 -> 0(false)
// 6<<2-4*8/2 -> 6<<2-32/2 -> 6<<2-16 -> 6<<-14 -> undefined cause -14
// 5>4<3/2-8%4+5 -> 5>4<1-8%4+5 -> 5>4<1+5 -> 5>4<6 -> 1<6 ->1(true)
// 14-8+92>>2+70 -> 6+92>>2+70 -> 98>>72 -> 0(false)
}