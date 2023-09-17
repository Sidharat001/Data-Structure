#include <stdio.h>

int main() {
    // define non shorting arrays
    int arr[] = {42, 19, 73, 56, 88, 34, 67, 91, 12, 50};
    // take size of arrays
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // loop starting from 0 to size-1 of arrays
    for(int i=0; i<size; i++){
        // nested loops starting from i+1 to size-1 of arrays
        for(int j=i+1; j<size; j++){
            // check if array[i] value is greater than array[j] value then swap values 
            if(arr[j] < arr [i]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    
    // print sorting results of arrays
    for(int i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}