#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    cout<<"Pass by reference"<<endl;
    cout<<arr[0]+10<<endl;
    cout<<arr[1]+10<<endl;

}
int main(){
int arr[]={5,6};
int size=2;

printArray(arr,size);

}