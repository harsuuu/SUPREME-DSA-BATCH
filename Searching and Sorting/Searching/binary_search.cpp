#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
   int start =0;
   int end= size-1;
   int mid=(start+end)/2;

   while(start<=end)
   {

    if(key==arr[mid])
    {
        return mid;       //yha mid means index number
    }
    else if(key>arr[mid])
    {
        start=mid+1;
    }
    else //(key<arr[mid])
    {
        end=mid-1;
    }
    mid=(start+end)/2;

   } 
   //ab loop bahar aa gye mtlb element nhi mila
   return -1;
}
int main(){
int arr[]={2,4,6,8,10,12,16};
int size=7;
int key;
cout<<"Enter the key which you want to search :";
cin>>key;

int index = binarySearch(arr,size,key);

if(index==-1)
{
    cout<<"Key is not found"<<endl;
}
else
{
    cout<<"Key is found at index no. : "<<  index<<endl;
}
return 0;
}