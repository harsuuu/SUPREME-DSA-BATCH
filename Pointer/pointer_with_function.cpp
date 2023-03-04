#include<iostream>
using namespace std;
void solve(int arr[])
{
    cout<<"Ye first elememt ka hi address hai : "<<arr<<endl;
    cout<<"Ye pointer ka size ka hai : "<<sizeof(arr)<<endl;
    arr[0]=50;
}
int main(){
int arr[10]={20,30,40,50};
cout<<arr<<endl;            // yha base address print hoga first element ka.
cout<<"Calling se phle : "<<arr[0]<<endl;         // yha index 0 bala print hoga.
cout<<sizeof(arr)<<endl;    // yha arrray size 10*4=40 print hoga.
solve(arr);         //function call

cout<<"Function calling k bad : "<<arr[0]<<endl;
return 0;
}