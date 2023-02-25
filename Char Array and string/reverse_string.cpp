#include<iostream>
#include<string.h>
using namespace std;
void reverse(char name[100])
{
    int i=0;
    int j=strlen(name)-1;
    while(i<=j)
    {
        swap(name[i],name[j]);
        i++; 
        j--;
    }
    
}
int main(){
char name[100];
cout<<"Enter the name :";
cin>>name;
cout<<"Before reverse : "<<name<<endl;
reverse(name);  //yha function call k bad.
cout<<"After reverse : "<<name<<endl;
//print
// for(int i=0;i<strlen(name);i++)
// {
//     cout<<"After reverse : "<<name[i]<<" ";
// }
return 0;
}