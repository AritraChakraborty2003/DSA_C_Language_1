#include<stdio.h>
#include<stdlib.h>

typedef struct QNode{
     int data;
     struct QNode* next;
}QNode;

typedef struct Queue{
    struct QNode* front,* rear;
}Queue;

QNode* newNode(int x){
    QNode* nNode=(QNode*)(malloc(sizeof(QNode)));
    nNode->data=x;
    nNode->next=NULL;
    return nNode;
}
Queue* createQueue(){
    Queue* q=(Queue*)(malloc(sizeof(Queue)));
    q->front=q->rear=NULL;
    return q;
}

void enqueue(Queue* q,int x){
    QNode* temp=newNode(x);
    if(q->rear==NULL)
        q->front=q->rear=temp;
    q->rear->next=temp;
    q->rear=temp;
}

int dequeue(Queue* q){
    if(q->front==NULL) return -1;
    QNode* temp=q->front;
    int data=q->front->data;
    q->front=q->front->next;
    if(q->front==NULL) q->rear=NULL;
    free(temp);
    return data;

}


int main(){

    Queue* q=createQueue();
    enqueue(q,23);
    enqueue(q,27);
    enqueue(q,29);
    printf("%d ",dequeue(q));


    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));
    printf("\n");


    return 0;
}