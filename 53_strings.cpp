
// header file for strings: <cstring>
#include<bits/stdc++.h>
using namespace std; 

int main(){
  // C-style strings
  // char str1[]="Shree";
  // cout<<"Name is: "<<str1<<endl;

  // char str[4]="C++";
  // char str[]={'C','+','+','\0'}; 
  // char str[4]={'C','+','+','\0'}; 
  
  // char str2[100];
  // cout<<"Enter your name: "<<endl;
  // cin.getline(str2, 100);
  // cout<<"Name is: "<<str2;

  // C++ string class

  // string obj= "Shree Mangalam";
  // cout<<"Name is: "<<obj;
     
     cout<<"Enter a string: "<<endl;
     string obj;
     getline(cin, obj);
     cout<<"String is: "<<obj<<endl;

  return 0; 
}