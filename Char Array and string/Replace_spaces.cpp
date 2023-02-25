#include<iostream>
#include<string.h>
using namespace std;
void replace_spaces(char sentence[100])
{
    int i=0;
    int length=strlen(sentence);
    for(int i=0;i<length;i++)
    {
        if(sentence[i]==' ')
        {
            sentence[i]='@';
        }
    }
}
int main(){
char sentence[100];
cout<<"Enter the senstence :";
cin.getline(sentence,50);

replace_spaces(sentence);

cout<<sentence;

return 0;
}