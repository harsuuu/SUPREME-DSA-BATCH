#include<iostream>
using namespace std;

void util(int** q)
{
    **q=**q+1;     
}
int main(){
int a=5;
int* ptr=&a;
int** q=&ptr;

cout<<"Before"<<endl;
cout<<a<<endl;


util(q);

cout<<endl <<"After"<<endl;
cout<<a<<endl;


return 0;
}