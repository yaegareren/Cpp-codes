/*
Function is a group of program statements with a unique name that performs a specific task. 

They are used to provide modularity and reusability to a program.

There are two types of functions:
  >> Library / Predefined function
  >> User-defined function

Function syntax:
            return_type function_name(parameter list) {
                // body of the function
            }

Following are the components of the function:
  >>Return_type: A function may return a value. The return_type is the data-type of the value the 
                 function returns. Some function perform operations without returning a value. In this case, the return_type is the keyword void.

  >>Function name: This is the actual name of the function. The function name and the parameter list 
                   together constitute the function signature. To call a function, its name is used.

*/

#include<bits/stdc++.h>
using namespace std;
int max(int, int);
int main(){
    int a,b;
    cin>>a>>b;
    int c= max(a,b);  //function call
    cout<<c;
    return 0;
}

int max(int x, int y){
if (x>y)
    return x;
    else
        return y;
}
