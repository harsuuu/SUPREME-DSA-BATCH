#include<iostream>
using namespace std;

void print (int num)
{
    cout<<"print function :"<<num<<endl;
    num++;
    cout<<"Print function :"<<num<<endl;
}
int main(){
int num=12;
num++;
++num;
cout<<"Main function :"<<num<<endl;
print(num);
num--;
cout<<"Main function :"<<num<<endl;
return 0;
}