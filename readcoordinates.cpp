#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
    int Distance,x1,x2,y1,y2;
    cout<<"enter coordinates of x y";
    cin>>x1>>y1;
    cout<<"enter coordinates of x y";
    cin>>x2>>y2;
    Distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<"the distance between the two points is :"<<Distance<<endl;
return 0;
}
