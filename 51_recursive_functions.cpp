/* RECURSIVE FUNCTIONS IN C++

>> A function that calls itself is known as a recursive function. And, this technique is known as recursion. Recursion is the process of repeating items in a self-similar way. 

>> This enables the function to repeat itself several times, outputting the result and the end of each iteraton. 

>> The recursion continues until the base condition is met which prevents it. 

>> To prevent infinite recursion, if...else statement (or similar approach) can be used where one branch makes the recursive call and other doesn't. 

*/
 
/*
 RECURSIVE FUNCTION TO CALCULATE SUM OF FIRST N NATURAL NUMBERS

int sum(int num)
{
  if(num!=0)
   return (num +sum(num-1)); // sum(functions call itself)

  else
   return num;
}

*/

/* ADVANTAGES AND DISADVANTAGES

>> Recursion makes program cleaner. Most algorithms can be defined recursively which makes it easier to visualize and prove. 

>> If the speed of the program is vital then, you should avoid using recursion. Recursions use more memory and are generally slow. Instead, we should use loops. 

>> For the most part recursion is slower, and takes up on more stack as well. The main advantage of recursion is that for problems like tree traversal it makes the algorithm a little easier 

*/

#include<bits/stdc++.h>
using namespace std;

int sum(int num){
  if(num!=0)
   return (num+sum(num-1)); // Sum functions call itself

  else 
   return num;
}

int main() {
  int n;
  cout<<"Enter number till which you want the sum of natural numbers to be calculated: ";
  cin>>n;
  int total =  sum(n);
  cout<<"\nSum of natural from 1 to "<<n<<" are: "<<total<<endl;
  return 0;
}