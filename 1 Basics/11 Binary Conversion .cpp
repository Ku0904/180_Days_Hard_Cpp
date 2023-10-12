#include<iostream>
#include<math.h>
using namespace std;
int main()
{
//  Decimal(Base 10) to Binary (Base 2)

//  given digits of a number create a number
//  int a,b;
//  cout << "Enter the value of a and b : " << endl;
//  cin >> a >> b;
//  int ans = a*10+b;
//  cout << ans;
//  ans = num*(10^i) + ans here num is the first digit and ans initial is 0 for any number
//  for binary number just replace num with remainder value

  int n;
  cout << "Enter the value of n : " << endl;
  cin >> n;
  int ans,rem = 0;
  int mul = 1;
  while (n>0){ // we can just write n we don't always need n>0
      rem = n%2; // or we can n&1;
      n=n/2; // or we can n>>1;
      ans = rem*mul+ans;
      mul=mul*10;
  }
  cout << ans << endl; // the ans can only be upto 32 bit number

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
}