#include<stdio.h>
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a, int b){
    return a*b/gcd(a,b);
}
void main(){
    int a=9;
    int b=6;
    printf("HCF is: %d\nand LCM is: %d\n",gcd(a,b),lcm(a,b));
}