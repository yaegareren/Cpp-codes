/*
Procedural Oriented Programming:

>> List of instructions for a computer to follow. 

>> Group of similar tasks are organized as functions.

>> Most functions shared global data

>> Data is publicly available


Object Oriented Programming: 

>> Emphasis on data rather than the procedure

>> Programs are divided into objects

>> Data structures are designed such that they characterize the Objects.

>> Functions that operate on the data of an object are tied together in the same data structure

>> Data is hidden and cannot be directly accesses.

----------------OOP IN C++-------------------------

Definition: OOP is an approach that provides a way of modularizing programs by creating partitioned
            memory area  for both data and functions that can be used as a template(class) for
            creating copies of such modules on demand(objects)

Some basic concepts associated with OOP :

1.Classes and objects

2. Data abstraction and encapsulation

3. Inheritance

4. Polymorphism

5. Dynamic Binding

6. Message Passing


*/

#include<bits/stdc++.h>
using namespace std;

class cars{

  private: 
  string company_name;  // data members 
  string model_name;
  string fuel_type;
  float mileage;
  double price;

  public:
    void setdata(string cname, string mname, string ftype, float m, double p){ //member function
         company_name=cname;
         model_name=mname;
         fuel_type=ftype;
         mileage=m;
         price=p;
    }

    void displaydata(){

      cout<<"Car Properties"<<endl<<endl;
      cout<<"Car Company Name- "<<company_name<<endl;
      cout<<"Car Company Model- "<<model_name<<endl;
      cout<<"Car Fuel type- "<<fuel_type<<endl;
      cout<<"Car Mileage- "<<mileage<<endl;
      cout<<"Car Price- "<<price<<endl;

    }


};

int main()
{
  cars car1;    //object are nothing but variable type of class
  car1.setdata("Audi","R8","Petrol",30.00,8000000);
  car1.displaydata();
  return 0;

}