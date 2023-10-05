#include <iostream>
using namespace std;

// function so we don't have to write code again and again
// void means we don't want function to return any value
// can make char,bool,int,... functions in cpp
void CubeOfNumber(int i){
    cout << "Cube Of Number is : " << i*i*i <<endl;
};
bool isPrime(int n) // in bool we can use both true/false and 1/0 in return
{
    // Corner case
    if (n <= 1)
        return 0;
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;

    return 1;
}
int FactorialOfNumber(int fact){ // if we int fact = 5 our default parameter will be 5
    int FactValue = 1;
    for (int i = 1; i <= fact; i++) {
        FactValue *= i;
    }
    return FactValue;
};

// Argument vs Parameter
// An argument is a value passed to a function when the function is called example SomeNumber1 // a different copy in memory is made
// A parameter is a variable used to define a particular value during a function definition example i,n,fact name can be different but reference will be same

// pass by value : example void NameOfSomeFunction(int n) {// some code}; when we call NameOfSomeFunction(n); where n is some value with different reference so value will remain same
// pass by reference : example void NameOfSomeFunction(int& n) {// some code}; when we call NameOfSomeFunction(n); both will be same value so value will be changed

// Function Overloading(achieved at compile time) functions with same name and task and but different Parameter
// An example of compile time polymorphism [Function Overloading provides multiple definitions of the function by changing signature]
// Method 1
void test(int var)
{
    cout << "Integer number: " << var << endl;
}
// Method 2
void test(float var)
{
    cout << "Float number: "<< var << endl;
}
// Method 3
void test(int var1, float var2)
{
    cout << "Integer number: " << var1;
    cout << " and float number:" << var2;
}

int main() {
    int SomeNumber1;
    cout << "Enter the Number you want the Cube of : " << endl;
    cin >> SomeNumber1;
    CubeOfNumber(SomeNumber1); // if we put CubeOfNumber(int n = 3); this is a default argument

    int SomeNumber2;
    cout << "Enter the Number you want Check Prime Number or Not : " << endl;
    cin >> SomeNumber2;
    if(isPrime(SomeNumber2) == true){
        cout << "true it's prime" << endl;
    }
    else{
        cout << "false it's not prime" << endl;
    }

    int SomeNumber3;
    cout << "Enter the Number you want the Factorial of : " << endl;
    cin >> SomeNumber3;
    cout << FactorialOfNumber(SomeNumber3) << endl;

    int a = 5;
    float b = 5.5;
    // in which function should test go
    test(a);
    test(b);
    test(a, b);
    return 0;
}