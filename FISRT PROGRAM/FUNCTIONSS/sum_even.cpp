#include<iostream>
using namespace std;

void sum_even(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
           sum=sum+i;
        }
    }
    cout<<sum<<endl;
    
}
int main(){
int num;
cout<<"Enter the num";
cin>>num;

sum_even(num);
return 0;
}