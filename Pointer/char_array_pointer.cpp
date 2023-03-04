#include<iostream>
using namespace std;
int main(){
char ch[10]="harsh";
char* c=ch;
cout<<c<<endl;    //full string dega.
cout<<&ch<<endl;  //base address dega. 
cout<<&c<<endl;   //pointer ka address.
cout<<ch<<endl;   // full string dega.
cout<<ch[0]<<endl; //first index.
cout<<*c<<endl;    // first index dega.
return 0;
}