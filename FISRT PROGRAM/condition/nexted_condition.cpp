#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter your marks ";
cin>>marks;
if(marks>=90)
{
    cout<<"Grade A";
}
else
{
    if(marks>=80)
    {
        cout<<"Grade B";
    }
    else if(marks>=50)
    {
        cout<<"Grade C";
    }
    else
    {
        cout<<"Bhai tu fail ho gya";
    }
}
return 0;
}