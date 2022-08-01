/* CLASS TEMPLATES

>> Sometimes, we need a class implementation that is same for all clases only the data types used are different

>> Normally, we would need to create a different class for each data type OR create different member variables and functions within a single class. 

>>In class templates we write a class that can be used for different datatypes

*/

#include<bits/stdc++.h>
using namespace std;

template <typename T, typename U>

class Weight {
  private: 
   T kg; 
   U grams;

  public: 
   void setData(T x, U y){
    kg=x;
    grams=y;
   }

   T getkgData(){
    return kg;
   }

   U getgramData(){
    return grams;
   }
};

int main(){

  Weight <int, double>obj1;
  obj1.setData(5,0.53);
  cout<<"Value of kg is: "<<obj1.getkgData()<<endl;
  cout<<"Value of gram is: "<<obj1.getgramData()<<endl;

  // Weight <double>obj2;
  // obj2.setData(10.67);
  // cout<<"Value of gram is: "<<obj2.getgramData()<<endl;

  return 0;
}

