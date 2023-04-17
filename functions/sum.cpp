#include<iostream>
using namespace std;
int add(int a, int b)
{
    int result = a+b;
    return result;
}
int main(){
    int a;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    int b;
    cout<<"Enter Value of b"<<endl;
    cin>>b;
    int sum = add(a, b);
    cout<<"Result is : "<<sum;
}