#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    int item;

    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter the element to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("%d pushed into the stack.\n", item);
    }
}

int main() {
    int choice;

    do {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 2);

    return 0;
}