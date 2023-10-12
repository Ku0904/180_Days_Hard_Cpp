// 1st Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
// 2nd Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager
// 3rd Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
// 4th Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.
// 5th Print “India will win the World Cup 2023”, 20 times.
// 6th Print all Odd numbers from 1 to n, take n as an input from the user.
// 7th Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
#include <iostream>
using namespace std;
int main () {
    /*----------------------------1st----------------------------*/
    int a,b;
    cout << "Enter the Number a and b: " <<endl;
    cin >> a >> b;
    if (a > b){
        cout << "both are same" << endl;

    }
    else if( a > b ){
        cout << "a>b" << endl;
    }
    else if( b > a ){
        cout << "b>a" << endl;
    }
    else{

    }
    /*----------------------------2nd----------------------------*/
    int age;
    cout << "Enter the age: " <<endl;
    cin >> age;
    if (age > 18){
        cout << "Adult" << endl;
    }
    else {
        cout << "Teenager" << endl;
    }
    /*----------------------------3rd----------------------------*/
    int n;
    cout << "Enter the Number n: " <<endl;
    cin >> n;
    if (n == 1 ){
        cout << "January" << endl;
    }
    else if (n == 2 ){
        cout << "February" << endl;
    }
    else if (n == 3 ){
        cout << "March" << endl;
    }
    else if (n == 4 ){
        cout << "April" << endl;
    }
    else if (n == 5 ){
        cout << "May" << endl;
    }
    else if (n == 6 ){
        cout << "June" << endl;
    }
    else if (n == 7 ){
        cout << "July" << endl;
    }
    else if (n == 8 ){
        cout << "August" << endl;
    }
    else if (n == 9 ){
        cout << "September" << endl;
    }
    else if (n == 10 ){
        cout << "October" << endl;
    }
    else if (n == 11 ){
        cout << "November" << endl;
    }
    else if (n == 12 ){
        cout << "December " << endl;
    }
    else {
        cout << "Enter a valid Number" << endl;
    }
    /*----------------------------4th----------------------------*/
    int UserAge;
    cout << "Enter the User Age: " <<endl;
    cin >> UserAge;
    if (UserAge <= 12 || UserAge >= 65){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    /*----------------------------5th----------------------------*/
    for (int i = 0; i < 20; i=i+1) {
        cout << "India will win the World Cup 2023" << endl;
    }
    /*----------------------------6th----------------------------*/
    int Number;
    cout << "Enter the number you want the odd number upto: " << endl;
    cin >> Number;
    for (int i = 0; i <= Number; i=i+1) {
        if (i%2 != 0){
            cout << i << " " << endl;
        } else {

        }
    }
    /*----------------------------7th----------------------------*/
    int Numbers;
    cout << "Enter the number you want divisible by 4 upto: " << endl;
    cin >> Numbers;
    for (int i = 0; i <= Numbers; i=i+1) {
        if (i%4 == 0){
            cout << i << " " << endl;
        } else {

        }
    }
}

