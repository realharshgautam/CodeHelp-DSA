#include <iostream>
using namespace std;

void PrintNum(int num)
{
    cout << num <<endl;
}

int fMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int main()
{
    int a,b,c;
    cout<< "Enter Values"<<endl;
    cin >> a >> b >> c;

    int maximumNumber = fMax(a,b,c);
    cout <<"Maximum No. is : "<< maximumNumber <<endl;
    return 0;
}