#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"\nEnter three numbers: "<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b)&&(a>c)){
        cout<<a<<" is largest"<<endl;
    }
    else if((b>c)&&(b>a)){
        cout<<b<<" is largest"<<endl;
    }
    else
        cout<<c<<" is largest"<<endl;
    return 0;
}
