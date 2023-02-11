#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter how many number you want to store :"<<endl;
cin>>n;

vector<int>arr(n);
cout<<"Enter  the value :";
for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}


//print

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<endl;
}

return 0;
}