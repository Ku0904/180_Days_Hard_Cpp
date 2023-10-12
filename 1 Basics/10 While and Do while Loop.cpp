#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number n: " << endl;
    cin >> n;

//    intialize;
//    while(break){
//        update
//    };

// while loop
    int i1 = 1;
    while (i1 <= n){
        cout << i1 << " ";
        i1++;
    }
    cout << endl;
// table with while loop
    int i2 = 1;
    while (i2 <= 10){
        cout << n << " * " << i2 << " is " << i2*n << endl;
        i2++;
    }

//    initialize;
//    do{
//    update
//    };
//    while(break);

//    do while
    cout << "with do while loop" << endl;
    int x = 1;
    do {
        cout << x << " ";
        x++;
}
    while (x<=n);
    cout  << endl;

//    break and continue only works in for loop
//    switch(expression) {
//        case x:
//            code block
//            break;
//        case y:
//            code block
//            break;
//        default:
//            code block
//    }

//    scope of variable you know this from javascript
//    first find in local then search global
}