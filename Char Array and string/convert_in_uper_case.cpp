#include<iostream>
#include<string.h>
using namespace std;
void uper_case_convert(char name[100])
{
    int length=strlen(name);
    for(int i=0;i<length;i++)
    {
        name[i]=name[i]-'a'+'A';    //ya name[i]=name[i]-32; 
    }
}
int main(){
char name[100];
cout<<"Enter the name :";
cin>>name;

cout<<"Lower case : "<<name<<endl;
uper_case_convert(name);

cout<<"Upper case : "<<name;
return 0;
}