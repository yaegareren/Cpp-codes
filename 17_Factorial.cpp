/*

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,fact;
    cout<<"\n Enter the number whose factorial you want: ";
    cin>>n;
    fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"\n Factorial of "<< n<<" is "<<fact;
    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,fact;
    cout<<"\n Enter the number whose factorial you want: ";
    cin>>n;
    fact=n;
    while(n>1){
        n--;
        fact*=n;
    }
    cout<<"\n Factorial is "<<fact;
    return 0;
}
