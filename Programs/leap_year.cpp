/*Check whether the given year is leap year or not*/

#include<iostream>
 using namespace std;
 
  int main()
{
  int a;
  cout<<"Check whether the given year is leap year or not"<<endl;
  cin>>a;

  if (a%100==0)
    {
    
      if(a%400==0)
      {
       cout<<"Given no. in century is leap year"<<endl;
      }
      else
      {
       cout<<"Given no. in century is not a leap year"<<endl;
      }
    
    }
    
    else if(a%4==0)
    {
       if(a%4==0)
       {
        cout<<"Given no. in century is leap year"<<endl;
       }
       else
       {
        cout<<"Given no. in century is not a leap year"<<endl;
        }
     }
    
    else 
    {
    cout<<"Given Year is not a leap year"<<endl;
    }
      

  return 0;

}