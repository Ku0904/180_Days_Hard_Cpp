#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
// Convert 'a' to 'A'
char ConvertAlphabet(char Alphabet){
    Alphabet -= 32;
    return Alphabet;
};
// Armstrong Number
int Count(int power){
    int count = 0;
    while(power != 0){
        count++;
        power /= 10;
    }
    return count;
}
bool ArmstrongNumberOrNot(int ArmstrongNumber,int power){
    int originalNumber = ArmstrongNumber;
    int sum = 0;
    while(originalNumber != 0){
        int digits = originalNumber%10;
        originalNumber /= 10;
        sum += pow(digits,power);
    }
    if(sum == ArmstrongNumber)
        return 1;
    else
        return 0;
};
// find tailing zero in a factorial(how many zero in factorial of some number)
int TailingZero(int n){
    int count = 0;
    while (n>=5){
        count += n/5;
        n /= 5;
    }
    return count;
};
// Rectangle or not
bool Rectangle(int a,int b,int c,int d){
    if((a==b && c==d)||(a==c && b==d)||(a==d && b==c))
        return 1;
    else
        return 0;
};
// Total moves for Bishop(can only move diagonally) chess board is of 8X8 how many total moves can it take from a point 
// Bishop can only go in last row or column(8,8)
int BishopMoves(int A,int B){
    int count = 0;
    count += min(8-A,8-B); // for side 1
    count += min(8-A,B-1); // for side 2
    count += min(A-1,B-1); // for side 3
    count += min(A-1,8-B); // for side 4b
    return count;
};

// Nim game both are playing optimally
bool canWinNim(int n) {
    if(n%4==0)
        return 0;
    else
        return 1;
};

int main() {
    char Alphabet;
    cout << "Enter the Alphabet : " << endl;
    cin >> Alphabet;
    cout << ConvertAlphabet(Alphabet) << endl;

    int ArmstrongNumber;
    cout << "Enter the ArmstrongNumber : " << endl;
    cin >> ArmstrongNumber;
    int power = Count(ArmstrongNumber);
    if(ArmstrongNumberOrNot(ArmstrongNumber,power) == 1)
        cout << "is an Armstrong Number and the Number is : " << ArmstrongNumber << endl;
    else
        cout << "is not an Armstrong Number" << endl;

    int tailingValue;
    cout << "Enter the  value of factorial: " << endl;
    cin >> tailingValue;
    cout << "Tailing Zeros are : "<< TailingZero(tailingValue) <<endl;

    int a,b,c,d;
    cout << "Enter the Sides of Reactangle : " << endl;
    cin >> a >> b >> c >> d;
    if(Rectangle(a,b,c,d) == 1)
        cout << "is a rectangle" << endl;
    else
        cout << "not a rectangle" << endl;

    int A,B;
    cout << "Enter the  point where Bishop is at : " << endl;
    cin >> A >> B;
    cout << "Total move that Bishop can make : "<< BishopMoves(A,B) <<endl;

    int n;
    cout << "Enter the Starting Value : " << endl;
    cin >> n;
    if(canWinNim(n) == 1)
        cout << "You Have Won The Game" << endl;
    else
        cout << "You have Lost The Game" << endl;
    return 0;
}