#include<stdio.h>
#include<stdlib.h>
void Toh(int n,char base,char dest,char aux){
    if(n==1){
        printf("Move disk 1 from %c to %c \n",base,dest);
        return;
    }
    Toh(n-1,base,aux,dest);
    printf("Mode disk %d from %c to %c \n",n,base,dest);
    Toh(n-1,aux,dest,base);
}
void main(){
    Toh(2,'A','C','B');
}