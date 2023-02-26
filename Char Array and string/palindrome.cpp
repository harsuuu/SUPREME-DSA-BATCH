#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(char name[10])
{
    int i=0;
    int j=strlen(name)-1;
    while(i<=j)
    {
        if(name[i]!=name[j])
        {
            return false;
        }
        else //if name[i]==name[j]
        {
            i++;
            j--;
        }
    }  return true;
}
int main(){
char name[10];
cout<<"Enter the name :";
cin>>name;
cout<<palindrome(name);
return 0;
}