//Arithmetic Operations

#include<iostream>
 using namespace std;
 
  int main()
{
  int a,b,add,sub,mul,div;

  cout<<"Program of an Arithmetic operator"<<endl;
  cout<<"Enter Two Numbers"<<endl;
  
  cin>>a>>b;

  add = a+b;
  cout<<"Sum of a and b ="<<add<<endl;

  sub = a-b;
  cout<<"Subtraction of and b ="<<sub<<endl;
 
  mul = a*b;
  cout<<"Multiplication of a and b ="<<mul<<endl;

  div = a/b;
  cout<<"Division of a and b ="<<div<<endl;
  
  return 0;

}