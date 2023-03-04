#include<iostream>
using namespace std;
int main(){
int arr[4]={10,2,4,5};
cout<<arr<<endl;        //base address of first element
cout<<arr[0]<<endl;
cout<<*arr<<endl; 
cout<<&arr<<endl;       //base address of first element
cout<<&arr[0]<<endl;    //base address of first element

int* ptr=arr;

cout<<ptr<<endl;        //base address of first element
cout<<&ptr<<endl;       //address of ptr variabele
return 0;
}