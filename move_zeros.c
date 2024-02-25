#include<stdio.h>
#include<stdlib.h>
void zerosToEnd(int a[],int n){

    int index=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0)
            a[index++]=a[i];
    }
    while(index<n){
        a[index++]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[]={2,0,3,0,5,6,7,0};
    zerosToEnd(a,8);
    return 0;
}