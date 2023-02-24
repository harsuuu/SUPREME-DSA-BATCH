#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){


vector<int>arr{1,2,3,4,4,5,6,7};
vector<int>brr{2,2,4,4,5,6,6,7,8,8,8,9,10};

set<int>s;
//pushing the element of arr into ans array.
for(int i=0;i<arr.size();i++)
{
    s.insert(arr[i]);
}

//pushing the element of brr into ans array.
for(int j=0;j<brr.size();j++)
{
    s.insert(brr[j]);
}


//aise bhi print kr skte hai.

for(auto value: s)
{
    cout<<value<<" ";
}
}
