#include<iostream>
using namespace std;

int main(){
    cout<<" Arithmetic operation program"<<endl;
  int n,t,op1,op2;
  cout<<"\n Enter test cases: ";
  cin>>t;
  while(t--){
  cout<<"\n 1-Addition, 2-Subtraction, 3-Multiplication, 4-Division, 5-Modulo\n";
  cout<<"\n Enter a number between 1-5: ";
  cin>>n;
  cout<<"\n Enter two operands: ";
  cin>>op1>>op2;
  switch(n){
  case 1:
      cout<<" the result of "<<op1<<" + "<<op2<<" is "<<op1+op2<<endl;
      break;
  case 2:
      cout<<" the result of "<<op1<<" - "<<op2<<" is "<<op1-op2<<endl;
      break;
  case 3:
      cout<<" the result of "<<op1<<" * "<<op2<<" is "<<op1*op2<<endl;
      break;
  case 4:
      cout<<" the result of "<<op1<<" / "<<op2<<" is "<<float(op1/op2)<<endl;
      break;
  case 5:
      cout<<" the result of "<<op1<<" % "<<op2<<" is "<<op1%op2<<endl;
      break;
  default:
    cout<<"\n Enter the correct operation\n"<<endl;
}
  }
return 0;

}
