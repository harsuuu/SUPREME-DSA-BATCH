#include<iostream>
#include<vector>
using namespace std;
int main(){

//create vector

vector<int>arr;

cout<<arr.size()<<endl;    //means how many elements in vector.

cout<<arr.capacity()<<endl;   //means how many element we can store means how many blocks in an array.

//insert

arr.push_back(5);
arr.push_back(7);

//print

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<endl;
}

//remove
cout<<"Ab remove hoga last bala"<<endl;

arr.pop_back();

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<endl;
}

cout<<"Ab print hoga ki array empty hai ki nhi"<<endl;

cout<<arr.empty()<<endl;   // 1 means positive and 0 means negative.


return 0;
}