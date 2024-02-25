#include<stdio.h>
int countSetBits(int n){
     int cnt=0;
     while(n!=0){
        cnt++;
        n=n&(n-1);
     }
     return cnt;
}

void main(){
    int n=31;
    printf("%d\n",countSetBits(n));
}