#include<iostream>
using namespace std;
int main()
{
 int n;
    cout<< "Enter the size" << endl;
    cin >> n;
    cout << endl;
    for ( int i = 0; i < n; i++) //rows
    {
        //first & last rows
        if ( i == 0 || i == n-1)
        {
          for(int j = 0; j<m ; j++)
          {
            cout<<" * "; 
          }
            
        }
        else{
            //remaining rows
            cout << " * ";
            //spaces
            for ( int k = 0; k < m-2; k++)
            {
                cout << "   ";
            }
            //last star
            cout << " * ";
        }
        cout << endl;
    }
}
