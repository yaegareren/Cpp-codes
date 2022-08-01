// Complex number
// real part
// imaginary parts

// comp1= 5+6i
// comp2= 3+4i

// comp3= (5+3)+(6+4)i





#include<bits/stdc++.h>
using namespace std;

class ComplexNumber{
    //data members
    int real;
    float imaginary;

    public:
    ComplexNumber(){ //default constructor
    }
    ComplexNumber(int r, float i){ //parameterized constructor
        real = r;
        imaginary = i;
    }

    void displayData(){
        cout<<"Complex Number is: "<<real<<" + "<<imaginary<<"i"<<endl<<endl;
    }

    int getRealpart(){
        return real;
    }

    float getimaginarypart(){
        return imaginary;
    }

};

ComplexNumber add2number(ComplexNumber n1, ComplexNumber n2){ //passing objects as arguments in functions
    int r;
    float i;

    r= n1.getRealpart() + n2.getRealpart();
    i= n1.getimaginarypart() + n2.getimaginarypart();   

    ComplexNumber temp(r, i); //temporary object
    return temp; // returning objects from functions  
}
int main(){
    ComplexNumber comp1(5,4), comp2(2,3), comp3;
    comp1.displayData();
    comp2.displayData();

    cout<<"Addition of Comp1 and Comp2"<<endl;
    comp3= add2number(comp1, comp2); 
    comp3.displayData(); 

    ComplexNumber *ptr1; //pointer pointing to an object of type ComplexNumber
    cout<<"\nPointer to object\n";
    ptr1= &comp3;
    ptr1->displayData();
    ptr1=&comp2;
    ptr1->displayData();

    cout<<ptr1; // what does pointer have
    return 0;
}
