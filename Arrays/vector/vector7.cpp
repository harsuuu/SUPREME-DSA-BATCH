#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>arr(10,-1);  //yha 10 elemement hai aur sare -1 hai.

cout<<"Size of this array is :"<<arr.size()<<endl;

cout<<"Capacity of this array is :"<<arr.capacity()<<endl;

//Ab value print krke dekhte hai kya hai.

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}