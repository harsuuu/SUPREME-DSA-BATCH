#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[]={2,3,4,5,6,7,8};
int size=7;
int key;
cout<<"Enter the key which you want to search :";
cin>>key;
if(binary_search(arr,arr+size,key))
{
    cout<<"key is found";
}
else
{
    cout<<"key is not found";
}
return 0;
}