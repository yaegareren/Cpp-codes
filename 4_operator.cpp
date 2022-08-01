   /* cout<<7/2; -> output is 3
   cout<< 7/2.0 -> output is 3.5

   calculation is done on the basis of higher datatype.

   cout<< 'c'+1 -> output is 100 since c has ascii=99

   order of precedence:
   double
   float
   long long int
   long int
   int
   char

   value is calculated first and then stored into the
   variable. So, it can vary according to the datatype.

   order of precedence of operators:

   category          operators                   associativity

   postfix         () [] -> ++ --                left to right

   unary           + - ! ~ ++ -- (type)* sizeof  right to left

   multiplicative   * / %                        left to right

   additive         + -                          left to right

   shift           << >>                         left to right

   relational      < <= > >=                     left to right

   equality        == !=                         left to right

   bitwise and     &                             left to right

   bitwise or      |                             left to right

   bitwise xor     ^                             left to right

   logical and     &&                            left to right

   logical or      ||                            left to right

   conditional     ?:                            right to left

   assignment                                    right to left

   comma           ,


cout<< 7/2 * 3 gives 9
cout<< 3 * 7/2 gives 10 */



/* datatypes: int, char, long int, long long int, float, double */

/* Bitwise operators

& : Binary AND operator copies a bit to the result if it exists in both operands

| : Binary OR operator copies a bit to the result if it exists in either operands

^ : Binary XOR operator copies the bit if it is set in one operand but not both

~ : Binary ones complement operator is unary and has the effect of flipping the bits

<< : Binary left shift operator. The left operands value is moved left by the number of bits specified by the right operand.

>> : Binary right shift operator. The left operands value is moved right by the number of bits specified by the right operand.

/*misc operators:
sizeof Returns the size of a variable
condition ? x : y ---> if condition is true then it returns the value of x otherwise value y
*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    return 0;
}
