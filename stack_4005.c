#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void push(int value);
void pop();
void display();

int stack[SIZE], top = -1;

void main() {
    int value, choice;
    while(1) {
        printf("\n\n****MENU*****\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("\nWrong selection!!! Try again!!!\n");
        }
    }
}

void push(int value) {
    if(top == SIZE - 1) {
        printf("\nStack is Full!!! Insertion is not possible!!!\n");
    } else {
        top++;
        stack[top] = value;
        printf("\nInsertion success!!!\n");
    }
}

void pop() {
    if(top == -1) {
        printf("\nStack is Empty!!! Deletion is not possible!!!\n");
    } else {
        printf("\nDeleted: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if(top == -1) {
        printf("\nStack is Empty!!!\n");
    } else {
        int i;
        printf("\nStack elements are:\n");
        for(i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
