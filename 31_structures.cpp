/*
>> A structure in C++ is a group of data elements grouped together under one name. These data elements
   ,known as members, can have different types and different lengths. It is a user defined data type
   which allows us to combine data items of different kinds.

>> Structures are user defined datatypes

>> Example: 
   
   struct books 
   {
     char title[50];
     char author[50];
     char subject[100];
     int book_id;
   }book;

*/

#include<bits/stdc++.h>
using namespace std;

struct person
{
  char name[100];
  int age;
  double salary;
};

int main(){
    person p1;
    cout<<"Person Details"<<endl;
    cout<<"Enter Person name: ";
    cin.getline(p1.name,100);
    cout<<"\nEnter age: ";
    cin>>p1.age;
    cout<<"\nEnter salary: ";
    cin>>p1.salary;

    cout<<"\nPerson Details are as follows"<<endl;
    cout<<"Person name: "<<p1.name;
    cout<<"\nAge: "<<p1.age;
    cout<<"\nSalary: "<<p1.salary;

    return 0;
}
