#include<stdio.h>
#include<stdlib.h>
void Merge(int a[],int l,int mid,int h){
      int n1=mid-l+1;
      int n2=h-mid;
      int L[n1]; int R[n2];
      for(int i=0;i<n1;i++) L[i]=a[l+i];
      for(int j=0;j<n2;j++) R[j]=a[mid+1+j];
      int i=0;
      int j=0;
      int k=l;
      while(i<n1 && j<n2){
        if(L[i]<R[j]) a[k++]=L[i++];
        else a[k++]=R[j++];
      }
      while(i<n1)   a[k++]=L[i++];
      while(j<n2)   a[k++]=R[j++];


}

void mergeSort(int a[],int l,int h){
    if(h>l){
        int mid=l+(h-l)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        Merge(a,l,mid,h);
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void main(){
    int a[]={6,5,3,2,1,4};
    int n=sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,n-1);
    printArray(a,n);
}