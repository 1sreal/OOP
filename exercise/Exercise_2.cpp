#include <iostream>
using namespace std;

int main(){
    int entry;
    double l,b,a,d;
    l=a*1.8+32;
    b=(d-32)*0.556;
    cout << "Enter 1. to convert from Degree Celcius to Fahrenheit. "<< endl;
    cout << "Enter 2. to convert from  Fahrenheit to Degree Celcius."<< endl;
    cin >> entry;
    
    

    if (entry==1)
    {
        cout<<"Enter the temperature you wish to convert"<<endl;
        cin>>a;
        cout<<"Your temperature in Farenheit is "<<l<< "degrees"<<endl;
        
    }
    else if (entry==2)
    {
         cout<<"Enter the temperature you wish to convert"<<endl;
         cin>>d;
        cout<<"Your temperature in Celsius is "<<b<< "degrees"<<endl;
    }
    return 0;   
    
}