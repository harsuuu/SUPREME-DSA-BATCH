#include<iostream>
#include<vector>
using namespace std;
int main(){

//create vector
int n;
cout<<"Enter the how many value of n";
cin>>n;


cout<<"Enter the value ";
vector<int>arr(n);

cout<<arr.size()<<endl;   

//print

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<endl;
}

return 0;
} 
