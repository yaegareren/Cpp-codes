// DMA allows us to set the size of array dynamically during run time rather than compile time.


#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;
    int *ptr;

    cout<<"\nEnter the number of values you want to store: ";
    cin>>size;

    ptr = new int[size];
    cout<<"\nEnter the values to be stored in array: ";
    for(int i=0;i<size;i++){

        cin>>ptr[i];
    }

    cout<<"\nEnter the values to be stored in array: "<<endl;
    for(int i=0;i<size;i++){

       cout<<ptr[i]<<endl;
    }

    return 0;
}

