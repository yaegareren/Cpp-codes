/*

 >> no control transfer happens and the entire body of function is copied at the place where it is  
    called . 

 >> Inline keyword is used to define an inline function and and inline function needs to be defined
    before itis called. 

 >> Execution time is comparatively less as compared to a normal function's execution.

#include<bits/stdc++.h>
using namespace std;

inline int add(int a, int b){
return (a+b);
}
int main(){
    cout<<"Addition of 4 and 5 is: "<<add(4,5);
    return 0;
}

*/

/*

>> A default argument is a value provided in the function declaration that
  is automatically assigned by the compiler if caller of the function doesnt
  provide a value for the argument of the default value.

>> Allows a function to be called without providing one or more trailing arguments.

>> Default arguments start from right to left.

int sum(int x, int y, int z=0, int w=0)
{
   return(x+y+z+w);
}

*/
#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b, int c=0, int d=0)
{
   return(a+b+c+d);
}
int main(){
    cout<<"Sum of 1,2,3 and 4 is: "<<sum(1,2,3,4); //output is 10
    cout<<"\nSum of 2,4,6 and 8 is: "<<sum(2,4); //output is 6
    return 0;
}
