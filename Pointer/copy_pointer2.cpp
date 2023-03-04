#include<iostream>
using namespace std;
int main(){
int a=10;
int* ptr=&a;
int* q=ptr;
int* r=q;  
cout<<a<<endl;
cout<<ptr<<endl;
cout<<q<<endl;
cout<<r<<endl;
cout<<*ptr<<endl;
cout<<*q<<endl; 
cout<<*r<<endl;
cout<<&ptr<<endl;
cout<<&q<<endl;
cout<<*r<<endl;
cout<<(*ptr)+(*r)+(*q)<<endl;
cout<<(*ptr)*(*r)*(*q)<<endl;
cout<<(*ptr)-(*q)<<endl;

return 0;
}