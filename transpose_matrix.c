#include<stdio.h>
#include<stdlib.h>

void transpose(int n,int m,int a[][m]){
    int trans[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[j][i]=a[i][j];
        }
    }

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    

}

void main(){
    int n=2;
    int m=3;
    int res[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                scanf("%d",&res[i][j]);
        }
    }
    transpose(n,m,res);
}