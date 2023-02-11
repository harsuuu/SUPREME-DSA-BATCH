#include<iostream>
#include<vector>
using namespace std;
int main(){

//create vector
int n;
cout<<"Enter how many element you want to store in array :";
cin>>n;
vector<int>arr(n,101);   //n element hai jiski value 101 hai.

//print

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<endl;
}

return 0;
} 
