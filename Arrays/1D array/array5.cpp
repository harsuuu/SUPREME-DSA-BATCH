#include<iostream>
using namespace std;
int main(){
int arr[5]={2,32,3,23,4};
for(int i=0;i<5;i++)
{
    arr[i]=1;
}
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}