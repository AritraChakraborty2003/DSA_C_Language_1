#include<stdio.h>
int min_ele(int a[],int n){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
void main(){
 int a[]={5,3,1,7,9,8,0};
 int ans=min_ele(a,7);
 printf("%d",ans);
}