#include<stdio.h>

int binarySearch(int a[],int l,int h,int k){
    if(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==k) return mid;
        else if(a[mid]>k) return binarySearch(a,l,mid-1,k);
        else return binarySearch(a,mid+1,h,k);
    }
    return -1;
}

void main(){
    int a[]={3,5,6,7,9,10};
    printf("The index of element is %d\n ",binarySearch(a,0,5,7));
}