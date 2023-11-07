#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
using namespace std;
 int main() {
    char ch,ch1;
    float l,b, area,pm ,diag;
    do{
    cout<<"\nrectangle";
    cout<<"\n 1.area";
    cout<<"\n 2.perimeter";
    cout<<"\n 3.Diagonal";
    cout<<"\n 4.exit";
    cout<<"\nenter your choice :";
    cin>>ch;
    if(ch=='1'||ch=='2'||ch=='3'){
        cout<<"\n"<<"enter length and breadth :";
        cin>>l>>b;
    }
    switch(ch){
        case'1':area=l*b;
        cout<<"\n the area of the rectanlge length of "<<l<<"and breadth"<<b<< "is "<<area<<"\n";
        break;
        case'2':pm=2*(l*b);
        cout<<"\n the perimeter of the rectangle length of "<<l<<"and breadth"<<b<<"is "<<pm<<endl;
        break;
        case'3':diag=sqrt(l*l+b*b);
        cout<<"\n the diagonal of the rectangle length of "<<l<< "and breadth "<<b<<"is "<<diag<<endl;
        break;
        case'4':break;
        default:cout<<"wrong choice!\n";
        break;
    }
    cout<<"\n press any key to continue ";
    ch1=getchar();
    }while (ch>='1'&&ch<='3');
    return 0;
}