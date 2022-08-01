/*
-------------------------------CONSTRUCTORS--------------------------------------------

>> A constructor is a member function of a class which initializes objects of a class. In c++, 
   constructor is automatically called when object (instance of class) is created. It is special
   member function of the class. 

>> A constructor is different from a normal function in the following ways: 

  >> Constructor has the same name as the class itself. 
  >> Constructors don't have return type
  >> A constructor is automatically called when an object is created.
  >> If we do not specify a constructor, c++ compiler generates a default constructor for us 
     (expects no parameters and has an empty body)

>> Types of constructors:
  
  >> Default constructors: It is the constructor which doesn't take any argument. It has no parameters

  >> Parameterized constructors: It is possible to pass arguments to constructors. Typically, these
     arguments help initialize an object when it is created. To create a parameterized constructor,
     parameters are added to it. When the body of constructor is defined those parameters are used 
     to initialize the object.

  >> Copy Constructor: A copy constructor is a member function which initializes an object using
                       another object of the same class.


-------------------------------DESTRUCTORS--------------------------------------------

>> Destructor is a member function which destructs or deletes an object. 

>> It is called when :
   >> The function ends.
   >> The program ends.
   >> A block containing local variable ends.
   >> A delete operator is called.

>> Destructors are different from a normal member function
   >> They have the same name as the class preceded by a tilde(~)
   >> They don't take any argument and don't return anything not even void

>> There can't be more than one destructor in a class.

>> If we do not write our destructor in a class , compiler creates a default destructor for us. The
   default destructor works fine unless we have dynamically allocated memory or pointer in a class.
   When a class conatins a pointer to memory allocated in class, we need to write a destructor to 
   release memory before class instance is destroyed. This must be done to avoid memory leak.

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

    cars (){  //default constructor

      cout<<"\nDefault constructor called"<<endl;
      company_name= "Toyota";
    }
    
    cars(string cname, string mname, string ftype, float m, double p){ //parmeterized constructor
     cout<<"\nParameterized constructor called"<<endl;
      company_name=cname;
      model_name=mname;
      fuel_type=ftype;
      mileage=m;
      price=p;

    }

    cars(cars &obj){      // copy constructor
     cout<<"Copy constructor called"<<endl;
      company_name=obj.company_name;
      model_name=obj.model_name;
      fuel_type=obj.fuel_type;
      mileage=obj.mileage;
      price=obj.price;

    }
    void displaydata(){

      cout<<"\nCar Properties"<<endl<<endl;
      cout<<"Car Company Name- "<<company_name<<endl;
      cout<<"Car Company Model- "<<model_name<<endl;
      cout<<"Car Fuel type- "<<fuel_type<<endl;
      cout<<"Car Mileage- "<<mileage<<endl;
      cout<<"Car Price- "<<price<<endl;

    }

    ~cars()
    {
      cout<<"\nDestructor called"<<endl;
    }


};

int main()
{
  cars car1, car2("Toyota", "Fortuner","diesel",20,3500000);
  car1.setdata("Toyota", "Atlis","petrol",15.5,1500000);
  car1.displaydata();
  car2.displaydata();
  cars car3=car1;
  car3.displaydata();
  return 0;

}