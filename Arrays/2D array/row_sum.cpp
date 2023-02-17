#include<iostream>
using namespace std;
void printSum(int arr[][3], int row, int col)
{
    
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
         cout<<sum<<endl;
    }
}
int main(){
int arr[3][3];
int row=3;
int col=3;
//input
cout<<"Enter input :"<<endl;
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>arr[i][j];
    }
}

cout<<"Printing the output :"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j] <<" ";
    }
    cout<<endl;
}

printSum(arr,row,col);
return 0;
}