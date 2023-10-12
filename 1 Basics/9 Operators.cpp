#include <iostream>
using namespace std;
int main() {
    // Arithmetic Operators two types unary(works on single operand[!,sizeof(),Addressof operator ( & ),Decrement ( — ),Increment ( ++ ),Unary minus ( – )]) and binary(works on two operands[+,-,*,/,%])

    // precedence of data types double > float > int > char > bool
    // precedence of operators (associativity solve left to right) (),[] > (++,--) > +,-(unary operators) > (!,~) > (*,/,%) > (+,-) > (>>,<<) > (<,>,>=,<=) > (==,!=) > & > ^ > | > (&&) > (||) > (=,+=,-=,*=,/=,%=,&=,^=,|=,<<=,>>= assignment operators)
    // example 2*3-4/2 -> 6-4/2 -> 6-2 -> 4

    // Comparison Operators (==,!=,>,<,<=,>=) (associativity solve left to right) example 5>4>3 -> 1>3 -> 0(false) , 5>4<3==2 -> 1<3==2 -> 1==2 -> 0(false)

    // Logical Operator (&&(if any value is 0 it will give false),||(if both are 0 it will give false),!(!10-0,!0=1))

    // Bitwise Operator (&(AND),|(OR),^(XOR),~(NOT),<<(left shift),>>(right shift)) precedence (>>,<<) > (&,|,^)
    // example 6<<1 convert 6 in binary 110 then left shift 1 that will be 1100 which is 12 [a<<b will give us a*(2^b)]
    // example 6>>2 convert 6 in binary 110 then right shift 2 that will be 1 which is 1 [a>>b will give us a/(2^b)]
    // example ~5 convert to binary 101 then find 1s compliment then 1s+1 to get 2s compliment which is -6 [~a will give us -(a+1)]

    // Assignment Operator(=,+=,-=,*=,/=,%=,&=,|=,^=,>>=,<<=)

}