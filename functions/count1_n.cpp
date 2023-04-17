#include<iostream>
using namespace std;

void count(int n){

    for (int i = 0; i <= n; i++)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
    int n;
    cout<<"Enter Value"<<endl;
    cin>>n;
    cout<<endl;

    count(n);
    return 0;
}
