//implement stack operations using arrays and linked lists
#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

//Push
void push(int value){
    if(top==MAX-1){
       printf("Stack Overflow\n");
}else{
    top++;
    stack[top]=value;
    printf("Pushed %d\n",value);
}}

//Pop
void pop(){
    if (top==-1)
      printf("Stack underflow");
    else{
        printf("Popped %d\n",stack[top]);
        top--;
    }}
    //Display
    void disply(){
        if(top==-1)
          printf("Stack is empty\n");
        else{
            printf("Stack elements:\n");
            for(int i=top;i>=0;i--)
               printf("%d\n",stack[i]);
        }
    }
    //Main
    int main(){
        push(10);
        push(20);
        push(30);
        push(40);
        pop(10);
        disply();
    }
