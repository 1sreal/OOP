#include <iostream>
using namespace std;

int smallestNum(int arr[], int size){
    int min = arr[0];
    for(int i = 0; i< size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[] = {8, 4, 5, 2, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = smallestNum(arr, size);
    cout << "The smallest member of the array is " << result << "." << endl;
}