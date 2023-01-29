#include<iostream>
using namespace std;
int main(){
for(int row=0;row<3;row++)
{
    if(row==0 || row ==2)
    {
    for(int j=0;j<5;j++)
    {
        cout<<"*";
    }
    }
    else //remaining middle row
    {
    //first star
    cout<<"*";
    //spaces lga diye beech m 3.
    for(int i=0;i<3;i++)
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