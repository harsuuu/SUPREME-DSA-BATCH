#include<iostream>
using namespace std;
int main(){
int a=5;
int* ptr =&a;

cout<<a<<endl;
cout<<&a<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;
cout<<&ptr<<endl;
cout<<*ptr*2<<endl;
cout<<(*ptr)++<<endl;
cout<<++(*ptr)<<endl;
a=a+1;
cout<<a<<endl;
*ptr=*ptr+2;
cout<<*ptr<<endl;
*ptr=*ptr/2;
cout<<*ptr<<endl;
return 0;
}