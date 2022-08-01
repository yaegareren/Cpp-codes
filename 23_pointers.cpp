// A pointer is a variable whose value is the address of another variable.
// It allows us to refer the same space in memory from multiple locations
// This means we can update memory in one location and changes will be seen from another location
// Dynamic memory allocation:


#include<bits/stdc++.h>
using namespace std;

int main(){
    int var=5;
    //datatype *pointername;

    int    *ip; //pointer to integer
    double *dp; // pointer to a double
    float  *fp; //pointer to a float
    char   *ch; //pointer to character

    ip=&var;
    cout<<"\nAddress of variable: "<<ip;
    cout<<"\nDereferencing the pointer: "<<*ip;

    *ip=6;
    cout<<"\n\nAddress of variable: "<<ip;
    cout<<"\nDereferencing the pointer: "<<*ip;
    return 0;
}
