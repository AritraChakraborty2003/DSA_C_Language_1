#include<stdio.h>
#include<stdlib.h>
typedef struct QNode{
    int data;
    struct QNode* next;
}qNode;

typedef struct Queue{
    qNode* front;
    qNode* rear;
}queue;

queue* createQueue(){
    queue* q =(queue*)(malloc(sizeof(queue)));
    q->front=NULL;
    q->rear=NULL;
    return q;
}

void enqueue(queue* q,int val){
    qNode* temp=(qNode*)(malloc(sizeof(qNode)));
    temp->data=val;
    if(q->front==NULL)
        q->front=temp;
    else
        q->rear->next=temp;
    q->rear=temp;
    q->rear->next=q->front;
}

int dequeue(queue* q){
    if(q->front==NULL) return -1;
    int value=q->front->data;
    if(q->front==q->rear){
        free(q->front);
        q->rear=NULL;
        q->front=NULL;
    }
    else{
         qNode* temp=q->front;
         value=temp->data;
         q->front=q->front->next;
         q->rear->next=q->front;
         free(temp);
    }
    return value;

}

void main(){
    queue* q= createQueue();
    enqueue(q,10);
    enqueue(q,11);
    enqueue(q,12);
    enqueue(q,13);

    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));
    printf("%d ",dequeue(q));
    printf("\n");
   
}




