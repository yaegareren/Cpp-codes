/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,temp;
    cin>>a>>b;
    cout<<a<<" = a"<<endl;
    cout<<b<<" = b"<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" = a"<<endl;
    cout<<b<<" = b"<<endl;
    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" = a"<<endl;
    cout<<b<<" = b"<<endl;
    a=a+b;
    b=a-b;  //(a+b)-b
    a=a-b; //a-(a-b)
    cout<<a<<" = a"<<endl;
    cout<<b<<" = b"<<endl;
    return 0;
}
