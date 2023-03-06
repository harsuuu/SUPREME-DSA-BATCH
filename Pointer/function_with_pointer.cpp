#include<iostream>
using namespace std;

void util(int* ptr)
{
    *ptr=*ptr+1;     //actual value m change hoga.
    // p=p+1;        //actual value m change nhi hoga.
}
int main(){
int a=5;
int* ptr=&a;

cout<<"Before"<<endl;
cout<<a<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;

util(ptr);

cout<<endl <<"After"<<endl;
cout<<a<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;

return 0;
}