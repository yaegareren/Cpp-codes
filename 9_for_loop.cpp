// it is used  when we know how many times we are going to call the same thing again and again

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        cout<<"I am a programmer\n";
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    for(int i=0;i<10;i++){
        cout<<x<< " * "<<i<<" = "<<x*i<<endl;
    }
    return 0;
}
