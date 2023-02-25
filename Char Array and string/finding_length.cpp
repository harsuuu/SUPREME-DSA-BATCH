#include<iostream>
#include<string.h>
using namespace std;
int getlength(char name[])
{
    int length=0;
    int i=0;
    while(name[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}
int main(){
char name[100];
cout<<"Enter the name :";
cin>>name;
cout<<"Length is :"<<getlength(name)<<endl;

//Predefined function for lenth

cout<<"Length is :"<<strlen(name)<<endl;
return 0;
}