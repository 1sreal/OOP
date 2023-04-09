#include <iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[5] = {2, 4, 5, 3, 7};
    int size = sizeof(arr)/sizeof(int);

    int result = findLargest(arr,size);
    cout<< "The largest array member is "<< result << "." << endl;
    return 0;
}