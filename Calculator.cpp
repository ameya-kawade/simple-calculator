#include<iostream>
#include<string>
using namespace std;

int main(){

int num1, num2;
char sign;
string choice:
do {
cout<<"Welcome to calculator"<<endl;
cout<<endl;
cout<<endl;
cin>>num1>>sign>>num2;
if (sign=='*')
{
cout<<"= "<<num1*num2<<endl;
}
if (sign=='+')
{
cout<<"= "<<num1+num2<<endl;
}



if (sign=='-')
{ 

cout<<"= "<<num1-num2<<endl;
}


if (sign='/')
cout<<"The answer is : "<<num1/num2<<endl;
cout<<"The remainder     is :"<<num1%num2<<endl;
cout<<"Do you still want to continue ? yes to continue and no to end) "<<endl;
cin>>choice:
while (choice!="no"|| choice!="no");
return 0;

}
