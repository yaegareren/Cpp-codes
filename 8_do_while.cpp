// in while loop the condition is checked first but in do while loop, the condition is checked after first iteration

#include<bits/stdc++.h>
using namespace std;

int main(){
    char mychar;

    do{
        cout<<"I am a programmer\n "<<"Enter a character again: ";
        cin>>mychar;

    } while(mychar=='x');
    return 0;
}
