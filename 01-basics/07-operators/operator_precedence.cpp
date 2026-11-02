#include <iostream>
int main() {
    int a = 5 + 5;// It is a addition operator
    int b = 5 - 5;// It is a subtraction operator
    int c = 5 * 5;// It is a multiplication operator
    int d = 5 / 5;// It is a division operator
    int e = 5 % 5;// It is a modulus operator
    
    //operator precedence is the order in which the operators are evaluated in an expression.
    /*
    Multiplication, division, and modulus have higher precedence than addition and subtraction.
    Therefore, in the expression 5 + 5 * 5, the multiplication is performed
    if both operators have the same precedence, the evaluation is done from left to right.
    but (=) has the lowest precedence and evaluation is done from right to left.
    */
   double result = (10 * 4) / 5; // The multiplication is performed first, followed by the division
   //and () has the highest precedence, so the expression inside the parentheses is evaluated first.
    return 0;
}