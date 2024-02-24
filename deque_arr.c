#include<stdio.h>
#include<stdlib.h>
typedef struct deque{
    int rear;
    int front;
    int size;
    int* arr;
}deque;

deque* createDeque(int size){

    deque* dq=(deque*)(malloc(sizeof(deque)));
    dq->front=-1;
    dq->rear=-1;
    dq->size=size;
    dq->arr=(int*)(malloc(sizeof(int)*size));
    return dq;

}

void enqueue(deque* dq,int x){
    if((dq->front==0 && dq->rear==dq->size-1)||(dq->rear=(dq->front-1)%(dq->size-1))){
       return;
    }
    else if(dq->front==-1){
        dq->front=dq->rear=0;
        dq->arr[dq->rear]=x;
    }
    else if(dq->rear=dq->size-1 && dq->front!=0){
         dq->rear=0;
         dq->arr[dq->rear]=x;
    }
    else{
        dq->rear++;
        dq->arr[dq->rear]=x;
    }

}

int dequeque(deque* q){
    if(q->front==-1) return -1;
    int d=q->arr[q->front];
    q->arr[q->front]=-1;
    if(q->front==q->rear){
        q->front=-1;
        q->rear=-1;
    }
    else if(q->front==q->size-1){
        q->front=0;
    }
    else{
        q->front++;
    }
    return d;

}

void main(){
    deque* dq=createDeque(10);
    enqueue(dq,27);
    enqueue(dq,29);
    enqueue(dq,30);

    printf("%d",dequeque(dq));
    printf("%d",dequeque(dq));
    printf("%d",dequeque(dq));


}