#include<iostream>
using namespace std;
void solve(int *ptr)
{
    *ptr=*ptr+10;
}
int main(){
int a=10;
int* ptr=&a;
cout<<"Before calling a is : "<<a<<endl;
solve(ptr);
cout<<"after calling function a is : "<<a<<endl;
return 0;
}