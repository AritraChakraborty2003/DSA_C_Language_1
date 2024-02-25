#include<stdio.h>
#include<stdbool.h>
#include<math.h>
void Factors(int a){
    for(int i=1;i<sqrt(a);i++)
    {
        if((a%i)==0) printf("%d %d ",i,a/i);
    }
    printf("\n");
}


void main(){
    int n=18;
    Factors(n);


}