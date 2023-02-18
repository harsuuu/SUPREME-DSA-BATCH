#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int key;
cout<<"Enter the key which you want to search :";
cin>>key;
vector<int>v{2,4,6,8,10,12};
if(binary_search(v.begin(),v.end(),key))
{
    cout<<"Key is found";
}
else
{
    cout<<"Key is not found";
}
return 0;
}