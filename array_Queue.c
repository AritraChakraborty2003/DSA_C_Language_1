#include<stdio.h>
#include<stdlib.h>
typedef struct Queue{
    int front,rear,size;
    int capacity;
    int* array;
}Queue;

Queue* createQueue(int capacity){
    Queue* q=(Queue*)(malloc(sizeof(Queue)));
    q->capacity=capacity;
    q->front=0;
    q->rear=capacity-1;
    q->array=(int*)(malloc(sizeof(int)*capacity));
    return q;
}

int isFull(Queue* q){
    return (q->size==q->capacity);
}

int isEmpty(Queue* q){
    return (q->size==0);
}


void enqueue(Queue* q,int x){
    if(isFull(q)) return;
    q->rear=(q->rear+1)%q->capacity;
    q->array[q->rear]=x;
    q->size++;
}

int dequeue(Queue* q){
    if(isEmpty(q)) return -1;
    int res=q->array[q->front];
    q->front=(q->front+1)%q->capacity;
    q->size--;
    return res;
}

int main(){
    Queue* q=createQueue(10);
    int a=20;
    int b=21;
    int c=23;
    enqueue(q,a);
    enqueue(q,b);
    enqueue(q,c);
    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));

    return 0;
}