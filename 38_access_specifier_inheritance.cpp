#include<bits/stdc++.h>
using namespace std;

class baseclass{
   
   public:
   int x;

   baseclass(){
     x=0;
     y=0;
     z=0;
   }

   void printProtectedData()
   {
     cout<<"Y: "<<y<<endl;
   }
                             
  protected:
   int y;

  private:
   int z;
};

class derivedclass: public baseclass{
  /*
     public:
   int x;

   baseclass(){
     x=0;
     y=0;
     z=0;
   }

   void printProtectedData()
   {
     cout<<"Y: "<<y<<endl;
   }
                             
  protected:
   int y;

  private:  // not inherited
   int z;
  
  */

};

class derivedclass2: protected baseclass{
  /*
    protected int x;  //inherited in protected mode
    protected int y;
  
  */
};

void outsidefunction( baseclass obj){
  cout<<"X: "<<obj.x<<endl;
  obj.printProtectedData(); 
  //cout<<"Z: "<<obj.z<<endl; error
}
int main()
{
  baseclass obj1;
  derivedclass obj2;
  derivedclass2 obj3;
  cout<<"X: "<<obj2.x; //obj2.y would throw an error
  
  cout<<"X: "<<obj2.x; // this would throw an error
  outsidefunction(obj1);
}