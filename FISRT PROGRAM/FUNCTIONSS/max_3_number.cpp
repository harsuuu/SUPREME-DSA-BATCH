#include<iostream>
using namespace std;

int max(int x, int y, int z)
{
    if(x>y && x>>z)
    {
        return x;
    }
    else if(y>z && y>x)

    {
       return y;
    }

    else
    {
        return z;
    }
}
int main(){
int a,b,c;
cin>>a>>b>>c;

cout<<"Maximum of 3 number is :"<<max(a,b,c);
return 0;
}