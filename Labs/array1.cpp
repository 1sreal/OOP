#include <iostream>
#include <string>
using namespace std;



#include <iostream>
using namespace std;

int main(){
    int array[5]={32,1,2,3,4};
    int *prt;
    prt=array;
    for(int i=0; i<5 ; i++)
        {cout<<*(prt++)<<endl;}
    return 0;
}

