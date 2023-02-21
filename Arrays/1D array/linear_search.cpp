#include<iostream>
using namespace std;
int Linear_search(int arr[],int size,int key)
{
    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            cout<<"key is found";
            return 0;
        }
    } cout<<"key is not found";
}
int main(){
int arr[]={2,3,45,3,2,45};
int size=5;

int key;
cout<<"Enter the key which you want to search :";
cin>>key;

Linear_search(arr,size,key);
return 0;
}