#include<iostream>
using namespace std;
int printMinimum(int arr[][3], int row, int col)
{
    int min= INT_MAX;    
    for(int i=0;i<row;i++)
    {
       
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
           
    }
    return min;
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
cout<<"Minimum is :";
cout<<printMinimum(arr,row,col);
return 0;
}