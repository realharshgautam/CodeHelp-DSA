#include <iostream>
#include <cmath>
using namespace std;


int decimalToBinaryMethod2(int n){
    //bitwise method
    int binaryno = 0;
    int i =0;
    while (n>0)
    {
        int bit = (n&1);
        binaryno = bit*pow(10, i++) + binaryno;
        n=n >> 1;
    }
    return binaryno;
}

int main()
{
    int n;
    cout << "Enter Value to Convert" <<endl;
    cin>>n;
    int binary = decimalToBinaryMethod2(n);
    cout<<binary;

}