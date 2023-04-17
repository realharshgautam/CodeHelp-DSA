//SIMPLE INTEREST

#include<iostream>
 using namespace std;
 
  int main()
{
  int SI,P,R,T,A;

  cout<<"Enter principle amount "<<endl;
  cin>>P;

  cout<<"Enter rate amount "<<endl;
  cin>>R;

  cout<<"Enter Time "<<endl;
  cin>>T;

  SI = (P*R*T)/100;
  cout<<"Simple Interest = "<<SI<<endl;
  A = P + SI;
  cout<<"Total amount after "<<T<<" no. of years = "<<A<<endl;

  return 0;

}