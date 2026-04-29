//stack implementation using linked list
#include<stdio.h>
#include<stdlib.h>

//Define node structure
struct Node{
    int data;
    struct Node*next;
};
struct Node*top=NULL; //Top of stack

//Push operation
void push(int value){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));

    if(newNode==NULL){
        printf("Stack Overflow(Memory not available)\n");
        return;
    }
    newNode->data=value;
    newNode->next=top;
    top=newNode;
    printf("%d pushed to stack\n,value");
}

//Pop operation
void pop(){
    if(top==NULL){
        printf("Stack Underflow(Empty stack)\n");
        return;
    }

    struct Node*temp=top;
    printf("%d popped from stack \n",top->data);
    top=top->next;
    free(temp);
}

// Peek operation
void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is: %d\n", top->data);
    }
}

// Traverse operation
void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* temp = top;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display (Traverse)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}