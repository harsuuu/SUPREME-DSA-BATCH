#include<iostream>
using namespace std;
int main(){
int arr[8]={1,2,3,4,5,6,7,8};
int size =8;

int start=0;   //index 0
int end=size-1;   

while(start<=end)  //while(start<=end)
{
    //step1
    swap(arr[start],arr[end]);
    //step2
    start++;
    //step 3
    end--;
}

for(int i=0;i<size;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}