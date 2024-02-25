#include<stdio.h>
#include<stdlib.h>
void swap(int a[],int l,int h){
    int temp=a[l];
    a[l]=a[h];
    a[h]=temp;
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int partition(int a[],int l,int h){
    int pivot=a[l];
    int i=l; int j=h;
  while(j>i){
    while(i<h && a[i]<=pivot) i++;
    while(j>=0 && a[j]>pivot) j--;
    if(j>i) swap(a,i,j);
  }
  swap(a,j,l);
  return j;
 
}
void QuickSort(int a[],int l,int h){
    if(h>l){
        int pivot=partition(a,l,h);
        QuickSort(a,l,pivot-1);
        QuickSort(a,pivot+1,h);
    }
}

void main(){
    int a[]={6,5,3,2,1,4};
    int n=sizeof(a)/sizeof(a[0]);
    QuickSort(a,0,n-1);
    printArray(a,n);
}