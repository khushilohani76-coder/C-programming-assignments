#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue is Full!\n");
        return;
    }
    
    if (front == -1) {
        front = 0; 
    }
    
    rear++;
    queue[rear] = value;
    printf("Added: %d\n", value);
}


void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
        return;
    }
    
    printf("Removed: %d\n", queue[front]);
    front++;
}


void display() {
    if (front == -1 || front > rear) {
        printf("Queue is Empty!\n");
        return;
    }
    
    printf("Current Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    // Try adding items
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    
    dequeue();
    display();

    return 0;
}
