#include<iostream>
#include<vector>
using namespace std;
int main(){
int arr[]={1,2,3,4};
int sizea=4;
int brr[]={5,6,7,8};
int sizeb=4;

vector<int>ans;
//pushing the element of arr into ans array.
for(int i=0;i<sizea;i++)
{
    ans.push_back(arr[i]);
}

//pushing the element of brr into ans array.
for(int i=0;i<sizeb;i++)
{
    ans.push_back(brr[i]);
}

//printing the answer array.

for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
return 0;
}