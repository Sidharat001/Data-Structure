#include<stdio.h>

// create micro function for get length of array
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

void popOperation(int *top, int *arr);

void printReverse(int top, int *arr);

// create push function
void pushOperation (int *top, int stackCapacity, int *arr){
    // check stack Overflow
    if(*top == stackCapacity){
        printf("\nStack Capicity Overflow");
        return;
    }   

    // get stack item by user
    int stackItem;
    printf("Enter The Stack value : ");
    scanf("%d", &stackItem);

    // assign stack item
    arr[*top] = stackItem;
    (*top)++;
}

void main () {
    // Get Satck Size from users
    int stackCapicity;
    printf("Entering The Stack Size : ");
    scanf("%d", &stackCapicity);
    
    // assing the stack size
    int arr[stackCapicity];
    int top = 0;

    getOption: 
    // give option to user
    int option;
    printf("\n=============== Choose Operation Type ===============\n");
    printf("1. Push Operation\n");
    printf("2. Pop Operation\n");
    printf("3. Display Operation\n");
    printf("4. Exit\n");
    scanf("%d", &option);
    
    switch (option)
    {
        case 1: 
        pushOperation(&top, stackCapicity, arr);
        goto getOption;
        break;

        case 2: 
        popOperation(&top, arr);
        goto getOption;
        break;        

        case 3: 
        printReverse(top, arr);
        goto getOption;
        break;
        default: 
        printf("Invalid Operation");
        goto getOption;
    }

}


void popOperation (int *top, int *arr){
    // check under flow conditions
    if(*top == 0){
        printf("Stack is empty");
        return;
    }

    // subtract top value 
    (*top)--;
    printf("Pop Options successfully with value of : %d", arr[*top]);
    // assign new array size
    arr[*top];
}

void printReverse(int top, int *arr){
    // check underflow condition
    if(top == 0){
        printf("Stack is empty");
        return;
    }

    // display stack items
    int i = top - 1;
    while (i >= 0) {
        printf("%d\n", arr[i]);
        i--;
    }
    
}