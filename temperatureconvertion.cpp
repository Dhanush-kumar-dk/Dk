#include <iostream>
using namespace std; 
int main()
{
    int choice;
    float temp, countemp;
    cout<<"\ntemperature conversion menu";
    cout<<"\n1.fahrenheit to celsius";
    cout<<"\n2.celsius to fahrenheit";
    cout<<"\nenter your choice";
    cin>>choice;
    if(choice==1){
        cout<<"\n enter temperature in fahrenheit :";
        cin>>temp;
        countemp=(temp-32)/1.8;
        cout<<"\n the temperature in celsius is:"<<countemp<<"\n";
    }
    else{
        cout<<"\n enter the temperature in celsius :";
        cin>>temp;
        countemp=1.8*temp+32;
        cout<<"/\n the temperature in fahrenheit is :"<<countemp<<"\n";
    }
    return 0;
}