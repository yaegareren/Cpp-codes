#include<bits/stdc++.h>
using namespace std;

class animal // base class
{
  public:
   void eat(){
    cout<<"I'm eating generic food. ";
   }

};

class cat : public animal  // derived class
{
  public: 
  void eat(){
   cout<<"I'm eating rat. ";
  }
};

class dog : public animal  // derived class
{
  public: 
  void eat(){
   cout<<"I'm chewing a bone ";
  }
};

void function1(animal *xyz)
{
   xyz->eat();
}

int main(){
    animal *ptr;

    cat catobj;
    dog dogobj;

    ptr=&catobj;
    return 0;
}
