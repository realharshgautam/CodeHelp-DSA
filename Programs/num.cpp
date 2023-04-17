#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter No. "<<endl;
    cin>>n;

    while (n!=0)
    {
        int num = n%10;
        cout<< num <<endl;
        n = n/10;
    }
}