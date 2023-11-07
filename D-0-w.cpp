#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
    int d_o_w;
    cout<<"enter the number of week:";
    cin>>d_o_w;
    switch (d_o_w)
    {
    case 1: cout<<"\nsunday";
        break;
    case 2: cout<<"\nmonday";
        break;
    case 3: cout<<"\ntuesday";
        break;
    case 4: cout<<"\nwednesday";
        break;
    case 5: cout<<"\nthursday";
        break;
    case 6: cout<<"\nfriday";
        break;
    case 7: cout<<"\nsaturday";
        break; 
    default:cout<<"\nwrong number of the day";
    }
    return 0;
}
