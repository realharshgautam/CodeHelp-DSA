//Loop and Array

#include<iostream>
 using namespace std;
 
  int main()
{
  int a[10],i;
  
  cout<<"Enter element in an array"<<endl;
  
  for (i=0;i<10;i++)
     {
       cin>>a[i];
     }
  
  for (i=0;i<=10;i++)
  {
    cout<<"Elements at index "<<i<<" is "<<a[i]<<endl;
    
  }
  return 0;

}