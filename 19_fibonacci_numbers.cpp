/*

#include<bits/stdc++.h>
using namespace std;
int fib(int n){
if(n<=1)
    return n;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cout<<"\nEnter the term for the sequence: ";
    cin>>n;
    cout<<fib(n);
    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,first=0,second=1,next;
    cout<<"Enter the number of terms to be printed: ";
    cin>>num;
    cout<<"\nFibonacci series" <<endl;
    for(int i=0;i<num;i++){
        cout<<first<<endl; //0
         next= first+second;//0+1
         first=second; //1
         second=next; //1

    }
    return 0;
}
