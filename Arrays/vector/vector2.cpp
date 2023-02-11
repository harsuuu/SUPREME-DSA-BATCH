#include<iostream>
#include<vector>
using namespace std;
int main(){

//create vector
int n;
cout<<"Enter the value of n";
cin>>n;
vector<int>arr(n,101);

cout<<arr.size()<<endl;   

//print

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<endl;
}

return 0;
} 
