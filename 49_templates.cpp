// TEMPLATES

/*
>> Template is a blueprint or formula for creating a generic class or a function

>> 2 Types: 
 >>> Function template
 >>> Class template

>> Function templates are specal functions that can operate with generic types

>> This allows us to create a  function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type

>>The simplest idea is to pass data type as a parameter so that we don't need to write same code for different data types.

>> We write a generic function that can be used for different data types. 

EXAMPLE: FUNCTION TEMPLATE

template<typename T>
T add(Tx, Ty)
{}

int main(){
  add<int>(3,7);
  add<float>(3.3,7.5);
  add<double>(3.55,7.66);
}

EXAMPLE: FUNCTION OVERLOADING

int add(int x, int y){}
float add(float x, float y){}
doublr add(double x, double y){}

int main()
{
  add(5,4);
  add(2.3f,4.2f);
  add(5.2344,4232.344);
}

*/

#include<bits/stdc++.h>
using namespace std;
/*
int add(int x, int y){
  return (x+y);
}


float add(float x, float y){
  return (x+y);
}


double add(double x, double y){
  return (x+y);
}
*/

template <typename T>
T add(T x, T y)
{
  return (x+y);
}

/* Passing more than one data type

template <typename T, typename U>
U add(T x, U y)
{
  return (x+y);
}

int main (){
  
  cout<<"Addition of 2 integers 3 and 4.5 is: "<<add<int,double>(3,4.5);
}

*/

int main (){
  
  cout<<"Addition of 2 integers 3 and 4 is: "<<add<int>(3,4);

  cout<<"\nAddition of 2 integers 3 and 4 is: "<<add<float>(3.67f,4.84f);

  cout<<"\nAddition of 2 integers 3 and 4 is: "<<add<double>(3.45,4.34);
  return 0; 

}