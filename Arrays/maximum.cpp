#include<iostream>
using namespace std;
int main(){
int arr[]={1,3,24,55,24};
int size=5;

int maxNum=0;  //int max=INT_MIN;  -->good practice.


for(int i=0;i<size;i++)
{
   if(arr[i]>maxNum)
   {
    maxNum=arr[i];
   }
}

cout<<"Maximum number is :"<<maxNum<<endl;


return 0;
}