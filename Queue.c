#include <stdio.h>
#include <stdbool.h>

#define MAX 5  // Maximum capacity of the queue

typedef struct {
    int items[MAX];
    int front;
    int rear;
} CircularQueue;

// Initialize queue
void initQueue(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if queue is full
bool isFull(CircularQueue *q) {
    return (q->front == (q->rear + 1) % MAX);
}

// Check if queue is empty
bool isEmpty(CircularQueue *q) {
    return q->front == -1;
}

// Enqueue: Add element to the rear
void enqueue(CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
        return;
    }
    if (isEmpty(q)) {
        q->front = 0; // First element initialization
    }
    q->rear = (q->rear + 1) % MAX; // Circular increment
    q->items[q->rear] = value;
    printf("Enqueued %d\n", value);
}

// Dequeue: Remove element from the front
int dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1; // Return error sentinel
    }
    int dequeuedValue = q->items[q->front];
    
    // If it was the last element, reset queue pointers
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX; // Circular increment
    }
    return dequeuedValue;
}

int main() {
    CircularQueue q;
    initQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);

    printf("Dequeued: %d\n", dequeue(&q));
    printf("Front item is: %d\n", q.items[q.front]);

    return 0;
}
