// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // define the array in ascending order 
    int arr[] = {3,5,9,13,26,45,63,72,91,101};
    int count=0,i=0,search;

    // get sizs of arrays
    int size = (sizeof(arr) / sizeof(arr[0])) - 1;

    // get search number from user
    printf("Enter The Search Number :-");
    scanf("%d", &search);
    
    while(i < size){
        if(search == arr[i]){
            count++;
            break;
        }
        i++;
    }
    
    if(count == 1)
        printf("Get One Response");
    else
        printf("Not Found");
}