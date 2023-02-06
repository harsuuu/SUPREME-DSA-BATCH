#include<iostream>
using namespace std;

void printName()
{
    int n;
    cout<<"Enter the value how man times you want to print :";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Harsh"<<endl;
    }
}

int main(){
printName();
return 0;
}