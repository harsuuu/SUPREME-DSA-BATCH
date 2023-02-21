#include<iostream>
using namespace std;
int main(){
int arr[10];

int n;
cout<<"Enter how many number which you want to store in array :";
cin>>n;

cout<<"Enter the value which you want to store :";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
//print
for(int i=0;i<n;i++)
{
    cout<<2*arr[i]<<endl;
}
return 0;
}