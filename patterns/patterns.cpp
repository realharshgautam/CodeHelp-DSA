#include<iostream>
using namespace std;
int main()
{
 int n;
    cout<< "Enter the size" << endl;
    cin >> n;
    cout << endl;
// Rectangle

    // int n, m;
    // cout << "Enter the no. rows" << endl;
    // cin >> n ;
    // cout << "Enter no. of columns" << endl;
    // cin >> m ;
    // // for ( int i = 0; i < n; i++) //rows
    // // {
    // //     for (int j = 0; j < m; j++)
    // //     {
    // //         cout << " * ";
    // //     }
    // //     cout << endl;
    // // }
    
// Hollow Sphere

    // for ( int i = 0; i < n; i++) //rows
    // {
    //     //first & last rows
    //     if ( i == 0 || i == n-1)
    //     {
    //       for(int j = 0; j<m ; j++)
    //       {
    //         cout<<" * "; 
    //       }
            
    //     }
    //     else{
    //         //remaining rows
    //         cout << " * ";
    //         //spaces
    //         for ( int k = 0; k < m-2; k++)
    //         {
    //             cout << "   ";
    //         }
    //         //last star
    //         cout << " * ";
    //     }
    //     cout << endl;
    //}

// half pyramid
    // int n;
    // cin>> n;
    // for (int i = 0; i < n ; i++)
    // {
    //     for (int j = 0; j<i+1; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }
    
// invert 

    // int n;
    // cin>> n;
    // for (int i = 0; i < n ; i++)
    // {
    //     for (int j = 0; j<n-i; j++)
    //    {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

//No.s

    // int n;
    // cout<< "Enter No." <<endl;

    // cin>> n;
    // cout<< endl;

    // for (int i = 0; i < n ; i++)
    // {
    //     for (int j = 0; j<n-i; j++)
    //    {
    //         cout << j+1  << " ";
    //     }
    //     cout << endl;
    // }

//Solid Square

    // int n;
    // cout<< "Enter the Size of Square" <<endl ; 
    // cin>> n;
    // for (int i = 0; i<n ; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

// Hollow Square

    // int n;
    // cout<< "Enter the size of square";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     if(i == 0 || i == n-1)
    //     {
    //         for(int j = 0; j<n ; j++)
    //         {
    //             cout<<" * ";
    //         }
    //         cout<<endl;
    //     }
    //     else
    //     {
    //         cout<<" * ";
    //         for (int k = 0; k < n-2; k++)
    //         {
    //             cout<<"   ";
    //         }
    //         cout<<" * ";
    //         cout<<endl;
    //     }
    // }

//Inverted hollow
    // int n;
    // cout<< "Enter the size" << endl;
    // cin >> n;
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(i == 0 | j == 0 | j == n-i-1)
    //         {
    //             cout<<" * ";C
    //         }
    //         else
    //         {
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++)
    // {
    //     for (int j = 0; j < i + 1 ; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }

// Hollow Half Pyramid

    // for(int i = 0 ; i < n ; i++)
    // {
    //     for(int j = 0  ; j < n ; j++)
    //     {
    //         if(i == j || j == 0 || i == n-1 )
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<<"   ";
    //         }           
    //     }
    //     cout<<endl;
    // }
// full pyramid

    // for(int row = 0; row < n; row++)
    // {
    //     //spaces
    //     for(int i = n-1-row; i>=0 ;i--)
    //     {
    //         cout<<" ";
    //     }

    // for (int col = 0; col < row+1; col++)
    // {
    //     cout<<"* ";
    // }
    // cout<<endl;
    // }

// Inverted

    // for (int r = 0; r < n; r++)
    // {
    //     //space
    //     for (int s = r; s >0 ; s--)
    //     {
    //         cout<<" ";
    //     }

    //     for (int c = n-r; c>0; c--)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

//pyramid

//  for (int i = 0; i < n; i++)
//  {
//     for (int s = (n-i-1); s>=0; s--)
//     {
//         cout<<"   ";
//     }
//     for(int j =0; j < (2*i)-1; j++)
//     {
//         cout<<" * ";
//     }
//     cout<<endl;   
// }

// for (int r = 0; r < n; r++)
// {
//     //space
//     for(int s = r;s>0;s--)
//     {
//         cout<<" ";
//     }
//     for (int i= ((n*2)-r); i>0 ; i++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

// solid diamond

