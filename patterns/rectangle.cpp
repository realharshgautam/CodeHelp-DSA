
#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the no. rows" << endl;
    cin >> n ;
    cout << "Enter no. of columns" << endl;
    cin >> m ;
    for ( int i = 0; i < n; i++) //rows
    {
        for (int j = 0; j < m; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
