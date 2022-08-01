#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num,digit,rev=0;
    cout<<"\nEnter a number: ";
    cin>>num; //383
    n=num;
    while(num!=0){

    digit=num%10; //digit= 383%10 = 3
    rev=(rev*10)+digit;//rev = (0*10) + 3
    num=num/10; // num= 383/10 = 38

    }
    if(rev==n){
    cout<<"\nPalindrome number";
    }
    else
        cout<<"\nNot a palindrome number";
    return 0;
}
