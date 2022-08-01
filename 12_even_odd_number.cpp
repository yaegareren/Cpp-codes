#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    cout<<"\n Enter a number: ";
    long long int n;
    cin>>n;
    if(n%2==0){
        cout<<" The number "<<n<<" is even"<<endl;
    }
    else
        cout<<" The number "<<n<<" is odd"<<endl;

}
    return 0;
}
