#include <iostream>
using namespace std;

int main(){
    int  height , weight, bmi;
    cout << "Provide your height in centimetres(cm)"<<endl;
    cin >> height;
    double height_m = height/100;
    cout << "Provide your weight in kilograms(kg)"<< endl;
    cin >>  weight; 
    bmi = weight/height_m*height_m;
    cout<< "Your BMI is " << bmi  << "Kg/m^2"<< endl;
    
    if(bmi < 18.5){
        cout<< "You are underweight.\n";
    }
    else if (18.5 > bmi < 24.9){
        cout<<"You weight is normal.\n";
    }
    else if (25 > bmi < 29.9){
        cout<<"You are overweight.\n";
    }
    else if (30> bmi < 39.9){
        cout<<"You are obese.\n";
    }
    else{
        cout<< "You are morbidly obese";
    }
    return 0;
}