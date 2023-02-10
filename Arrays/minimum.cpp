#include<iostream>
using namespace std;
int main(){
int arr[]={1,3,24,55,24};
int size=5;

int minNum=INT_MAX;  //int min=0 -->Aise bhi kr skte hai.


for(int i=0;i<size;i++)
{
   if(arr[i]<minNum)
   {
    minNum=arr[i];
   }
}

cout<<"Minimum number is :"<<minNum<<endl;


return 0;
}