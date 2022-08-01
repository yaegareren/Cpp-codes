#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3]={1,2,3}, n;
    cout<<"\nEnter array size: "<<endl;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n;i++){
        cin>>arr1[i];
    }
    cout<<"\nArray values are: "<<endl;
        for(int i=0; i<n;i++){
        cout<<arr1[i]<<endl;
    }
    return 0;
}
