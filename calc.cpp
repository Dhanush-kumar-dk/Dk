#include<iostream>
#include<stdlib.h>
using namespace std;
int  main() {
    char ch;
    float a,b,result;
    cout<<"enter number 1:";
    cin>>a;
    cout<<"enter number 2:";
    cin>>b;
    cout<<"enter the operator (+,-,*,/) :";
    cin>>ch;
    if(ch=='+')
    result=a+b;
    else if (ch=='-')
    result=a-b;
    else if (ch=='*')
    result=a*b;
    else if (ch=='/')
    result=a/b;
    else{
        cout<<"\n wrong operator";
    }
    cout<<"\n the calculated result is :"<<result<<endl;
    return 0;
}