#include<iostream>
using namespace std;
int main(){
int arr[10];
int* ptr=arr;
cout<<sizeof(arr)<<endl;
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
return 0;
}