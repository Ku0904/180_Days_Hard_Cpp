//1: Find the cube of a number using Function.
//
//2: Reverse a number n using Function, Constraints: -5000<=n<=5000
//
//3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.
//
//4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000.
//
//5: Print “Hello Coder Army” n times using Function.
//
//6: Given two numbers n, r. Find nCr (Combination). Use Function here.

#include <iostream>
using namespace std;

/*----------------------------1st----------------------------*/
void CubeOfNumber(int i){
    cout << "Cube Of Number is : " << i*i*i <<endl;
};
/*----------------------------2nd--------------------------*/
void ReverseOfNumber(int n){
    int rem;
    int reverse = 0;
    while(n != 0){
        rem = n%10;
        n /= 10;
        reverse = reverse*10 + rem;
    }
    cout << "Reverse Of Number is : " << reverse <<endl;
};
/*----------------------------3rd-------------------------*/
// int& for reference of value
void swapValues(int& a,int& b,int& c){
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;
};
/*----------------------------4th-------------------------*/

/*----------------------------5th-------------------------*/
void Print(int number){
    for (int i = 1; i <= number; i++) {
        cout << "Hello Coder Army" << endl;
    }
}
/*----------------------------6th-------------------------*/
// this is one way but there is a better way
// int Combination(int n , int r){ // Combination nCr
//    int nFactorial = 1;
//    for (int i = 1; i <= n; i++) {
//        nFactorial *= i;
//    }
//    int rFactorial = 1;
//    for (int i = 1; i <= r; i++) {
//        rFactorial *= i;
//    }
//    int nMINUSrFactorial = 1;
//    for (int i = 1; i <= (n-r); i++) {
//        nMINUSrFactorial *= i;
//    }
//    int nCr = nFactorial/(rFactorial*nMINUSrFactorial);
//    return nCr;
//};
long long FactorialOfNumber(int fact){ // if we int fact = 5 our default parameter will be 5
    if(fact==0)
        return 1;
    long long FactValue = 1;
    for (int i = 1; i <= fact; i++) {
        FactValue *= i;
    }
    return FactValue;
};
long long CalculateCombination(int n, int r){
    if(n<r)
        return 0;
    long long numerator = FactorialOfNumber(n);
    long long denominator = FactorialOfNumber(r) * FactorialOfNumber(n - r);
    return numerator / denominator;
}

int main() {
    int SomeNumber1;
    cout << "Enter the Number you want the Cube of : " << endl;
    cin >> SomeNumber1;
    CubeOfNumber(SomeNumber1);

    int SomeNumber2;
    cout << "Enter the Number you want the Reverse of : " << endl;
    cin >> SomeNumber2;
    ReverseOfNumber(SomeNumber2);

    int a, b, c;
// Input three numbers
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    cout << "Enter the value of c: " << endl;
    cin >> c;
// Call the swapValues function to swap the values of a, b, and c
    swapValues(a, b, c);
// Display the swapped values
    cout << "After swapping:\n";
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    int x, y;
// Input two numbers
    cout << "Enter the value of x: " << endl;
    cin >> x;
    cout << "Enter the value of y: " << endl;
    cin >> y;
    // Perform the swap without using extra variables
    x = x + y;
    x = x - y;
    x = x - y;
// Display the swapped values
    cout << "After swapping:\n";
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    int number;
    cout << "Enter how much times you want to print : " << endl;
    cin >> number;
    Print(number);

    int n,r;
    cout << "Enter n and r to find nCr(Combination) : " << endl;
    cin >> n >> r;
//  cout << "nCr(Combination) of n and r is : "<<Combination(n,r) << endl;
    cout << "nCr(Combination) of n and r is : "<< CalculateCombination(n,r) << endl;

    return 0;
}