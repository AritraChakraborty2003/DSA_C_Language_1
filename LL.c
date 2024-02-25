#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* insertAtBegin(Node* head,int data){
	Node* temp=(Node*)(malloc(sizeof(Node)));
	temp->data=23;
	temp->next=head;
	head=temp;
	return head;
	
}

void printLL(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}

void moveZerosEnd(int a[],int n){
	int index=0;
	int i;
	for(i=0;i<n;i++){
		if(a[i]!=0)
			a[index++]=a[i];
	}
	while(index<n) a[index++]=0;
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main(){
	
	int a[]={2,0,3,0,5,6,7,0};
	moveZerosEnd(a,8);
	
	Node* head=(Node*)(malloc(sizeof(Node)));
	head->data=15;
    head->next=NULL;
	head=insertAtBegin(head,21);
	head=insertAtBegin(head,20);
	head=insertAtBegin(head,23);
	printLL(head);
	
	return 0;
}