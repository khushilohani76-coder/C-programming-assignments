#include <stdio.h>
#include <stdbool.h>

#define MAX 5  // Maximum capacity of the stack

typedef struct {
    int items[MAX];
    int top;
} Stack;

// Initialize stack
void initStack(Stack *s) {
    s->top = -1; // -1 means the stack is empty
}

// Check if stack is full
bool isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Check if stack is empty
bool isEmpty(Stack *s) {
    return s->top == -1;
}

// Push element onto stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    s->top++;
    s->items[s->top] = value;
    printf("Pushed %d onto the stack\n", value);
}

// Pop element from stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
        return -1; // Return error sentinel
    }
    int poppedValue = s->items[s->top];
    s->top--;
    return poppedValue;
}

// Peek top element
int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot peek\n");
        return -1;
    }
    return s->items[s->top];
}

int main() {
    Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    printf("Top element is: %d\n", peek(&s));

    printf("Popped element: %d\n", pop(&s));
    printf("Popped element: %d\n", pop(&s));

    return 0;
}
