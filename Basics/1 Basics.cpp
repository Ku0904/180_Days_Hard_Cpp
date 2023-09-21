// Computer Memory Unit
// compiler not only translates it also tells error in code and optimize our code as well
// 1 transistor can store 1 bit(0 or 1) 1 bit = 1 binary , 8 bit = 1 byte, 1024 byte or 2^10 byte = 1kb, 1024 kb or 2^10 kb = 1 Mb and list goes on...
// we can store numbers easily but how we store alphabets to assign number to them as well A=65, B=66, C=67...other characters like %,*,#,@ were given number by organisation ASCII two computer won't be able to communicate if they don't follow same system 

#include <iostream> // header file tells the meaning of std::cout isostream for input output stream
using namespace std; // with this we don't always have to tell it's a standard command
int main() { // int main(){ is our starting
    cout << "Hello World!" << endl; // std::cout standard console output without endl or \n it will not start from next line and << is insertion operator
    cout << 2+3 << endl;
    cout << "hello there\n";
    cout << "2+3" << endl; // it becomes a strong and operations will not be performed
    return 0;
}
    