// for (int i = 0; i < n; i++)
// {
//     for (int s = 0; s < n-i-1; s++)
//     {
//         cout<<" ";
//     }
//     for (int k = 0; k < i+1; k++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         cout<<" ";
//     }

//     for (int k = 0; k < n-i; k++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// // hollow diamond

// for(int i = 0 ; i < n; i++)
// {
//     for (int j = 0; j < n-i-1 ; j++)
//     {
//         cout<<" ";
//     }
//     for (int k = 0; k < 2*i+1; k++)
//     {
//         if( k == 0 || k == 2*i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < i; k++)
//         {
//             cout<<" ";
//         }


//         for (int k = 0; k < 2*n-2*i-1; k++)
//         {
//             if( k == 0 || k == 2*n - 2*i - 2 )
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    

// flipped solid diamond

// for (int i = 0; i<n; i++)
// {
//     for (int j = 0; j < n-i ; j++)
//     {
//         cout<<"*";
//     }
//     for(int j = 0; j < 2*i+1; j++)
//     {
//         cout<<" ";   
//     }

    
//     for (int j = 0; j < n-i ; j++)
//     {
//         cout<<"*";
//     }
//  cout<<endl;
// }

// for (int i = 0; i < n; i++)
// {
//     for (int k = 0; k < i+1; k++)
//     {
//         cout<<"*";
//     }

//     for (int k = 0; k <2*n-2*i-1; k++)
//     {
//         cout<<" ";
//     }

//     for (int k = 0; k < i+1; k++)
//     {
//         cout<<"*";
//     }
// cout<<endl;
// }

//fancy patterns 1

// for (int i = 0; i < n; i++)
// {
//     for ( int k = 0; k<i+1 ; k++)
//     {
//         cout<<i+1;
//         if(k!=i)
//         {
//             cout<<"*";
//         }
//     }
//     cout<<endl;
    
// }

//Patterns

// for (int i = 0; i < n; i++)
// {
//     for ( int k = 0; k<n-i ; k++)
//     {
//         cout<<n-i;
//         if(k!=n-i-1)
//         {
//             cout<<"*";
//         }
//     }
//     cout<<endl;
    
// }




// for (int i = 0; i < n; i++)
// {
//     int k;
//     for ( int k = 0; k<i+1 ; k++)
//     {
//         cout<<k+1;
//     }
//     k = k - 1;


//     for (k=i ; k >= 1; k--)  {        
//         cout<<k;
//     }
//     cout<<endl;
// }    

//fliped alphabets
// for (int i = 0; i < n; i++)
// {
//     int k;
//     for ( int k = 0; k<i+1 ; k++)
//     {
//         int ans = k + 1;
//         char ch = ans + 'A' - 1;
//         cout<<ch;
//     }
//     k = k - 1;


//     for (k=i ; k >= 1; k--)  {        
//         int ans = k;
//         char ch = ans + 'A' -1;
//         cout<<ch;
//     }
//     cout<<endl;
// }    

//numeric

// for (int i = 0; i < n; i++)
// {
//     //row +1 elements
//     int start = i +1;
//     for (int j = 0; j < i+1; j++)
//     {
//         cout<< start <<" ";
//         // cout<< i + J +1
//         start++;
//     }
//     cout<<endl;
// }

// for (int i = 0; i < n; i++)
// {
//     // spaces
//     for (int j = 0; j < n -i -1; j++)
//     {
//         cout<<" ";
//     }
//     // number
//     for(int j = 0; j<i+1; j++ )
//     {
//         cout<< i+j+1;
//     }
//     // reverse
//     int start = 2*i;
//     for(int j =0; j<i; j++)
//     {
//         cout<< start;
//         start--;
//     }
//     cout<<endl;
// }


// Numeric Hollow Pattern

// for (int i = 0; i < n; i++)
// {
//     // spaces
//     for (int j = 0; j < n-i-1 ; j++)
//     {
//         cout<<" ";
//     }
//     // numbers
//     int start =1;
//     for (int j = 0; j < 2*i +1; j++)
//     {
//         if(i == 0 || i == n-1)
//         {
//             if (j%2 == 0)
//             {
//                 cout<<start;
//                 start ++;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         else
//         {
//             if (j == 0)
//             {
//                 cout<<i;
//             }
//             else if (j == 2*i)
//             {
//                 cout<<i+1;
//             }
//             else
//             {
//                 cout<<" ";
//             }
            
//         }
        
//     }
//     cout<<endl;
    
// }
















}


