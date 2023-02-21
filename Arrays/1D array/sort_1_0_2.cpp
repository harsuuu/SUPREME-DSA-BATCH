#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorting(vector<int>&arr)
{
    sort(arr.begin(),arr.end());
}

int main(){
vector<int>arr{0,1,2,0,2,1,2,0,2,1,0};
sorting(arr);
//print
for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}