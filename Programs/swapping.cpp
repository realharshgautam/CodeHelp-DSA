//SWAPPING OF TWO VALUES
 
 #include<iostream>
 using namespace std;
 
  int main()
{
  int a,b,temp;

  cout<<"Assigned values are"<<endl;
  cin>>a>>b;

  cout<<"Assigned values of a = "<<a<<" and b = "<<b<<endl;
  
  temp = a;
  a = b;
  b = temp;
  
  cout<<"Swapped values of a and b is "<<a<<"," <<b<<" respectively."<<endl;

  return 0;

}