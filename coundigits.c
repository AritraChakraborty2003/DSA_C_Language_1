#include<math.h>
#include<stdio.h>
int getDigits(int n){ return log10(n)+1;}
void main(){
    int a=69358;
    printf("The no of digits of %d is:- %d ",a,getDigits(a));
}