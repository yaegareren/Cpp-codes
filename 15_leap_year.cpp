#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cout<<"\nEnter the year want to check: ";
    cin>>y;
    if(y%4==0){
            if(y%100==0){
                    if(y%400==0){
        cout<<"leap year";}}
    }
    else{
        cout<<"Not a leap year";
    }
    return 0;
}
