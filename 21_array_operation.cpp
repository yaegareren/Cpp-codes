#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[3];
    int B[3];
    int add[3],sub[3],mul[3];

    cout<<"\nEnter 3 integers for array A: "<<endl;
        cout<<"\nArray values are: "<<endl;
        for(int i=0; i<3;i++){
        cin>>A[i];
    }

    cout<<"\nEnter 3 integers for array B: "<<endl;
        cout<<"\nArray values are: "<<endl;
        for(int i=0; i<3;i++){
        cin>>B[i];
    }

        cout<<"\n\nAddition of A and B is: "<<endl;
        for(int i=0; i<3;i++){
        add[i]=A[i]+B[i];
        cout<<add[i]<<" ";

    }

        cout<<"\n\nSubtraction of A and B is: "<<endl;
        for(int i=0; i<3;i++){
        sub[i]=A[i]-B[i];
        cout<<sub[i]<<" ";
    }

        cout<<"\n\nMultiplication of A and B is: "<<endl;
        for(int i=0; i<3;i++){
        mul[i]=A[i]*B[i];
        cout<<mul[i]<<" ";
    }

    return 0;
}
