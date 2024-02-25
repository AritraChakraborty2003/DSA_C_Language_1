#include<stdio.h>
int LinearSearch(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k) return i;
    }
    return -1;
}
void main(){
    int a[]={3,4,5,7,6,9};
    int size=sizeof(a)/sizeof(a[0]);
    int res=LinearSearch(a,size,6);
    printf("Thw index of element %d\n",res);
}