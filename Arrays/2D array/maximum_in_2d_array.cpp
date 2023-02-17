#include<iostream>
using namespace std;
int printMax(int arr[][3], int row, int col)
{
    int max=0;    //max=INT_MIN
    for(int i=0;i<row;i++)
    {
       
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
           
    }
    return max;
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
cout<<"Maximum is :";
cout<<printMax(arr,row,col);
return 0;
}