#include<stdio.h>
int kthBitSet(int n,int k){
        if(((1)&(n>>k))==1) return 1;
     return 0;
}

void main(){
   int n=8;
   int k=2;
   if(kthBitSet(n,k))  printf("It is a set bit");
   else
   printf("It is not a set bit");
}