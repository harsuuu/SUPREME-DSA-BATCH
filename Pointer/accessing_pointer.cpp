#include<iostream>
using namespace std;
int main(){
int a=10;
int* ptr=&a;

cout<<"Address of a is : "<<&a<<endl;
cout<<"Value stored at ptr is : "<<*ptr<<endl;
cout<<"Adress jo ptr store kr rha a ka : "<<ptr<<endl;
cout<<"ptr ka khud ka address : "<<&ptr<<endl;
return 0;
}  