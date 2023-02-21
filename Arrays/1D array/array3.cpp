#include<iostream>
using namespace std;
int main(){
int arr[6];

cout<<"Enter the value which you want to store :";
for(int i=0;i<6;i++)
{
    cin>>arr[i];
}
//print
for(int i=0;i<6;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}