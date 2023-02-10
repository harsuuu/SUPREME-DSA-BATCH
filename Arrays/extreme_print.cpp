#include<iostream>
using namespace std;
int main(){
int arr[8]={1,2,3,4,5,6,7,8};
int size =8;

int start=0;   //index 0
int end=size-1;   

while(true)  //while(start<=end)
{
    if(start>end)
    break;
    if(start==end)  //jb odd hoga
    {
        cout<<arr[start];
    }
    else
    {
    cout<<arr[start]<<endl;
     cout<<arr[end]<<endl;

     start++;
     end--;
    }

}
return 0;
}