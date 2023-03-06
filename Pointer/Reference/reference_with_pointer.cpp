#include<iostream>
using namespace std;
void solve(int*& ptr)
{
    ptr++;
}
int main(){
int a=10;
int* ptr=&a;

cout<<"Before : "<<ptr<<endl;
solve(ptr);
cout<<"After : "<<ptr;
return 0;
}