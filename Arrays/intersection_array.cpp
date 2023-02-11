#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,6};
    vector<int>brr{2,4,5,6};

    vector<int>ans;

    //outer loop on arr vector
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];

        for(int j=0;j<brr.size();j++)
        {
            if(element==brr[i])
            {
                ans=push_back();
            }
        }

    }
return 0;
}