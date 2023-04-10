#include <iostream>
using namespace std;
/*Using pointers, write a single function to find both the largest and smallest numbers in a
given integer array.*/


void find_Lar_Smal(int *arr, int size, int* min, int* max){
    *min = *max = *arr; // initializing all to the 1st element
    for(int i = 0; i < size; i++){
        if(*(arr+i) < *min ){
            *min = *(arr+i);
        }
        else if(*(arr+i) > *max){
            *max = *(arr+i);
        }
    }
}

int main(){
    int arr[]= {2,3,4,5,6};    
    int size = sizeof(arr)/sizeof(int);
    int min, max;

    find_Lar_Smal(arr, size, &min, &max);
    cout << "smallest " << min << endl;
    cout << "largest " << max << endl;

    return 0;
}

