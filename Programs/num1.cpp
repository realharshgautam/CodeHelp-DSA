#include <iostream>
using namespace std;

int main ()
{
    // create a array
    int digit[] = {8,2,3,7};

    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        ans = ans * 10 + digit[i];
    }
    cout<<ans<<endl;
}