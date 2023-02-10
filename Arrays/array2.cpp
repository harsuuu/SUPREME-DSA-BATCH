#include<iostream>
using namespace std;
int main(){
int A[5]={2,3,4,5,6};    //declare and initialize the array.

cout<<A[0]<<endl;
cout<<A[1]<<endl;
cout<<A[2]<<endl;
cout<<A[3]<<endl;
cout<<A[4]<<endl;
cout<<"Array is declared and intialized successfully"<<endl;


//With the help of loop 

for(int i=0;i<5;i++)
{
    cout<<A[i]<<endl;
}
return 0;
}