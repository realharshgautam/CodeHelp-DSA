#include <iostream>
using namespace std;

char Grade(int marks)
{
    // if(marks >= 90)
    // {
    //     return'A';
    // }
    // else if(marks >= 70)
    // {
    //     return'B';
    // }

    // else if(marks >= 60)
    // {
    //     return'C';
    // }
    // else if(marks >= 40)
    // {
    //     return'D';
    // }
    // else
    // {
    //     return 'F';
    // }
    switch (marks/10)
    {
    case 10: return 'A'; break;
    case 9: return 'A'; break;
    case 8: return 'B'; break;
    case 6: return 'C'; break;
    case 4: return 'D'; break;

    default: return 'F';
        break;
    }
}
int main(){

int marks;
cout<<"Enter Marks"<<endl;

cin>>marks;
if (marks > 100 || marks <0)
{
    cout<<"Enter Valid Marks"<<endl;
}
else
{
    char finalGrade = Grade(marks);
    cout<<endl<<finalGrade;
}
return 0;
}



