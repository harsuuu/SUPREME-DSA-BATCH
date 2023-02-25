//isme 5th index free rhega but uspe '\0'(zero) hota hai.
#include<iostream>
using namespace std;
int main(){
char name[20];
cout<<"Enter your name :";
cin>>name;

for(int i=0;i<6;i++)
{
    cout<<"index: "<<i<<" value: "<<name[i]<<endl;
}

//Ab bo null value hm aise bhi dekh skte hai.

    int value =(int)name[5];
    cout<<"5th index value is :"<<value<<endl;
return 0;
}