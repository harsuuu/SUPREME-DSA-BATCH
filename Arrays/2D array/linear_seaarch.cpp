#include<iostream>
using namespace std;
void findkey(int arr[][3], int row,int col,int key)
{
  for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        if(arr[i][j]==key)
        {
            cout<<"key is found"<<endl;
            return;
        }
    }

}cout<<"Key is not found"<<endl;  
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
int key;
cout<<"Enter the key which you want to search :";
cin>>key;

findkey(arr,row,col,key);
return 0;
}