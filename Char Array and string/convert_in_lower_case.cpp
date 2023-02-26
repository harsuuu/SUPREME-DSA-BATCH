#include<iostream>
#include<string.h>
using namespace std;
void lower_case_convert(char name[100])
{
    int length=strlen(name);
    for(int i=0;i<length;i++)
    {
        name[i]=name[i]-'A'+'a';   //ya name[i]=name[i]+32;
    }
}
int main(){
char name[100];
cout<<"Enter the name :";
cin>>name;

cout<<"Upper case case : "<<name<<endl; 

lower_case_convert(name);

cout<<"Lower case : "<<name;
return 0;
}

