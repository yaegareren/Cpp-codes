/*

>> An exception is an unexpected problem that arises during the execution of a program.

>> Exception handling mechanism  provide a way to transfer control from one part of a program to
   another. This makes it easy to separate the error handling code from the code written to handle
   the actual functionality of the program. 

>> C++ exception handling is built upon these three keywords: try, catch and throw

   >> try : A block of code which may cause an exception is typically placed inside try block. It's
            followed by one or more catch blocks. If an exception occurs, it is thrown from try block.

   >> catch : this block catches the exception thrown from the try block. Code to handle the exception
              is written inside this catch block.

   >> throw : A program throws an exception when a problem shows up. This is done using a throw
              keyword.

   >> Every try catch should have a corres. catch block. A single try block can have multiple catch 
      blocks.  

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int nr,dr,result;
    cout<<"\nEnter numerator and denominator: "<<endl;
    cin>>nr>>dr;
    try
    {
      if(dr==0){
        throw dr;
      }
      
    }
    catch(int ex)
    {
      cout<<"\nException:  Divide by "<<ex<<" not allowed";
    }
    
    result= nr/dr;  //division happens here
    cout<<"\nDivision is: "<<result;
    return 0;
}
