/* Program to create an array of structures and accept input and display output 

#include<bits/stdc++.h>
using namespace std;

struct person
{
  char name[100];
  int age;
  double salary;
};

int main(){

  person p[2]; // p[0], p[1]

  cout<<"Enter user details like name, age, salary: "<<endl;

  for(int i=0; i<2; i++)
  {
    cout<<"Enter details of user: "<<(i+1)<<endl;
    cin>>p[i].name;
    cin>>p[i].age;
    cin>>p[i].salary;
  }
  
  cout<<"\nDetails of users are: "<<endl;

  for(int i=0; i<2; i++)
  {
    cout<<"\nDetails of user: "<<(i+1)<<endl;
    cout<<p[i].name<<endl;
    cout<<p[i].age<<endl;
    cout<<p[i].salary<<endl;
  }  
    return 0;
}

*/

/*Program to create a variable of struct type, create a pointer and point to it and use the pointer
  to take input and display output.

*/

#include<bits/stdc++.h>
using namespace std;

struct person
{
  string name;
  int age;
  double salary;
};

int main ()
{
  person p1;

    cout<<"Person Details"<<endl; 

    person *ptr= &p1;
    cout<<"Enter Person name: ";
    cin>>ptr->name;
    cout<<"\nEnter age: ";
    cin>>ptr->age;
    cout<<"\nEnter salary: ";
    cin>>ptr->salary;

    cout<<"\nPerson Details are as follows"<<endl;
    cout<<"Person name: "<<ptr->name;
    cout<<"\nAge: "<<ptr->age;
    cout<<"\nSalary: "<<ptr->salary;

  return 0;
}