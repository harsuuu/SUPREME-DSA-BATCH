#include<iostream>
#include<vector>
using namespace std;
int main(){
//create two vector
vector<int>arr{1,2,3,3,4,5};
vector<int>brr{3,4,5,6};
//answer vector
vector<int>ans;

//outer loop for arr vector element
for(int i=0;i<arr.size();i++)
{
    int element=arr[i];

    //for every element run loop of brr.

    for(int j=0;j<brr.size();j++)
    {
        if(element==brr[j])
        {
            //marks kr do un element ko jo ho gye match.
            brr[j]=-1;   //-1 isliye qki sare element postive hai. marks krne se duplicate jo honge bo dubara match ni honge.
            ans.push_back(element);
        }
    }
}

//printing the element
for(int i=0;i<ans.size();i++)
{
    cout<<ans[i]<<endl;
}
return 0;
}