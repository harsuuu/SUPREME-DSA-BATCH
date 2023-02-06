#include<iostream>
using namespace std;

int grade(int m)
{
    if(m>=90)
    {
        return 'A';
    }
    else if(m>=60)
    {
        return 'B';
    }
    else
    {
        return 'C';
    }
}
int main(){
int marks;
cout<<"Enter the marks :"<<endl;
cin>>marks;

char result = grade(marks);

cout<<"Grade is :"<<result<<endl;
return 0;
}