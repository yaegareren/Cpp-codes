/*
>> Function overloading is a feature in c++ where two or more functions can have the same name but    
   different parameters.

>> Function overloading can be considered as an example of polymorphism feature in c++ .

>> An Overloaded function must have:
  >> Different type of parameters
  >> Different number of parameters
  >> Different sequence of paramteres
  
>> Examples:
   void print();
   void print(int a);
   void print(float a);
   void print(int a, int b);
   void print(int a, double b);
   void print(double a, int b);

*/

#include<bits/stdc++.h>
using namespace std;

int add(int a, int b)            //function-1
{
  cout<<"function-1: ";
  return (a+b);
}

int add(int a, int b, int c)    //function-2
{
  cout<<"function-2: ";
  return (a+b+c);
}

double add(double a, double b) //function-3
{
  cout<<"function-3: ";
  return (a+b);
}

double add(int a, double b)   //function-4
{
  cout<<"function-4: ";
  return (a+b);
}

double add(double a, int b)  //function-5
{
  cout<<"function-5: ";
  return (a+b);
}

int main(){
    cout<<add(1,2)<<endl;        //function-1
    cout<<add(1,2,3)<<endl;     //function-2
    cout<<add(1.2,2.3)<<endl;   //function-3
    cout<<add(1,2.7)<<endl;     //function-4
    cout<<add(1.9,2)<<endl;     //function-5

    return 0;
}
