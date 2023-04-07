#include <iostream>
using namespace std;
class tollBooth{
public:
unsigned int car_number;
double money;
tollBooth(){
    car_number=0;
    money=0;
}
void payingcar(){
car_number++;
money+=0.5;
}
void nopaycar(){
    car_number++;
}
void display(){
    cout<<"NUmber of cars equals "<<car_number<<" cars"<<endl;
    cout<<"Total dough accumulated equals "<<money<<"cedis"<<endl;
}
getch

};