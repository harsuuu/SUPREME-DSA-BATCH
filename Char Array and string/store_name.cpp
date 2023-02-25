#include<iostream>
#include<string.h>
using namespace std;
int main(){
char name[100];
cout<<"Enter the name :";
cin.getline(name,50);

cout<<"Your name is :"<<name<<endl;
return 0;
}