#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr{10,20,30,40,50,60};
int sum=100;
//First making pair
for(int i=0;i<arr.size();i++)
{
    int element=arr[i];
    for(int j=i;j<arr.size();j++)
    {
        //ye line se pair bnayege.
        // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        if(element+arr[j]==sum)
        {
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        }
    }
}
return 0;
}