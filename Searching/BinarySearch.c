// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // define the array in ascending order 
    int arr[] = {3,5,9,13,26,45,63,72,91,101};
    // define low index and get input search number from user
    int low = 0, search,count=0;
    // get size of arr 
    int high = (sizeof(arr) / sizeof(arr[0])) - 1;
    
    // get search number from user
    printf("Enter The Search Number :-");
    scanf("%d", &search);
    
    // started logic
    while(low <= high){
        int mid = (low + high) / 2;

        // if search is greater than the mid value then low = mid + 1;
        if(search > arr[mid]){
            low = mid + 1;
        }
        //  if search is less than the mid value then high = mid - 1;
        else if(search < arr[mid])
        {
             high = mid - 1;
        }
        // if search is equal to the mid value then return anything 
        else{
            count++;
            break;
        }
    }
    
    // check if number found or not
    if(count == 1)
        printf("Get Response");
    else
        printf("Not Not Exited");
    
}