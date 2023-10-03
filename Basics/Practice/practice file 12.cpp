//1st Write a program to convert binary numbers to decimal numbers using a for loop.
//
//2nd Write a program to convert decimal numbers to binary numbers using a for loop.
//
//3rd Write a program to convert decimal numbers to Octal numbers.
//
//4th Write a program to convert Octal numbers to decimal numbers.
//
//5th Write a program to convert binary to Octal numbers
//
//6th Write a program to convert Octal numbers to binary numbers

#include <iostream>
using namespace std;
int main() {
/*----------------------------1st----------------------------*/
    int n1;
    cout << "Enter the number n1: " << endl;
    cin >> n1;
    int ans1 = 0;
    int mul1 = 1;
    while (n1>0){
        int rem1 = n1%2;
        n1=n1/2;
        ans1 = rem1*mul1+ans1;
        mul1=mul1*10;
    }
    cout << ans1 << endl;
/*----------------------------2nd--------------------------*/
    int num;
    cout << "Enter the value of num : " << endl;
    cin >> num;
    int digit,answer = 0;
    int multiply = 1;
    while (num > 0){
        digit = num%10;
        num=num/10;
        answer = answer + digit*multiply;
        multiply=multiply*2;
    }
    cout << answer << endl;
/*----------------------------3rd-------------------------*/
    int n2;
    cout << "Enter the number n2: "<< endl;
    cin >> n2;
    int ans2 = 0;
    int mul2 = 1;
    while (n2>0) {
        int rem2 = n2%8;
        ans2 += rem2*mul2;
        n2 /= 8;
        mul2 *= 10;
    }
    cout << ans2 << endl;
/*----------------------------4th-------------------------*/
    int num2;
    cout << "Enter the value of num1 : " << endl;
    cin >> num2;
    int answer2 = 0;
    int multiply2 = 1;
    while (num2 > 0){
        int digit2 = num2%10;
        answer2 = answer2 + digit2*multiply2;
        num2=num2/10;
        multiply2=multiply2*8;
    }
    cout << answer2 << endl;
/*----------------------------5th-------------------------*/
    int binary;
    cout << "Enter the number binary: " << endl;
    cin >> binary;
    int decimalConvert = 0;
    int base10 = 1;
    while (binary>0){
        int remainder1 = binary%2;
        decimalConvert += remainder1*base10;
        binary /= 10;
        base10 *= 2;
    }
    int octaConvert = 0;
    int base8 = 1;
    while (decimalConvert != 0) {
        int remainder2 = decimalConvert%8;
        octaConvert += remainder2*base8;
        decimalConvert /= 8;
        base8 *= 10;
    }
    cout << "The Octal conversion of this number is : " << octaConvert << endl;
/*----------------------------6th-------------------------*/
    int Octal;
    cout << "Enter the number Octal: " << endl;
    cin >> Octal;
    int decimalValue = 0;
    int base_8 = 1;
    while (Octal != 0){
        int remainderValue1 = Octal%10;
        decimalValue += remainderValue1*base_8;
        Octal /= 10;
        base_8 *= 8;
    }
    int BinaryValue = 0;
    int base_2 = 1;
    while (decimalValue != 0) {
        int remainderValue2 = decimalValue%2;
        BinaryValue += remainderValue2*base_2;
        decimalValue /= 2;
        base_2 *= 10;
    }
    cout << "The Binary conversion of this number is : " << BinaryValue << endl;
}