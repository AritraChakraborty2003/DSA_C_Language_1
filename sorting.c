#include<stdio.h>

//Time Complexity- O(N^2)
//Space Complexity - O(1)
void swap(int a[],int l,int h){
    int temp=a[l];
    a[l]=a[h];
    a[h]=temp;
}
void sSort(int a[],int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j])
                min=j;
        }

        if(min!=i){
            swap(a,min,i);
        }
    }
    
}

void bubbleSort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
                swap(a,i,j);
        }
    }
}

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1; int key=a[i];
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;    
    }
}

void printArray(int a[],int n,char* s){
        printf("after %s the array is \n",s);
        for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void main(){
    int a[]={5,9,3,1,7,2};
    insertionSort(a,6);
    //sSort(a,6);
    //bubbleSort(a,6);
    //printArray(a,6,"BubbleSort");
    printArray(a,6,"InsertionSort");

}
