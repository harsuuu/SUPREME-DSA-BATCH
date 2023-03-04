#include<iostream>
using namespace std;
void update(int* a, int* b)
{
    *a=100;
    *b=200;
}
int main(){
int arr[4]={10,20,30,40};
int* ptr=&arr[1];
int* qtr=&arr[2];
update(ptr,qtr);

for(int i=0;i<4;i++)
{
    cout<<arr[i]<<endl;
}
return 0;
}