#include<iostream>
using namespace std;
int main(){
    int n;
    int col;
    cout<<"Enter the row(n) :";
    cin>>n;
    cout<<"enter the column";
    cin>>col;
for(int row=0;row<n;row++)
{
    if(row==0 || row ==n-1)
    {
    for(int j=0;j<col;j++)
    {
        cout<<"*";
    }
    }
    else //remaining middle row
    {
    //first star
    cout<<"*";
    //spaces lga diye beech m 3.
    for(int i=0;i<col-2;i++)
    {
        cout<<" ";
    }
    //last star
    cout<<"*";
    }
    cout<<endl;
}
return 0;
}