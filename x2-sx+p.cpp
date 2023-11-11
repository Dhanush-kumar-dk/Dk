#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
    int s, p, a, b, c;
    cout<<"\n enter the sum of two numbers :";cin>>s;
    cout<<"\n enter the product of two numbers :";cin>>p;
    if(s>0)
    cout<<"quadratic eqn formed is : x*x-"<< s <<"+"<< p << endl;
    else
    cout<<"quadratic eqn formed is x*x+"<< s <<"+"<< p << endl;
    a=1;
    b=-s;
    c=p;
    cout<<"coefficient are : a= "<< a <<" ,b = "<< b <<", c = "<< c << endl;
    double discriminant = b*b -4*a*c;
    double sqroot = sqrt(discriminant);
    double root1= (-b  + sqroot)/(2*a);
    double root2=(-b - sqroot)/(2*a);
    cout<<"number 1:"<< root1 << "and number 2:"<< root2 <<endl;
    return 0;
}