#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int a){
    for(int i=2;i<sqrt(a);i++)
    {
        if((a%i)==0) return false;
    }
    return true;
}


void main(){
    int n=17;
    if(isPrime(n))  printf("Prime number");

    else printf("composite number");


}