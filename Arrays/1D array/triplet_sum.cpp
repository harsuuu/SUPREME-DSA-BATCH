#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{10,20,30,40,50,60,70,80};
    int start=0;   //int start=arr[0];
    int end=arr.size()-1;
    int i =0;      //int i =arr[0];
    int sum=100;
    for(int i=0;i<arr.size();i++)
    {
        int element=arr[i];
        {
            for(int j=i;j<arr.size();j++)
            {
                int element2=arr[j];

                {
                    for(int k=i;k<arr.size();k++)
                    {
                        //isse to pair print honge , teeno loops ke.
                        //cout<<"("<<element<<","<<element2<<","<<arr[k]<<")"<<endl;
                        if(element+element2+arr[k]==sum)
                        {
                            cout<<"("<<element<<","<<element2<<","<<arr[k]<<")"<<endl; 
                        }
                    }

                }
            }

        }
    }
}